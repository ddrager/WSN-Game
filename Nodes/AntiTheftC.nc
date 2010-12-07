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
  bool fwdBusy;
  message_t alertMsg, theftMsg, fwdMsg, fwdAlert;
  uint16_t ledTime; /* Time left until leds switched off */
  uint16_t accelSamples[ACCEL_SAMPLES];

  uint8_t blackListId = 0;
  uint16_t eventId = 0;

  /********* LED handling **********/

  /* RED LED */
  void redLed() {
    ledTime = WARNING_TIME;
    call Leds.led0Toggle();
  }

  /* GREEN LED */
  void greenLed() {
    ledTime = WARNING_TIME;
    call Leds.led1Toggle();
  }

  /* ORANGE LED */
  void orangeLed() {
    ledTime = WARNING_TIME;
    call Leds.led2Toggle();
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
    //if (ok != SUCCESS)
      //errorLed();
  }


/* After voltage is read, add to the packet */
event void ReadVoltage.readDone( error_t result, uint16_t val ){ 
	alert_t *newAlert = call TheftSend.getPayload(&fwdMsg, sizeof(alert_t));
	//alert_t *newAlert = call AlertRoot.getPayload(&alertMsg, sizeof(alert_t));
	if (result == SUCCESS){ 
		newAlert->voltageData = val;
		newAlert->eventId = eventId;
		eventId = eventId + 1;
		newAlert->path1 = TOS_NODE_ID;
		newAlert->path2 = 999;
		newAlert->path3 = 999;
		newAlert->path4 = 999;
		newAlert->path5 = 999;
		newAlert->path6 = 999;

	}
} 

  /* We have nothing to do after messages are sent */
  event void AlertRoot.sendDone(message_t *msg, error_t ok) { 

	
  }


  event message_t *TheftReceive.receive(message_t* msg, void* payload, uint8_t len) {

        //alert_t *newPacket = call TheftSend.getPayload(&msg, sizeof(alert_t));
	alert_t *newAlert = payload;
	alert_t *newPacket = call TheftSend.getPayload(&fwdMsg, sizeof(alert_t));
	*newPacket = *newAlert;


    	/* if this message from a blacklist node? If so, drop packet & flash red */

	if (newPacket != NULL) {
		if (newPacket->sourceId == blackListId || 
				newPacket->path1 == blackListId ||
				newPacket->path2 == blackListId ||
				newPacket->path3 == blackListId ||
				newPacket->path4 == blackListId ||
				newPacket->path5 == blackListId ||
				newPacket->path6 == blackListId	
				) {
			// flash red led, and drop the packet (do not return)
			redLed();

		} 
	
		/* Drop packet if we were already found in the path */ 
		else if (newPacket->path2 == TOS_NODE_ID ||
			newPacket->path3 == TOS_NODE_ID ||
			newPacket->path4 == TOS_NODE_ID ||
			newPacket->path5 == TOS_NODE_ID ||
			newPacket->path6 == TOS_NODE_ID){ 
			greenLed();
		}

		/* Otherwise, add our path to the packet and forward on */
	    	else {
			// should check to see if the path (route) is full
			orangeLed();
			newPacket->path6 = newPacket->path5;
			newPacket->path5 = newPacket->path4;
			newPacket->path4 = newPacket->path3;
			newPacket->path3 = newPacket->path2;
			newPacket->path2 = newPacket->path1;
			newPacket->path1 = TOS_NODE_ID;
			//call AlertRoot.send(&newPacket, sizeof *newPacket);
			check(call TheftSend.send(AM_BROADCAST_ADDR, &fwdMsg,  sizeof(alert_t)));
	    	}

	}
	
	return msg;
    
    
  }
  
  /* At boot time, start the periodic timer and the radio */
  event void Boot.booted() {
    //errorLed();
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
    else {
      //redLed();
    }
  }

event void RadioControl.stopDone(error_t ok) { }

/* New settings received, update our local copy */
event void SettingsValue.changed() {
    const settings_t *newSettings = call SettingsValue.get();
    
    settings = *newSettings;
    /* Switch to the new check interval */
    if (newSettings->targetId == TOS_NODE_ID) {
        call Check.startPeriodic(newSettings->checkInterval);
    }

	// ignoreId is the blacklist ID. If 0, no value; if a number add this to our ignored Ids table. 
    if (newSettings->ignoreId > 0) {

		//settingsLed();
		if (newSettings->ignoreId == TOS_NODE_ID) {
			// uh oh, we are the ones being blacklisted, turn on error LED
			//redLed();
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
	//greenLed();
	call Read.read();
}


// Random generator function to waste CPU cycles
void randomGenerator() {
	uint16_t i;
	float tmp;
	for (i = 0; i < 1000; i++) {
		tmp = call Random.rand16();
	}
}


  /* 
   * Modified entry to perform on every cycle. Instead of checking for light sample readings, 
   * we simply forward them to the root node. 
   */
  event void Read.readDone(error_t ok, uint16_t val) {

	//alert_t *newAlert = call AlertRoot.getPayload(&alertMsg, sizeof(alert_t));
	alert_t *newAlert = call TheftSend.getPayload(&fwdMsg, sizeof(alert_t));

	// Let's use up some CPU to drain battery life

	randomGenerator();


	if (newAlert != NULL) {
		newAlert->sourceId = TOS_NODE_ID;
		newAlert->eventId = eventId;


		call ReadVoltage.read(); 
		ledTime = WARNING_TIME;
		greenLed();
		// Attempt to send the alert
		//check(call AlertRoot.send(&alertMsg, sizeof *newAlert));

		if(call TheftSend.send(AM_BROADCAST_ADDR, &fwdMsg, sizeof(alert_t)) == SUCCESS)
			fwdBusy = TRUE;
	}
      
  }

  event void TheftSend.sendDone(message_t *msg, error_t error)
  {
		fwdBusy = FALSE;
  }


  event void ReadStream.readDone(error_t ok, uint32_t usActualPeriod) { }
  event void ReadStream.bufferDone(error_t ok, uint16_t *buf, uint16_t count) { }
}
