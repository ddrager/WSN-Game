// $Id: AntiTheftC.nc,v 1.7 2009/10/28 19:11:15 razvanm Exp $
/*
 * Copyright (c) 2007 Intel Corporation
 * All rights reserved.
 *
 * This file is distributed under the terms in the attached INTEL-LICENSE     
 * file. If you do not find these files, copies can be found by writing to
 * Intel Research Berkeley, 2150 Shattuck Avenue, Suite 1300, Berkeley, CA, 
 * 94704.  Attention:  Intel License Inquiry.
 */
/**
 * Main code for the anti theft demo application.
 *
 * @author David Gay
 */
#include "antitheft.h"

module AntiTheftC
{
  uses {
    interface Timer<TMilli> as Check;
    interface Read<uint16_t>;
    interface ReadStream<uint16_t>;
    interface Read<uint16_t> as ReadVoltage;
    interface Leds;
    interface Boot;
    interface Mts300Sounder;
    interface DisseminationValue<settings_t> as SettingsValue;
    interface Send as AlertRoot;
    interface StdControl as CollectionControl;
    interface StdControl as DisseminationControl;
    interface SplitControl as RadioControl;
    interface LowPowerListening;
    interface AMSend as TheftSend;
    interface Receive as TheftReceive;

    // Add these to get routing information 
    interface CtpInfo;
    interface LinkEstimator;

    interface Random;
  }
}
implementation
{
  enum {
    /* Threshold for considering mote in a dark place */
    DARK_THRESHOLD = 600, 

    /* Amount of time warning leds should stay on (in checkInterval counts) */
    WARNING_TIME = 3,

    /* Number of acceleration samples to collect */
    ACCEL_SAMPLES = 10,

    /* Interval between acceleration samples (us) */
    ACCEL_INTERVAL = 10000
  };

  settings_t settings;
  message_t alertMsg, theftMsg;
  uint16_t ledTime; /* Time left until leds switched off */
  uint16_t accelSamples[ACCEL_SAMPLES];

  uint8_t blackListId = 0;
  uint16_t eventId = 0;

  /********* LED handling **********/

  /* Warn that some error occurred */
  void errorLed() {
    ledTime = WARNING_TIME;
    call Leds.led2On();
  }

  /* Notify user that settings changed */
  void settingsLed() {
    ledTime = WARNING_TIME;
    call Leds.led1Toggle();
  }

  /* Turn on bright red light! (LED) */
  void theftLed() {
    ledTime = WARNING_TIME;
    call Leds.led0Toggle();
  }

  /* Time-out leds. Called every checkInterval */
  void updateLeds() {
    if (ledTime && !--ledTime)
      {
	call Leds.led0Off();
	call Leds.led1Off();
	call Leds.led2Off();
      }
  }

  /* Check result code and report error if a problem occurred */
  void check(error_t ok) {
    if (ok != SUCCESS)
      errorLed();
  }


/* After voltage is read, add to the packet */
event void ReadVoltage.readDone( error_t result, uint16_t val ){ 
	alert_t *newAlert = call AlertRoot.getPayload(&alertMsg, sizeof(alert_t));
	if (result == SUCCESS){ 
		newAlert->voltageData = val;
		newAlert->eventId = eventId;
		eventId = eventId + 1;
	}
} 

  /* We have nothing to do after messages are sent */
  event void AlertRoot.sendDone(message_t *msg, error_t ok) { }
  event void TheftSend.sendDone(message_t *msg, error_t ok) { }

  /* We've received a theft alert from a neighbour. Turn on the theft warning
     light! */


  event message_t *TheftReceive.receive(message_t* msg, void* payload, uint8_t len) {

	// whoops - this is the raw message. it is not in a nice readable packet. 

    	theftLed(); /* we will leave this on so that we can tell when the nodes are sending/receiving messages */

	// we will have to break this packet down byte by byte and read the values from it


    	/* if this message from a blacklist node? If so, drop packet */
	/*
    		if (msg->stolenId == blackListId || msg->path1 == blackListId) {
	

    		} 
	*/

    	/* otherwise, pass it along and push the path entries */
	/*
    	else {
		return msg;
    	}
	*/
	return msg;
    
    
  }
  
  /* At boot time, start the periodic timer and the radio */
  event void Boot.booted() {
    errorLed();
    settings.alert = DEFAULT_ALERT;
    settings.detect = DEFAULT_DETECT;

    call Check.startPeriodic(DEFAULT_CHECK_INTERVAL);
    call RadioControl.start();
  }

  /* Radio started. Now start the collection protocol and set the
     wakeup interval for low-power-listening wakeup to half a second. */
  event void RadioControl.startDone(error_t ok) {
    if (ok == SUCCESS)
      {
	call DisseminationControl.start();
	call CollectionControl.start();
	call LowPowerListening.setLocalWakeupInterval(512);
      }
    else
      errorLed();
  }

event void RadioControl.stopDone(error_t ok) { }

/* New settings received, update our local copy */
event void SettingsValue.changed() {
    const settings_t *newSettings = call SettingsValue.get();

    /* settingsLed(); */
    settings = *newSettings;
    /* Switch to the new check interval */
    if (newSettings->targetId == TOS_NODE_ID) {
        call Check.startPeriodic(newSettings->checkInterval);
    }

	// ignoreId is the blacklist ID. If 0, no value; if a number add this to our ignored Ids table. 
    if (newSettings->ignoreId > 0) {
		if (newSettings->ignoreId == TOS_NODE_ID) {
			// uh oh, we are the ones being blacklisted, turn on error LED
			call Leds.led2On();
		}
		else {
			// work on one blacklist ID at a time, for now.
			blackListId = newSettings->ignoreId;
		}

     }

  }

/* Every check interval: update leds, check for theft based on current
 * settings */
event void Check.fired() {
	updateLeds();

	if (settings.detect & DETECT_DARK)
		call Read.read(); /* Initiate light sensor read */
	if (settings.detect & DETECT_ACCEL)
	{
		/* To sample acceleration, we first register our buffer
		   (postBuffer). Then we trigger sampling at the desired
		   interval (read) */
		call ReadStream.postBuffer(accelSamples, ACCEL_SAMPLES);
		call ReadStream.read(ACCEL_INTERVAL);
	}
}


// Random generator function to waste CPU cycles
void randomGenerator() {
	uint16_t i;
	for (i = 0; i < 100; i++) {
		float tmp = call Random.rand16();
	}
}


  /* 
   * Modified entry to perform on every cycle. Instead of checking for light sample readings, 
   * we simply forward them to the root node. 
   */
  event void Read.readDone(error_t ok, uint16_t val) {

	alert_t *newAlert = call AlertRoot.getPayload(&alertMsg, sizeof(alert_t));

	uint16_t networkval = 0;
	if (settings.alert & ALERT_LEDS)
		theftLed();
	if (settings.alert & ALERT_SOUND)
		call Mts300Sounder.beep(100);

	// Let's use up some CPU to drain battery life

	randomGenerator();
	

	if (newAlert != NULL) {
		newAlert->stolenId = TOS_NODE_ID;
		newAlert->eventId = eventId;

		call CtpInfo.getParent(&networkval);
		newAlert->parentId = networkval;
		newAlert->linkQuality = call LinkEstimator.getLinkQuality(newAlert->parentId);
		newAlert->neighbors = call CtpInfo.numNeighbors();

		call ReadVoltage.read(); 
		ledTime = WARNING_TIME;

		// Attempt to send the alert
		check(call AlertRoot.send(&alertMsg, sizeof *newAlert));
	}
      
  }

event void LinkEstimator.evicted(am_addr_t addr){ }


  event void ReadStream.readDone(error_t ok, uint32_t usActualPeriod) { }
  event void ReadStream.bufferDone(error_t ok, uint16_t *buf, uint16_t count) { }
}
