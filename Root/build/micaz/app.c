#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 152 "/usr/bin/../lib/gcc/avr/4.1.2/include/stddef.h" 3
typedef int ptrdiff_t;
#line 214
typedef unsigned int size_t;
#line 326
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
}  ;
#line 14
struct __nesc_attr_one_nok {
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
}  ;
# 121 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/stdint.h" 3
typedef int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 142
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 159
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 213
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 273
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;





static __inline uint8_t __nesc_ntoh_leuint8(const void * source)  ;




static __inline uint8_t __nesc_hton_leuint8(void * target, uint8_t value)  ;





static __inline int8_t __nesc_ntoh_int8(const void * source)  ;
#line 257
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;






static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;
#line 294
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 385
typedef struct { unsigned char data[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char data[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char data[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char data[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 112 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/string.h" 3
extern void *memcpy(void *arg_0x4028b978, const void *arg_0x4028bb10, size_t arg_0x4028bca8);



extern void *memset(void *arg_0x4028dc70, int arg_0x4028ddc8, size_t arg_0x40292010);
# 71 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/stdlib.h" 3
#line 68
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 74
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0x4029f5a0, const void *arg_0x4029f738);
# 23 "/opt/tinyos-2.x/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 24
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 35
struct __nesc_attr_atleastonce {
};
#line 36
struct __nesc_attr_exactlyonce {
};
# 40 "/opt/tinyos-2.x/tos/types/TinyError.h"
enum __nesc_unnamed4245 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 57 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/avr/fuse.h" 3
#line 52
typedef struct __nesc_unnamed4246 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 210 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/avr/pgmspace.h" 3
typedef void prog_void __attribute((__progmem__)) ;
typedef char prog_char __attribute((__progmem__)) ;
typedef unsigned char prog_uchar __attribute((__progmem__)) ;

typedef int8_t prog_int8_t __attribute((__progmem__)) ;
typedef uint8_t prog_uint8_t __attribute((__progmem__)) ;
typedef int16_t prog_int16_t __attribute((__progmem__)) ;
typedef uint16_t prog_uint16_t __attribute((__progmem__)) ;
typedef int32_t prog_int32_t __attribute((__progmem__)) ;
typedef uint32_t prog_uint32_t __attribute((__progmem__)) ;

typedef int64_t prog_int64_t __attribute((__progmem__)) ;
typedef uint64_t prog_uint64_t __attribute((__progmem__)) ;
# 25 "/opt/tinyos-2.x/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 82 "/opt/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 102
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 112
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)   ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;









typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
# 34 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4248 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4249 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4250 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 85
typedef struct __nesc_unnamed4251 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4252 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4253 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4254 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4255 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4256 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 141
typedef struct __nesc_unnamed4258 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 29 "/opt/tinyos-2.x/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4259 {
#line 29
  int notUsed;
} 
#line 29
TMilli;
typedef struct __nesc_unnamed4260 {
#line 30
  int notUsed;
} 
#line 30
T32khz;
typedef struct __nesc_unnamed4261 {
#line 31
  int notUsed;
} 
#line 31
TMicro;
# 43 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4262 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4263 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4264 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4265 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4266 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 99
#line 89
typedef union __nesc_unnamed4267 {

  uint8_t flat;
  struct __nesc_unnamed4268 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 121
#line 111
typedef union __nesc_unnamed4269 {

  uint8_t flat;
  struct __nesc_unnamed4270 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 137
#line 124
typedef union __nesc_unnamed4271 {

  uint8_t flat;
  struct __nesc_unnamed4272 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 154
#line 141
typedef union __nesc_unnamed4273 {

  uint8_t flat;
  struct __nesc_unnamed4274 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 169
#line 158
typedef union __nesc_unnamed4275 {

  uint8_t flat;
  struct __nesc_unnamed4276 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4277 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 193
#line 184
typedef union __nesc_unnamed4278 {

  uint8_t flat;
  struct __nesc_unnamed4279 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4280 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 232
#line 222
typedef union __nesc_unnamed4281 {

  uint8_t flat;
  struct __nesc_unnamed4282 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 250
#line 241
typedef union __nesc_unnamed4283 {

  uint8_t flat;
  struct __nesc_unnamed4284 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 300
#line 288
typedef union __nesc_unnamed4285 {

  uint8_t flat;
  struct __nesc_unnamed4286 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 315
#line 303
typedef union __nesc_unnamed4287 {

  uint8_t flat;
  struct __nesc_unnamed4288 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 51 "/opt/tinyos-2.x/tos/platforms/mica/MicaTimer.h"
typedef struct __nesc_unnamed4289 {
} 
#line 51
T64khz;
typedef struct __nesc_unnamed4290 {
} 
#line 52
T128khz;
typedef struct __nesc_unnamed4291 {
} 
#line 53
T2mhz;
typedef struct __nesc_unnamed4292 {
} 
#line 54
T4mhz;
#line 107
typedef T32khz TOne;
typedef TMicro TThree;
typedef uint16_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;

enum __nesc_unnamed4293 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_256, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 0, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4294 {
  PLATFORM_MHZ = 8
};
# 56 "/opt/tinyos-2.x/tos/platforms/micaz/hardware.h"
enum __nesc_unnamed4295 {
  TOS_SLEEP_NONE = ATM128_POWER_IDLE
};


enum __nesc_unnamed4296 {
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1
};

enum __nesc_unnamed4297 {
  PLATFORM_BAUDRATE = 57600L
};
# 18 "../Nodes/antitheft.h"
enum __nesc_unnamed4298 {
  ALERT_LEDS = 1, 
  ALERT_SOUND = 2, 
  ALERT_RADIO = 4, 
  ALERT_ROOT = 1, 

  EVENT_ID = 1, 

  DETECT_DARK = 1, 
  DETECT_ACCEL = 2, 

  AM_SETTINGS = 54, 
  AM_THEFT = 99, 
  AM_ALERT = 22, 
  DIS_SETTINGS = 42, 
  COL_ALERTS = 12, 

  DEFAULT_ALERT = ALERT_LEDS, 
  DEFAULT_DETECT = DETECT_DARK, 
  DEFAULT_CHECK_INTERVAL = 1000
};






#line 40
typedef nx_struct settings {
  nx_uint8_t alert;
#line 41
  nx_uint8_t detect;
#line 41
  nx_uint8_t targetId;
  nx_uint16_t checkInterval;

  nx_uint8_t ignoreId;
} __attribute__((packed)) settings_t;










#line 47
typedef nx_struct alert {


  nx_uint16_t stolenId;
  nx_uint16_t voltageData;
#line 51
  nx_uint16_t eventId;
#line 51
  nx_uint16_t parentId;
#line 51
  nx_uint16_t linkQuality;
  nx_uint8_t neighbors;
} __attribute__((packed)) 


alert_t;
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420.h"
typedef uint8_t cc2420_status_t;
#line 93
#line 87
typedef nx_struct security_header_t {
  unsigned char __nesc_filler0[1];


  nx_uint32_t frameCounter;
  nx_uint8_t keyID[1];
} __attribute__((packed)) security_header_t;
#line 113
#line 95
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;







  nxle_uint8_t network;


  nxle_uint8_t type;
} __attribute__((packed)) cc2420_header_t;





#line 118
typedef nx_struct cc2420_footer_t {
} __attribute__((packed)) cc2420_footer_t;
#line 143
#line 128
typedef nx_struct cc2420_metadata_t {
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_uint8_t tx_power;
  nx_bool crc;
  nx_bool ack;
  nx_bool timesync;
  nx_uint32_t timestamp;
  nx_uint16_t rxInterval;
} __attribute__((packed)) 





cc2420_metadata_t;





#line 146
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
} __attribute__((packed)) cc2420_packet_t;
#line 179
enum __nesc_unnamed4299 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 28 + MAC_FOOTER_SIZE, 

  CC2420_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE, 

  AM_OVERHEAD = 2
};

enum cc2420_enums {
  CC2420_TIME_ACK_TURNAROUND = 7, 
  CC2420_TIME_VREN = 20, 
  CC2420_TIME_SYMBOL = 2, 
  CC2420_BACKOFF_PERIOD = 20 / CC2420_TIME_SYMBOL, 
  CC2420_MIN_BACKOFF = 20 / CC2420_TIME_SYMBOL, 
  CC2420_ACK_WAIT_DELAY = 256
};

enum cc2420_status_enums {
  CC2420_STATUS_RSSI_VALID = 1 << 1, 
  CC2420_STATUS_LOCK = 1 << 2, 
  CC2420_STATUS_TX_ACTIVE = 1 << 3, 
  CC2420_STATUS_ENC_BUSY = 1 << 4, 
  CC2420_STATUS_TX_UNDERFLOW = 1 << 5, 
  CC2420_STATUS_XOSC16M_STABLE = 1 << 6
};

enum cc2420_config_reg_enums {
  CC2420_SNOP = 0x00, 
  CC2420_SXOSCON = 0x01, 
  CC2420_STXCAL = 0x02, 
  CC2420_SRXON = 0x03, 
  CC2420_STXON = 0x04, 
  CC2420_STXONCCA = 0x05, 
  CC2420_SRFOFF = 0x06, 
  CC2420_SXOSCOFF = 0x07, 
  CC2420_SFLUSHRX = 0x08, 
  CC2420_SFLUSHTX = 0x09, 
  CC2420_SACK = 0x0a, 
  CC2420_SACKPEND = 0x0b, 
  CC2420_SRXDEC = 0x0c, 
  CC2420_STXENC = 0x0d, 
  CC2420_SAES = 0x0e, 
  CC2420_MAIN = 0x10, 
  CC2420_MDMCTRL0 = 0x11, 
  CC2420_MDMCTRL1 = 0x12, 
  CC2420_RSSI = 0x13, 
  CC2420_SYNCWORD = 0x14, 
  CC2420_TXCTRL = 0x15, 
  CC2420_RXCTRL0 = 0x16, 
  CC2420_RXCTRL1 = 0x17, 
  CC2420_FSCTRL = 0x18, 
  CC2420_SECCTRL0 = 0x19, 
  CC2420_SECCTRL1 = 0x1a, 
  CC2420_BATTMON = 0x1b, 
  CC2420_IOCFG0 = 0x1c, 
  CC2420_IOCFG1 = 0x1d, 
  CC2420_MANFIDL = 0x1e, 
  CC2420_MANFIDH = 0x1f, 
  CC2420_FSMTC = 0x20, 
  CC2420_MANAND = 0x21, 
  CC2420_MANOR = 0x22, 
  CC2420_AGCCTRL = 0x23, 
  CC2420_AGCTST0 = 0x24, 
  CC2420_AGCTST1 = 0x25, 
  CC2420_AGCTST2 = 0x26, 
  CC2420_FSTST0 = 0x27, 
  CC2420_FSTST1 = 0x28, 
  CC2420_FSTST2 = 0x29, 
  CC2420_FSTST3 = 0x2a, 
  CC2420_RXBPFTST = 0x2b, 
  CC2420_FMSTATE = 0x2c, 
  CC2420_ADCTST = 0x2d, 
  CC2420_DACTST = 0x2e, 
  CC2420_TOPTST = 0x2f, 
  CC2420_TXFIFO = 0x3e, 
  CC2420_RXFIFO = 0x3f
};

enum cc2420_ram_addr_enums {
  CC2420_RAM_TXFIFO = 0x000, 
  CC2420_RAM_RXFIFO = 0x080, 
  CC2420_RAM_KEY0 = 0x100, 
  CC2420_RAM_RXNONCE = 0x110, 
  CC2420_RAM_SABUF = 0x120, 
  CC2420_RAM_KEY1 = 0x130, 
  CC2420_RAM_TXNONCE = 0x140, 
  CC2420_RAM_CBCSTATE = 0x150, 
  CC2420_RAM_IEEEADR = 0x160, 
  CC2420_RAM_PANID = 0x168, 
  CC2420_RAM_SHORTADR = 0x16a
};

enum cc2420_nonce_enums {
  CC2420_NONCE_BLOCK_COUNTER = 0, 
  CC2420_NONCE_KEY_SEQ_COUNTER = 2, 
  CC2420_NONCE_FRAME_COUNTER = 3, 
  CC2420_NONCE_SOURCE_ADDRESS = 7, 
  CC2420_NONCE_FLAGS = 15
};

enum cc2420_main_enums {
  CC2420_MAIN_RESETn = 15, 
  CC2420_MAIN_ENC_RESETn = 14, 
  CC2420_MAIN_DEMOD_RESETn = 13, 
  CC2420_MAIN_MOD_RESETn = 12, 
  CC2420_MAIN_FS_RESETn = 11, 
  CC2420_MAIN_XOSC16M_BYPASS = 0
};

enum cc2420_mdmctrl0_enums {
  CC2420_MDMCTRL0_RESERVED_FRAME_MODE = 13, 
  CC2420_MDMCTRL0_PAN_COORDINATOR = 12, 
  CC2420_MDMCTRL0_ADR_DECODE = 11, 
  CC2420_MDMCTRL0_CCA_HYST = 8, 
  CC2420_MDMCTRL0_CCA_MOD = 6, 
  CC2420_MDMCTRL0_AUTOCRC = 5, 
  CC2420_MDMCTRL0_AUTOACK = 4, 
  CC2420_MDMCTRL0_PREAMBLE_LENGTH = 0
};

enum cc2420_mdmctrl1_enums {
  CC2420_MDMCTRL1_CORR_THR = 6, 
  CC2420_MDMCTRL1_DEMOD_AVG_MODE = 5, 
  CC2420_MDMCTRL1_MODULATION_MODE = 4, 
  CC2420_MDMCTRL1_TX_MODE = 2, 
  CC2420_MDMCTRL1_RX_MODE = 0
};

enum cc2420_rssi_enums {
  CC2420_RSSI_CCA_THR = 8, 
  CC2420_RSSI_RSSI_VAL = 0
};

enum cc2420_syncword_enums {
  CC2420_SYNCWORD_SYNCWORD = 0
};

enum cc2420_txctrl_enums {
  CC2420_TXCTRL_TXMIXBUF_CUR = 14, 
  CC2420_TXCTRL_TX_TURNAROUND = 13, 
  CC2420_TXCTRL_TXMIX_CAP_ARRAY = 11, 
  CC2420_TXCTRL_TXMIX_CURRENT = 9, 
  CC2420_TXCTRL_PA_CURRENT = 6, 
  CC2420_TXCTRL_RESERVED = 5, 
  CC2420_TXCTRL_PA_LEVEL = 0
};

enum cc2420_rxctrl0_enums {
  CC2420_RXCTRL0_RXMIXBUF_CUR = 12, 
  CC2420_RXCTRL0_HIGH_LNA_GAIN = 10, 
  CC2420_RXCTRL0_MED_LNA_GAIN = 8, 
  CC2420_RXCTRL0_LOW_LNA_GAIN = 6, 
  CC2420_RXCTRL0_HIGH_LNA_CURRENT = 4, 
  CC2420_RXCTRL0_MED_LNA_CURRENT = 2, 
  CC2420_RXCTRL0_LOW_LNA_CURRENT = 0
};

enum cc2420_rxctrl1_enums {
  CC2420_RXCTRL1_RXBPF_LOCUR = 13, 
  CC2420_RXCTRL1_RXBPF_MIDCUR = 12, 
  CC2420_RXCTRL1_LOW_LOWGAIN = 11, 
  CC2420_RXCTRL1_MED_LOWGAIN = 10, 
  CC2420_RXCTRL1_HIGH_HGM = 9, 
  CC2420_RXCTRL1_MED_HGM = 8, 
  CC2420_RXCTRL1_LNA_CAP_ARRAY = 6, 
  CC2420_RXCTRL1_RXMIX_TAIL = 4, 
  CC2420_RXCTRL1_RXMIX_VCM = 2, 
  CC2420_RXCTRL1_RXMIX_CURRENT = 0
};

enum cc2420_rsctrl_enums {
  CC2420_FSCTRL_LOCK_THR = 14, 
  CC2420_FSCTRL_CAL_DONE = 13, 
  CC2420_FSCTRL_CAL_RUNNING = 12, 
  CC2420_FSCTRL_LOCK_LENGTH = 11, 
  CC2420_FSCTRL_LOCK_STATUS = 10, 
  CC2420_FSCTRL_FREQ = 0
};

enum cc2420_secctrl0_enums {
  CC2420_SECCTRL0_RXFIFO_PROTECTION = 9, 
  CC2420_SECCTRL0_SEC_CBC_HEAD = 8, 
  CC2420_SECCTRL0_SEC_SAKEYSEL = 7, 
  CC2420_SECCTRL0_SEC_TXKEYSEL = 6, 
  CC2420_SECCTRL0_SEC_RXKEYSEL = 5, 
  CC2420_SECCTRL0_SEC_M = 2, 
  CC2420_SECCTRL0_SEC_MODE = 0
};

enum cc2420_secctrl1_enums {
  CC2420_SECCTRL1_SEC_TXL = 8, 
  CC2420_SECCTRL1_SEC_RXL = 0
};

enum cc2420_battmon_enums {
  CC2420_BATTMON_BATT_OK = 6, 
  CC2420_BATTMON_BATTMON_EN = 5, 
  CC2420_BATTMON_BATTMON_VOLTAGE = 0
};

enum cc2420_iocfg0_enums {
  CC2420_IOCFG0_BCN_ACCEPT = 11, 
  CC2420_IOCFG0_FIFO_POLARITY = 10, 
  CC2420_IOCFG0_FIFOP_POLARITY = 9, 
  CC2420_IOCFG0_SFD_POLARITY = 8, 
  CC2420_IOCFG0_CCA_POLARITY = 7, 
  CC2420_IOCFG0_FIFOP_THR = 0
};

enum cc2420_iocfg1_enums {
  CC2420_IOCFG1_HSSD_SRC = 10, 
  CC2420_IOCFG1_SFDMUX = 5, 
  CC2420_IOCFG1_CCAMUX = 0
};

enum cc2420_manfidl_enums {
  CC2420_MANFIDL_PARTNUM = 12, 
  CC2420_MANFIDL_MANFID = 0
};

enum cc2420_manfidh_enums {
  CC2420_MANFIDH_VERSION = 12, 
  CC2420_MANFIDH_PARTNUM = 0
};

enum cc2420_fsmtc_enums {
  CC2420_FSMTC_TC_RXCHAIN2RX = 13, 
  CC2420_FSMTC_TC_SWITCH2TX = 10, 
  CC2420_FSMTC_TC_PAON2TX = 6, 
  CC2420_FSMTC_TC_TXEND2SWITCH = 3, 
  CC2420_FSMTC_TC_TXEND2PAOFF = 0
};

enum cc2420_sfdmux_enums {
  CC2420_SFDMUX_SFD = 0, 
  CC2420_SFDMUX_XOSC16M_STABLE = 24
};

enum cc2420_security_enums {
  CC2420_NO_SEC = 0, 
  CC2420_CBC_MAC = 1, 
  CC2420_CTR = 2, 
  CC2420_CCM = 3, 
  NO_SEC = 0, 
  CBC_MAC_4 = 1, 
  CBC_MAC_8 = 2, 
  CBC_MAC_16 = 3, 
  CTR = 4, 
  CCM_4 = 5, 
  CCM_8 = 6, 
  CCM_16 = 7
};


enum __nesc_unnamed4300 {

  CC2420_INVALID_TIMESTAMP = 0x80000000L
};
# 6 "/opt/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4301 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4302 {
  TOS_AM_GROUP = 125, 
  TOS_AM_ADDRESS = 1
};
# 72 "/opt/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4303 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4304 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4305 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 110
#line 98
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 112
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 120
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 125
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 49 "/opt/tinyos-2.x/tos/platforms/micaz/platform_message.h"
#line 46
typedef union message_header {
  cc2420_header_t cc2420;
  serial_header_t serial;
} message_header_t;



#line 51
typedef union message_footer {
  cc2420_footer_t cc2420;
} message_footer_t;




#line 55
typedef union message_metadata {
  cc2420_metadata_t cc2420;
  serial_metadata_t serial;
} message_metadata_t;
# 19 "/opt/tinyos-2.x/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 32 "/opt/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4306 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 33 "/opt/tinyos-2.x/tos/types/Ieee154.h"
typedef uint16_t ieee154_panid_t;
typedef uint16_t ieee154_saddr_t;

enum __nesc_unnamed4307 {
  IEEE154_BROADCAST_ADDR = 0xffff
};
# 38 "/opt/tinyos-2.x/tos/chips/cc2420/IEEE802154.h"
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3
};

enum iee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3
};
# 32 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.h"
enum __nesc_unnamed4308 {
  ATM128_SPI_CLK_DIVIDE_4 = 0, 
  ATM128_SPI_CLK_DIVIDE_16 = 1, 
  ATM128_SPI_CLK_DIVIDE_64 = 2, 
  ATM128_SPI_CLK_DIVIDE_128 = 3
};
#line 49
#line 40
typedef struct __nesc_unnamed4309 {
  uint8_t spie : 1;
  uint8_t spe : 1;
  uint8_t dord : 1;
  uint8_t mstr : 1;
  uint8_t cpol : 1;
  uint8_t cpha : 1;
  uint8_t spr : 2;
} 
Atm128SPIControl_s;



#line 50
typedef union __nesc_unnamed4310 {
  uint8_t flat;
  Atm128SPIControl_s bits;
} Atm128SPIControl_t;

typedef Atm128SPIControl_t Atm128_SPCR_t;








#line 58
typedef struct __nesc_unnamed4311 {
  uint8_t spif : 1;
  uint8_t wcol : 1;
  uint8_t rsvd : 5;
  uint8_t spi2x : 1;
} 
Atm128SPIStatus_s;



#line 65
typedef union __nesc_unnamed4312 {
  uint8_t flat;
  Atm128SPIStatus_s bits;
} Atm128SPIStatus_t;

typedef Atm128SPIStatus_t Atm128_SPSR_t;

typedef uint8_t Atm128_SPDR_t;
# 33 "/opt/tinyos-2.x/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 32 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420TimeSyncMessage.h"
typedef nx_uint32_t timesync_radio_t;





#line 34
typedef struct timesync_footer_t {

  nx_am_id_t type;
  timesync_radio_t timestamp;
} timesync_footer_t;
# 39 "/opt/tinyos-2.x/tos/chips/atm128/crc.h"
uint16_t crcTable[256] __attribute((__progmem__))  = { 
0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7, 
0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef, 
0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6, 
0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de, 
0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485, 
0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d, 
0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4, 
0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc, 
0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823, 
0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b, 
0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12, 
0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a, 
0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41, 
0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49, 
0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70, 
0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78, 
0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f, 
0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067, 
0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e, 
0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256, 
0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d, 
0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405, 
0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c, 
0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634, 
0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab, 
0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3, 
0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a, 
0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92, 
0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9, 
0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1, 
0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8, 
0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0 };









static uint16_t crcByte(uint16_t oldCrc, uint8_t byte) __attribute((noinline))  ;
# 32 "/opt/tinyos-2.x/tos/chips/atm128/Atm128Uart.h"
typedef uint8_t Atm128_UDR0_t;
typedef uint8_t Atm128_UDR1_t;
#line 48
#line 36
typedef union __nesc_unnamed4313 {
  struct Atm128_UCSRA_t {
    uint8_t mpcm : 1;
    uint8_t u2x : 1;
    uint8_t upe : 1;
    uint8_t dor : 1;
    uint8_t fe : 1;
    uint8_t udre : 1;
    uint8_t txc : 1;
    uint8_t rxc : 1;
  } bits;
  uint8_t flat;
} Atm128UartStatus_t;

typedef Atm128UartStatus_t Atm128_UCSR0A_t;
typedef Atm128UartStatus_t Atm128_UCSR1A_t;
#line 66
#line 54
typedef union __nesc_unnamed4314 {
  struct Atm128_UCSRB_t {
    uint8_t txb8 : 1;
    uint8_t rxb8 : 1;
    uint8_t ucsz2 : 1;
    uint8_t txen : 1;
    uint8_t rxen : 1;
    uint8_t udrie : 1;
    uint8_t txcie : 1;
    uint8_t rxcie : 1;
  } bits;
  uint8_t flat;
} Atm128UartControl_t;

typedef Atm128UartControl_t Atm128_UCSR0B_t;
typedef Atm128UartControl_t Atm128_UCSR1B_t;

enum __nesc_unnamed4315 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 89
#line 79
typedef union __nesc_unnamed4316 {
  uint8_t flat;
  struct Atm128_UCSRC_t {
    uint8_t ucpol : 1;
    uint8_t ucsz : 2;
    uint8_t usbs : 1;
    uint8_t upm : 2;
    uint8_t umsel : 1;
    uint8_t rsvd : 1;
  } bits;
} Atm128UartMode_t;

typedef Atm128UartMode_t Atm128_UCSR0C_t;
typedef Atm128UartMode_t Atm128_UCSR1C_t;





enum __nesc_unnamed4317 {
  ATM128_19200_BAUD_4MHZ = 12, 
  ATM128_38400_BAUD_4MHZ = 6, 
  ATM128_57600_BAUD_4MHZ = 3, 

  ATM128_19200_BAUD_4MHZ_2X = 25, 
  ATM128_38400_BAUD_4MHZ_2X = 12, 
  ATM128_57600_BAUD_4MHZ_2X = 8, 

  ATM128_19200_BAUD_7MHZ = 23, 
  ATM128_38400_BAUD_7MHZ = 11, 
  ATM128_57600_BAUD_7MHZ = 7, 

  ATM128_19200_BAUD_7MHZ_2X = 47, 
  ATM128_38400_BAUD_7MHZ_2X = 23, 
  ATM128_57600_BAUD_7MHZ_2X = 15, 

  ATM128_19200_BAUD_8MHZ = 25, 
  ATM128_38400_BAUD_8MHZ = 12, 
  ATM128_57600_BAUD_8MHZ = 8, 

  ATM128_19200_BAUD_8MHZ_2X = 51, 
  ATM128_38400_BAUD_8MHZ_2X = 34, 
  ATM128_57600_BAUD_8MHZ_2X = 11
};

typedef uint8_t Atm128_UBRR0L_t;
typedef uint8_t Atm128_UBRR0H_t;

typedef uint8_t Atm128_UBRR1L_t;
typedef uint8_t Atm128_UBRR1H_t;

typedef uint8_t uart_parity_t;
typedef uint8_t uart_speed_t;
typedef uint8_t uart_duplex_t;

enum __nesc_unnamed4318 {
  TOS_UART_PARITY_NONE = 0, 
  TOS_UART_PARITY_EVEN = 1, 
  TOS_UART_PARITY_ODD = 2
};

enum __nesc_unnamed4319 {
  TOS_UART_19200 = 0, 
  TOS_UART_38400 = 1, 
  TOS_UART_57600 = 2
};

enum __nesc_unnamed4320 {
  TOS_UART_OFF = 0, 
  TOS_UART_RONLY = 1, 
  TOS_UART_TONLY = 2, 
  TOS_UART_DUPLEX = 3
};
# 40 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngine.h"
enum __nesc_unnamed4321 {
  AM_DISSEMINATION_MESSAGE = 0x60, 
  AM_DISSEMINATION_PROBE_MESSAGE = 0x61, 
  DISSEMINATION_SEQNO_UNKNOWN = 0
};





#line 46
typedef nx_struct dissemination_message {
  nx_uint16_t key;
  nx_uint32_t seqno;
  nx_uint8_t ( data)[0];
} __attribute__((packed)) dissemination_message_t;



#line 52
typedef nx_struct dissemination_probe_message {
  nx_uint16_t key;
} __attribute__((packed)) dissemination_probe_message_t;
# 31 "/opt/tinyos-2.x/tos/lib/net/ctp/Collection.h"
enum __nesc_unnamed4322 {
  AM_COLLECTION_DATA = 20, 
  AM_COLLECTION_CONTROL = 21, 
  AM_COLLECTION_DEBUG = 22
};

typedef uint8_t collection_id_t;
typedef nx_uint8_t nx_collection_id_t;
# 51 "/opt/tinyos-2.x/tos/lib/net/ctp/Ctp.h"
enum __nesc_unnamed4323 {

  AM_CTP_ROUTING = 0x70, 
  AM_CTP_DATA = 0x71, 
  AM_CTP_DEBUG = 0x72, 


  CTP_OPT_PULL = 0x80, 
  CTP_OPT_ECN = 0x40, 
  CTP_OPT_ALL = 0xff
};

typedef nx_uint8_t nx_ctp_options_t;
typedef uint8_t ctp_options_t;









#line 66
typedef nx_struct __nesc_unnamed4324 {
  nx_ctp_options_t options;
  nx_uint8_t thl;
  nx_uint16_t etx;
  nx_am_addr_t origin;
  nx_uint8_t originSeqNo;
  nx_collection_id_t type;
  nx_uint8_t ( data)[0];
} __attribute__((packed)) ctp_data_header_t;






#line 76
typedef nx_struct __nesc_unnamed4325 {
  nx_ctp_options_t options;
  nx_am_addr_t parent;
  nx_uint16_t etx;
  nx_uint8_t ( data)[0];
} __attribute__((packed)) ctp_routing_header_t;
# 60 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngine.h"
enum __nesc_unnamed4326 {

  FORWARD_PACKET_TIME = 7
};




enum __nesc_unnamed4327 {
  SENDDONE_OK_OFFSET = FORWARD_PACKET_TIME, 
  SENDDONE_OK_WINDOW = FORWARD_PACKET_TIME, 
  SENDDONE_NOACK_OFFSET = FORWARD_PACKET_TIME, 
  SENDDONE_NOACK_WINDOW = FORWARD_PACKET_TIME, 
  SENDDONE_FAIL_OFFSET = FORWARD_PACKET_TIME << 2, 
  SENDDONE_FAIL_WINDOW = SENDDONE_FAIL_OFFSET, 
  LOOPY_OFFSET = FORWARD_PACKET_TIME << 2, 
  LOOPY_WINDOW = LOOPY_OFFSET, 
  CONGESTED_WAIT_OFFSET = FORWARD_PACKET_TIME << 2, 
  CONGESTED_WAIT_WINDOW = CONGESTED_WAIT_OFFSET, 
  NO_ROUTE_RETRY = 10000
};








enum __nesc_unnamed4328 {
  MAX_RETRIES = 30
};
#line 104
#line 100
typedef struct __nesc_unnamed4329 {
  message_t * msg;
  uint8_t client;
  uint8_t retries;
} fe_queue_entry_t;
# 7 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpDebugMsg.h"
enum __nesc_unnamed4330 {
  NET_C_DEBUG_STARTED = 0xDE, 

  NET_C_FE_MSG_POOL_EMPTY = 0x10, 
  NET_C_FE_SEND_QUEUE_FULL = 0x11, 
  NET_C_FE_NO_ROUTE = 0x12, 
  NET_C_FE_SUBSEND_OFF = 0x13, 
  NET_C_FE_SUBSEND_BUSY = 0x14, 
  NET_C_FE_BAD_SENDDONE = 0x15, 
  NET_C_FE_QENTRY_POOL_EMPTY = 0x16, 
  NET_C_FE_SUBSEND_SIZE = 0x17, 
  NET_C_FE_LOOP_DETECTED = 0x18, 
  NET_C_FE_SEND_BUSY = 0x19, 

  NET_C_FE_SENDQUEUE_EMPTY = 0x50, 
  NET_C_FE_PUT_MSGPOOL_ERR = 0x51, 
  NET_C_FE_PUT_QEPOOL_ERR = 0x52, 
  NET_C_FE_GET_MSGPOOL_ERR = 0x53, 
  NET_C_FE_GET_QEPOOL_ERR = 0x54, 
  NET_C_FE_QUEUE_SIZE = 0x55, 

  NET_C_FE_SENT_MSG = 0x20, 
  NET_C_FE_RCV_MSG = 0x21, 
  NET_C_FE_FWD_MSG = 0x22, 
  NET_C_FE_DST_MSG = 0x23, 
  NET_C_FE_SENDDONE_FAIL = 0x24, 
  NET_C_FE_SENDDONE_WAITACK = 0x25, 
  NET_C_FE_SENDDONE_FAIL_ACK_SEND = 0x26, 
  NET_C_FE_SENDDONE_FAIL_ACK_FWD = 0x27, 
  NET_C_FE_DUPLICATE_CACHE = 0x28, 
  NET_C_FE_DUPLICATE_QUEUE = 0x29, 
  NET_C_FE_DUPLICATE_CACHE_AT_SEND = 0x2A, 
  NET_C_FE_CONGESTION_SENDWAIT = 0x2B, 
  NET_C_FE_CONGESTION_BEGIN = 0x2C, 
  NET_C_FE_CONGESTION_END = 0x2D, 



  NET_C_FE_CONGESTED = 0x2E, 

  NET_C_TREE_NO_ROUTE = 0x30, 
  NET_C_TREE_NEW_PARENT = 0x31, 
  NET_C_TREE_ROUTE_INFO = 0x32, 
  NET_C_TREE_SENT_BEACON = 0x33, 
  NET_C_TREE_RCV_BEACON = 0x34, 

  NET_C_DBG_1 = 0x40, 
  NET_C_DBG_2 = 0x41, 
  NET_C_DBG_3 = 0x42
};
#line 79
#line 58
typedef nx_struct CollectionDebugMsg {
  nx_uint8_t type;
  nx_union __nesc_unnamed4331 {
    nx_uint16_t arg;
    nx_struct __nesc_unnamed4332 {
      nx_uint16_t msg_uid;
      nx_am_addr_t origin;
      nx_am_addr_t other_node;
    } __attribute__((packed)) msg;
    nx_struct __nesc_unnamed4333 {
      nx_am_addr_t parent;
      nx_uint8_t hopcount;
      nx_uint16_t metric;
    } __attribute__((packed)) route_info;
    nx_struct __nesc_unnamed4334 {
      nx_uint16_t a;
      nx_uint16_t b;
      nx_uint16_t c;
    } __attribute__((packed)) dbg;
  } __attribute__((packed)) data;
  nx_uint16_t seqno;
} __attribute__((packed)) CollectionDebugMsg;
# 38 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.h"
enum __nesc_unnamed4335 {


  NUM_ENTRIES_FLAG = 15
};
#line 54
#line 51
typedef nx_struct linkest_header {
  nx_uint8_t flags;
  nx_uint8_t seq;
} __attribute__((packed)) linkest_header_t;







#line 59
typedef nx_struct neighbor_stat_entry {
  nx_am_addr_t ll_addr;
  nx_uint8_t inquality;
} __attribute__((packed)) neighbor_stat_entry_t;




#line 65
typedef nx_struct linkest_footer {
  neighbor_stat_entry_t neighborList[1];
} __attribute__((packed)) linkest_footer_t;



enum __nesc_unnamed4336 {
  VALID_ENTRY = 0x1, 


  MATURE_ENTRY = 0x2, 


  INIT_ENTRY = 0x4, 


  PINNED_ENTRY = 0x8
};
#line 111
#line 86
typedef struct neighbor_table_entry {

  am_addr_t ll_addr;

  uint8_t lastseq;


  uint8_t rcvcnt;

  uint8_t failcnt;

  uint8_t flags;


  uint8_t inquality;


  uint16_t eetx;



  uint8_t data_success;


  uint8_t data_total;
} neighbor_table_entry_t;
# 4 "/opt/tinyos-2.x/tos/lib/net/ctp/TreeRouting.h"
enum __nesc_unnamed4337 {
  AM_TREE_ROUTING_CONTROL = 0xCE, 
  BEACON_INTERVAL = 8192, 
  INVALID_ADDR = 0xFFFF, 
  ETX_THRESHOLD = 50, 
  PARENT_SWITCH_THRESHOLD = 15, 
  MAX_METRIC = 0xFFFF
};







#line 14
typedef struct __nesc_unnamed4338 {
  am_addr_t parent;
  uint16_t etx;
  bool haveHeard;
  bool congested;
} route_info_t;




#line 21
typedef struct __nesc_unnamed4339 {
  am_addr_t neighbor;
  route_info_t info;
} routing_table_entry;

static __inline void routeInfoInit(route_info_t *ri);
typedef settings_t AntiTheftRootC__SettingsUpdate__t;
enum CC2420ActiveMessageC____nesc_unnamed4340 {
  CC2420ActiveMessageC__CC2420_AM_SEND_ID = 0U
};
typedef T32khz CC2420ControlP__StartupTimer__precision_tag;
typedef uint32_t CC2420ControlP__StartupTimer__size_type;
typedef uint16_t CC2420ControlP__ReadRssi__val_t;
typedef uint8_t HplAtm128Timer0AsyncP__Compare__size_type;
typedef uint8_t HplAtm128Timer0AsyncP__Timer__timer_size;
typedef uint16_t HplAtm128Timer1P__CompareA__size_type;
typedef uint16_t HplAtm128Timer1P__Capture__size_type;
typedef uint16_t HplAtm128Timer1P__CompareB__size_type;
typedef uint16_t HplAtm128Timer1P__CompareC__size_type;
typedef uint16_t HplAtm128Timer1P__Timer__timer_size;
typedef uint16_t /*InitOneP.InitOne*/Atm128TimerInitC__0__timer_size;
typedef /*InitOneP.InitOne*/Atm128TimerInitC__0__timer_size /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size;
typedef TOne /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__frequency_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__frequency_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size;
enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16*/AlarmOne16C__0____nesc_unnamed4341 {
  AlarmOne16C__0__COMPARE_ID = 0U
};
typedef TOne /*CounterOne16C.NCounter*/Atm128CounterC__0__frequency_tag;
typedef uint16_t /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__frequency_tag /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__precision_tag;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__size_type;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size;
typedef T32khz /*Counter32khz32C.Transform32*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type;
typedef TOne /*Counter32khz32C.Transform32*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type;
typedef counter_one_overflow_t /*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__from_precision_tag /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__size_type;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__to_precision_tag /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__precision_tag;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__size_type;
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_precision_tag;
typedef uint32_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type;
typedef TOne /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_precision_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__size_type;
typedef uint16_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__size_type;
enum /*CC2420ControlC.Spi*/CC2420SpiC__0____nesc_unnamed4342 {
  CC2420SpiC__0__CLIENT_ID = 0U
};
enum /*CC2420ControlC.SyncSpiC*/CC2420SpiC__1____nesc_unnamed4343 {
  CC2420SpiC__1__CLIENT_ID = 1U
};
enum /*CC2420ControlC.RssiResource*/CC2420SpiC__2____nesc_unnamed4344 {
  CC2420SpiC__2__CLIENT_ID = 2U
};
typedef T32khz CC2420TransmitP__PacketTimeStamp__precision_tag;
typedef uint32_t CC2420TransmitP__PacketTimeStamp__size_type;
typedef T32khz CC2420TransmitP__BackoffTimer__precision_tag;
typedef uint32_t CC2420TransmitP__BackoffTimer__size_type;
enum /*CC2420TransmitC.Spi*/CC2420SpiC__3____nesc_unnamed4345 {
  CC2420SpiC__3__CLIENT_ID = 3U
};
typedef T32khz CC2420ReceiveP__PacketTimeStamp__precision_tag;
typedef uint32_t CC2420ReceiveP__PacketTimeStamp__size_type;
typedef T32khz CC2420PacketP__PacketTimeStamp32khz__precision_tag;
typedef uint32_t CC2420PacketP__PacketTimeStamp32khz__size_type;
typedef T32khz CC2420PacketP__LocalTime32khz__precision_tag;
typedef TMilli CC2420PacketP__LocalTimeMilli__precision_tag;
typedef TMilli CC2420PacketP__PacketTimeStampMilli__precision_tag;
typedef uint32_t CC2420PacketP__PacketTimeStampMilli__size_type;
typedef T32khz /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
enum HilTimerMilliC____nesc_unnamed4346 {
  HilTimerMilliC__TIMER_COUNT = 5U
};
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type;
enum /*CC2420ReceiveC.Spi*/CC2420SpiC__4____nesc_unnamed4347 {
  CC2420SpiC__4__CLIENT_ID = 4U
};
typedef uint16_t RandomMlcgC__SeedInit__parameter;
enum CC2420TinyosNetworkC____nesc_unnamed4348 {
  CC2420TinyosNetworkC__TINYOS_N_NETWORKS = 0U
};
typedef TMicro /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__precision_tag;
typedef uint32_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__size_type;
typedef uint16_t HplAtm128Timer3P__CompareA__size_type;
typedef uint16_t HplAtm128Timer3P__Capture__size_type;
typedef uint16_t HplAtm128Timer3P__CompareB__size_type;
typedef uint16_t HplAtm128Timer3P__CompareC__size_type;
typedef uint16_t HplAtm128Timer3P__Timer__timer_size;
typedef uint16_t /*InitThreeP.InitThree*/Atm128TimerInitC__1__timer_size;
typedef /*InitThreeP.InitThree*/Atm128TimerInitC__1__timer_size /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__timer_size;
typedef TThree /*CounterThree16C.NCounter*/Atm128CounterC__1__frequency_tag;
typedef uint16_t /*CounterThree16C.NCounter*/Atm128CounterC__1__timer_size;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__1__frequency_tag /*CounterThree16C.NCounter*/Atm128CounterC__1__Counter__precision_tag;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__1__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__1__Counter__size_type;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__1__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__1__Timer__timer_size;
typedef TMicro /*CounterMicro32C.Transform32*/TransformCounterC__1__to_precision_tag;
typedef uint32_t /*CounterMicro32C.Transform32*/TransformCounterC__1__to_size_type;
typedef TThree /*CounterMicro32C.Transform32*/TransformCounterC__1__from_precision_tag;
typedef uint16_t /*CounterMicro32C.Transform32*/TransformCounterC__1__from_size_type;
typedef counter_three_overflow_t /*CounterMicro32C.Transform32*/TransformCounterC__1__upper_count_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__1__from_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC__1__CounterFrom__precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__1__from_size_type /*CounterMicro32C.Transform32*/TransformCounterC__1__CounterFrom__size_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__1__to_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC__1__Counter__precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__1__to_size_type /*CounterMicro32C.Transform32*/TransformCounterC__1__Counter__size_type;
enum AMQueueP____nesc_unnamed4349 {
  AMQueueP__NUM_CLIENTS = 4U
};
typedef settings_t /*AntiTheftRootAppC.DisseminatorC*/DisseminatorC__0__t;
enum /*AntiTheftRootAppC.DisseminatorC*/DisseminatorC__0____nesc_unnamed4350 {
  DisseminatorC__0__TIMER_ID = 0U
};
typedef /*AntiTheftRootAppC.DisseminatorC*/DisseminatorC__0__t /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__t;
typedef /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__t /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationUpdate__t;
typedef /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__t /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationValue__t;
typedef TMilli /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__precision_tag;
enum CtpP____nesc_unnamed4351 {
  CtpP__CLIENT_COUNT = 0U, CtpP__FORWARD_COUNT = 12, CtpP__TREE_ROUTING_TABLE_SIZE = 10, CtpP__QUEUE_SIZE = CtpP__CLIENT_COUNT + CtpP__FORWARD_COUNT, CtpP__CACHE_SIZE = 4
};
typedef message_t */*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__t;
typedef TMilli /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__precision_tag;
typedef fe_queue_entry_t */*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__t;
typedef fe_queue_entry_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__t;
typedef message_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__t;
typedef message_t /*CtpP.MessagePoolP*/PoolC__0__pool_t;
typedef /*CtpP.MessagePoolP*/PoolC__0__pool_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__pool_t;
typedef /*CtpP.MessagePoolP.PoolP*/PoolP__0__pool_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__t;
typedef fe_queue_entry_t /*CtpP.QEntryPoolP*/PoolC__1__pool_t;
typedef /*CtpP.QEntryPoolP*/PoolC__1__pool_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool_t;
typedef /*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__t;
typedef fe_queue_entry_t */*CtpP.SendQueueP*/QueueC__0__queue_t;
typedef /*CtpP.SendQueueP*/QueueC__0__queue_t /*CtpP.SendQueueP*/QueueC__0__Queue__t;
typedef message_t */*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__t;
typedef TMilli /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__precision_tag;
typedef TMilli /*CtpP.Router*/CtpRoutingEngineP__0__RouteTimer__precision_tag;
enum SerialAMQueueP____nesc_unnamed4352 {
  SerialAMQueueP__NUM_CLIENTS = 1U
};
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



AntiTheftRootC__SettingsReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void AntiTheftRootC__Boot__booted(void );
# 92 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void AntiTheftRootC__SerialControl__startDone(error_t error);
#line 117
static void AntiTheftRootC__SerialControl__stopDone(error_t error);
#line 92
static void AntiTheftRootC__RadioControl__startDone(error_t error);
#line 117
static void AntiTheftRootC__RadioControl__stopDone(error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



AntiTheftRootC__AlertsReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void AntiTheftRootC__AlertsForward__sendDone(
#line 92
message_t * msg, 






error_t error);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 51
static error_t MotePlatformP__PlatformInit__init(void );
# 31 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );





static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );

static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );



static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 30
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void );
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void );
#line 35
static void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 33
static void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );
#line 32
static bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__get(void );
static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void );
#line 32
static bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__get(void );
static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void );
#line 32
static bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__get(void );
#line 32
static bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__get(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MeasureClockC__Init__init(void );
# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x40347c40);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x40347c40);
# 46 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 61
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 54
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 59 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 56 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static void LedsP__Leds__led0Toggle(void );
#line 89
static void LedsP__Leds__led2Toggle(void );
# 83 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t CC2420CsmaP__SplitControl__start(void );
# 81 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420CsmaP__SubBackoff__requestInitialBackoff(message_t * msg);






static void CC2420CsmaP__SubBackoff__requestCongestionBackoff(message_t * msg);
# 73 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static void CC2420CsmaP__CC2420Transmit__sendDone(message_t * p_msg, error_t error);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t CC2420CsmaP__Send__send(
#line 56
message_t * msg, 







uint8_t len);
#line 101
static uint8_t CC2420CsmaP__Send__maxPayloadLength(void );
# 76 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static void CC2420CsmaP__CC2420Power__startOscillatorDone(void );
#line 56
static void CC2420CsmaP__CC2420Power__startVRegDone(void );
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420CsmaP__Resource__granted(void );
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420CsmaP__sendDone_task__runTask(void );
#line 64
static void CC2420CsmaP__stopDone_task__runTask(void );
#line 64
static void CC2420CsmaP__startDone_task__runTask(void );
# 86 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static bool CC2420ControlP__CC2420Config__isAddressRecognitionEnabled(void );
#line 110
static bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void );
#line 105
static bool CC2420ControlP__CC2420Config__isHwAutoAckDefault(void );
#line 64
static uint16_t CC2420ControlP__CC2420Config__getShortAddr(void );
#line 52
static error_t CC2420ControlP__CC2420Config__sync(void );
#line 70
static uint16_t CC2420ControlP__CC2420Config__getPanAddr(void );
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void CC2420ControlP__StartupTimer__fired(void );
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static void CC2420ControlP__ReadRssi__default__readDone(error_t result, CC2420ControlP__ReadRssi__val_t val);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420ControlP__syncDone__runTask(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t CC2420ControlP__Init__init(void );
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420ControlP__SpiResource__granted(void );
#line 92
static void CC2420ControlP__SyncResource__granted(void );
# 71 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static error_t CC2420ControlP__CC2420Power__startOscillator(void );
#line 90
static error_t CC2420ControlP__CC2420Power__rxOn(void );
#line 51
static error_t CC2420ControlP__CC2420Power__startVReg(void );
#line 63
static error_t CC2420ControlP__CC2420Power__stopVReg(void );
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420ControlP__sync__runTask(void );
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__Resource__release(void );
#line 78
static error_t CC2420ControlP__Resource__request(void );
# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static void CC2420ControlP__InterruptCCA__fired(void );
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420ControlP__RssiResource__granted(void );
# 44 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void );
#line 37
static void HplAtm128Timer0AsyncP__TimerCtrl__setControl(Atm128TimerControl_t control);
# 54 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void );
# 44 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void );
#line 32
static void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void );
# 39 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm128Timer0AsyncP__Compare__size_type HplAtm128Timer0AsyncP__Compare__get(void );





static void HplAtm128Timer0AsyncP__Compare__set(HplAtm128Timer0AsyncP__Compare__size_type t);










static void HplAtm128Timer0AsyncP__Compare__start(void );
# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static HplAtm128Timer0AsyncP__Timer__timer_size HplAtm128Timer0AsyncP__Timer__get(void );
# 41 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl16.nc"
static void HplAtm128Timer1P__TimerCtrl__setCtrlCapture(Atm128TimerCtrlCapture_t control);
#line 37
static Atm128TimerCtrlCapture_t HplAtm128Timer1P__TimerCtrl__getCtrlCapture(void );
# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareA__reset(void );
#line 45
static void HplAtm128Timer1P__CompareA__set(HplAtm128Timer1P__CompareA__size_type t);










static void HplAtm128Timer1P__CompareA__start(void );


static void HplAtm128Timer1P__CompareA__stop(void );
# 79 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer1P__Capture__setEdge(bool up);
#line 55
static void HplAtm128Timer1P__Capture__reset(void );


static void HplAtm128Timer1P__Capture__start(void );


static void HplAtm128Timer1P__Capture__stop(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareB__default__fired(void );
#line 49
static void HplAtm128Timer1P__CompareC__default__fired(void );
# 78 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool HplAtm128Timer1P__Timer__test(void );
#line 52
static HplAtm128Timer1P__Timer__timer_size HplAtm128Timer1P__Timer__get(void );
#line 95
static void HplAtm128Timer1P__Timer__setScale(uint8_t scale);
#line 58
static void HplAtm128Timer1P__Timer__set(HplAtm128Timer1P__Timer__timer_size t);










static void HplAtm128Timer1P__Timer__start(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void );
# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__size_type dt);
#line 62
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__stop(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void );
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__size_type /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void );






static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void );
#line 53
static /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get(void );
# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow(void );
#line 92
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type dt);
#line 55
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type dt);






static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__stop(void );




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__fired(void );
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__overflow(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t NoInitC__Init__init(void );
# 43 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureFallingEdge(void );
#line 55
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__disable(void );
#line 42
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureRisingEdge(void );
# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__captured(/*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__size_type t);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__fired(void );
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__disable(void );
#line 43
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__enableFallingEdge(void );
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__default__fired(void );
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired(void );
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__default__fired(void );
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired(void );
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__default__fired(void );
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired(void );
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__default__fired(void );
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__IrqSignal__fired(void );
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__default__fired(void );
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__IrqSignal__fired(void );
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__default__fired(void );
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__IrqSignal__fired(void );
# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__clear(void );
#line 40
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__disable(void );
#line 59
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__edge(bool low_to_high);
#line 35
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__enable(void );
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__IrqSignal__fired(void );
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__default__fired(void );
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__IrqSignal__fired(void );
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t HplCC2420InterruptsP__CCA__disable(void );
#line 42
static error_t HplCC2420InterruptsP__CCA__enableRisingEdge(void );
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void HplCC2420InterruptsP__CCATask__runTask(void );
# 71 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static void CC2420SpiP__SpiPacket__sendDone(
#line 64
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 62 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420SpiP__Fifo__continueRead(
# 46 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x407ceb38, 
# 62 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 91
static void CC2420SpiP__Fifo__default__writeDone(
# 46 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x407ceb38, 
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 82
static cc2420_status_t CC2420SpiP__Fifo__write(
# 46 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x407ceb38, 
# 82 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420SpiP__Fifo__beginRead(
# 46 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x407ceb38, 
# 51 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 71
static void CC2420SpiP__Fifo__default__readDone(
# 46 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x407ceb38, 
# 71 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 31 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP__ChipSpiResource__abortRelease(void );







static error_t CC2420SpiP__ChipSpiResource__attemptRelease(void );
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420SpiP__SpiResource__granted(void );
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420SpiP__Ram__write(
# 47 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint16_t arg_0x407cc5b0, 
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
uint8_t offset, uint8_t * data, uint8_t length);
# 47 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420SpiP__Reg__read(
# 48 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x407ccd58, 
# 47 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t *data);







static cc2420_status_t CC2420SpiP__Reg__write(
# 48 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x407ccd58, 
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t data);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__release(
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x407ce108);
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__immediateRequest(
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x407ce108);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__request(
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x407ce108);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420SpiP__Resource__default__granted(
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x407ce108);
# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static bool CC2420SpiP__Resource__isOwner(
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x407ce108);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420SpiP__grant__runTask(void );
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420SpiP__Strobe__strobe(
# 49 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x407cb540);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t StateImplP__Init__init(void );
# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static void StateImplP__State__toIdle(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x40808668);
# 66 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static bool StateImplP__State__isState(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x40808668, 
# 66 "/opt/tinyos-2.x/tos/interfaces/State.nc"
uint8_t myState);
#line 61
static bool StateImplP__State__isIdle(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x40808668);
# 45 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static error_t StateImplP__State__requestState(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x40808668, 
# 45 "/opt/tinyos-2.x/tos/interfaces/State.nc"
uint8_t reqState);





static void StateImplP__State__forceState(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x40808668, 
# 51 "/opt/tinyos-2.x/tos/interfaces/State.nc"
uint8_t reqState);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void Atm128SpiP__zeroTask__runTask(void );
# 59 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static error_t Atm128SpiP__SpiPacket__send(
#line 48
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void Atm128SpiP__ResourceArbiter__granted(
# 85 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40824068);
# 34 "/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx);
# 92 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP__Spi__dataReady(uint8_t data);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__Resource__release(
# 81 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40827398);
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__Resource__immediateRequest(
# 81 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40827398);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__Resource__request(
# 81 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40827398);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void Atm128SpiP__Resource__default__granted(
# 81 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40827398);
# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static bool Atm128SpiP__Resource__isOwner(
# 81 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40827398);
# 72 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP__SPI__sleep(void );
#line 66
static void HplAtm128SpiP__SPI__initMaster(void );
#line 105
static void HplAtm128SpiP__SPI__setMasterBit(bool isMaster);
#line 96
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled);
#line 80
static uint8_t HplAtm128SpiP__SPI__read(void );
#line 125
static void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on);
#line 114
static void HplAtm128SpiP__SPI__setClock(uint8_t speed);
#line 108
static void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle);
#line 86
static void HplAtm128SpiP__SPI__write(uint8_t data);
#line 99
static void HplAtm128SpiP__SPI__enableSpi(bool busOn);
#line 111
static void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void );
# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );








static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(
# 52 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x408b9030);
# 51 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(
# 52 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x408b9030);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x408b9c60);
# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x408b9c60);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x408ba5d8);
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x408ba5d8);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x408ba5d8);
# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__isOwner(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x408ba5d8);
# 80 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse(void );
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t HplCC2420SpiP__Resource__release(void );
#line 87
static error_t HplCC2420SpiP__Resource__immediateRequest(void );
#line 78
static error_t HplCC2420SpiP__Resource__request(void );
#line 118
static bool HplCC2420SpiP__Resource__isOwner(void );
#line 92
static void HplCC2420SpiP__SubResource__granted(void );
# 44 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );




static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
# 66 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420TransmitP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime);
#line 60
static void CC2420TransmitP__RadioBackoff__setInitialBackoff(uint16_t backoffTime);
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static void CC2420TransmitP__CaptureSFD__captured(uint16_t time);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void CC2420TransmitP__BackoffTimer__fired(void );
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t * message);
# 51 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static error_t CC2420TransmitP__Send__send(message_t * p_msg, bool useCca);
# 24 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP__ChipSpiResource__releasing(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t CC2420TransmitP__Init__init(void );
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420TransmitP__SpiResource__granted(void );
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t CC2420TransmitP__StdControl__start(void );









static error_t CC2420TransmitP__StdControl__stop(void );
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420TransmitP__TXFIFO__writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420TransmitP__TXFIFO__readDone(uint8_t * data, uint8_t length, error_t error);
# 53 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ReceiveP__CC2420Config__syncDone(error_t error);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420ReceiveP__receiveDone_task__runTask(void );
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP__CC2420Receive__sfd_dropped(void );
#line 49
static void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t CC2420ReceiveP__Init__init(void );
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420ReceiveP__SpiResource__granted(void );
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420ReceiveP__RXFIFO__writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420ReceiveP__RXFIFO__readDone(uint8_t * data, uint8_t length, error_t error);
# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static void CC2420ReceiveP__InterruptFIFOP__fired(void );
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t CC2420ReceiveP__StdControl__start(void );









static error_t CC2420ReceiveP__StdControl__stop(void );
# 47 "/opt/tinyos-2.x/tos/interfaces/LinkPacketMetadata.nc"
static bool CC2420PacketP__LinkPacketMetadata__highChannelQuality(
#line 44
message_t * msg);
# 77 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Packet.nc"
static void CC2420PacketP__CC2420Packet__setNetwork(message_t *p_msg, uint8_t networkId);
#line 75
static uint8_t CC2420PacketP__CC2420Packet__getNetwork(message_t *p_msg);
#line 72
static uint8_t CC2420PacketP__CC2420Packet__getLqi(message_t *p_msg);
# 59 "/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static void CC2420PacketP__PacketTimeStamp32khz__clear(
#line 55
message_t * msg);
#line 67
static void CC2420PacketP__PacketTimeStamp32khz__set(
#line 62
message_t * msg, 




CC2420PacketP__PacketTimeStamp32khz__size_type value);
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420PacketP__CC2420PacketBody__getHeader(message_t * msg);




static cc2420_metadata_t * CC2420PacketP__CC2420PacketBody__getMetadata(message_t * msg);
# 47 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
static uint8_t CC2420PacketP__PacketTimeSyncOffset__get(
#line 42
message_t * msg);
#line 39
static bool CC2420PacketP__PacketTimeSyncOffset__isSet(
#line 35
message_t * msg);
# 48 "/opt/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
static error_t CC2420PacketP__Acks__requestAck(
#line 42
message_t * msg);
#line 74
static bool CC2420PacketP__Acks__wasAcked(
#line 69
message_t * msg);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void );
#line 92
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type dt);
#line 105
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void );
#line 62
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void );
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void );
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 118
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 125
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40ad5548);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40ad5548);
# 140 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getdt(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40ad5548);
# 133 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__gett0(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40ad5548);
# 81 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40ad5548);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40ad5548, 
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40ad5548, 
# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40ad5548);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 35
static uint32_t RandomMlcgC__Random__rand32(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void UniqueSendP__SubSend__sendDone(
#line 85
message_t * msg, 



error_t error);
#line 64
static error_t UniqueSendP__Send__send(
#line 56
message_t * msg, 







uint8_t len);
#line 101
static uint8_t UniqueSendP__Send__maxPayloadLength(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t UniqueSendP__Init__init(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP__SubReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t UniqueReceiveP__Init__init(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP__DuplicateReceive__default__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__SubSend__sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420TinyosNetworkP__SubReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420TinyosNetworkP__grantTask__runTask(void );
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t CC2420TinyosNetworkP__ActiveSend__send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

CC2420TinyosNetworkP__ActiveSend__getPayload(
#line 111
message_t * msg, 


uint8_t len);
#line 101
static uint8_t CC2420TinyosNetworkP__ActiveSend__maxPayloadLength(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420TinyosNetworkP__BareReceive__default__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420TinyosNetworkP__Resource__release(
# 46 "/opt/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x40b71628);
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420TinyosNetworkP__Resource__immediateRequest(
# 46 "/opt/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x40b71628);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420TinyosNetworkP__Resource__request(
# 46 "/opt/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x40b71628);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420TinyosNetworkP__Resource__default__granted(
# 46 "/opt/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x40b71628);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__BareSend__default__sendDone(
#line 85
message_t * msg, 



error_t error);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init(void );
# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
#line 43
static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );








static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 52 "/opt/tinyos-2.x/tos/interfaces/LowPowerListening.nc"
static void DummyLplP__LowPowerListening__setLocalWakeupInterval(uint16_t intervalMs);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ActiveMessageP__SubReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void CC2420ActiveMessageP__SubSend__sendDone(
#line 85
message_t * msg, 



error_t error);
# 53 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ActiveMessageP__CC2420Config__syncDone(error_t error);
# 95 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP__RadioBackoff__default__requestCca(
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40b9f4b8, 
# 95 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
#line 81
static void CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40b9f4b8, 
# 81 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);






static void CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40b9f4b8, 
# 88 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
# 59 "/opt/tinyos-2.x/tos/interfaces/SendNotifier.nc"
static void CC2420ActiveMessageP__SendNotifier__default__aboutToSend(
# 44 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40ba0e20, 
# 59 "/opt/tinyos-2.x/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 95 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP__SubBackoff__requestCca(message_t * msg);
#line 81
static void CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(message_t * msg);






static void CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(message_t * msg);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t CC2420ActiveMessageP__Packet__payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


CC2420ActiveMessageP__Packet__getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t CC2420ActiveMessageP__Packet__maxPayloadLength(void );
#line 83
static void CC2420ActiveMessageP__Packet__setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t CC2420ActiveMessageP__AMSend__send(
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40ba33f8, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

CC2420ActiveMessageP__AMSend__getPayload(
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40ba33f8, 
# 121 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
#line 112
static uint8_t CC2420ActiveMessageP__AMSend__maxPayloadLength(
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40ba33f8);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ActiveMessageP__Snoop__default__receive(
# 41 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40ba1490, 
# 60 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 67
static 
#line 63
message_t * 



CC2420ActiveMessageP__Receive__default__receive(
# 40 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40ba3db8, 
# 60 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 77 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t CC2420ActiveMessageP__AMPacket__source(
#line 73
message_t * amsg);
#line 57
static am_addr_t CC2420ActiveMessageP__AMPacket__address(void );









static am_addr_t CC2420ActiveMessageP__AMPacket__destination(
#line 63
message_t * amsg);
#line 92
static void CC2420ActiveMessageP__AMPacket__setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 136
static am_id_t CC2420ActiveMessageP__AMPacket__type(
#line 132
message_t * amsg);
#line 151
static void CC2420ActiveMessageP__AMPacket__setType(
#line 147
message_t * amsg, 



am_id_t t);
#line 125
static bool CC2420ActiveMessageP__AMPacket__isForMe(
#line 122
message_t * amsg);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420ActiveMessageP__RadioResource__granted(void );
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(
# 36 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40c18200, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__getPayload(
# 36 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40c18200, 
# 121 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );
#line 83
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(
# 37 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40c18bc0, 
# 60 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(
#line 63
message_t * amsg);
#line 92
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 136
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(
#line 132
message_t * amsg);
#line 151
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(
#line 147
message_t * amsg, 



am_id_t t);
# 83 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t SerialP__SplitControl__start(void );
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialP__stopDoneTask__runTask(void );
#line 64
static void SerialP__RunTx__runTask(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t SerialP__Init__init(void );
# 43 "/opt/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flushDone(void );
#line 38
static void SerialP__SerialFlush__default__flush(void );
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialP__startDoneTask__runTask(void );
# 83 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static void SerialP__SerialFrameComm__dataReceived(uint8_t data);





static void SerialP__SerialFrameComm__putDone(void );
#line 74
static void SerialP__SerialFrameComm__delimiterReceived(void );
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialP__defaultSerialFlushTask__runTask(void );
# 60 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static error_t SerialP__SendBytePacket__completeSend(void );
#line 51
static error_t SerialP__SendBytePacket__startSend(uint8_t first_byte);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(
# 40 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40c9d560, 
# 56 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 89
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
# 40 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40c9d560, 
# 85 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(
# 39 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40ca0e50, 
# 60 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
# 43 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40cca088, 
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
# 43 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40cca088);
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
# 43 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40cca088, 
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 70 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);
# 51 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );






static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static void HdlcTranslateC__UartStream__receivedByte(uint8_t byte);
#line 99
static void HdlcTranslateC__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void HdlcTranslateC__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 45 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );
#line 68
static void HdlcTranslateC__SerialFrameComm__resetReceive(void );
#line 54
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );
# 48 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 47
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart0Init__init(void );
# 42 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static error_t HplAtm128UartP__HplUart0__enableRxIntr(void );
#line 40
static error_t HplAtm128UartP__HplUart0__enableTxIntr(void );
static error_t HplAtm128UartP__HplUart0__disableTxIntr(void );

static error_t HplAtm128UartP__HplUart0__disableRxIntr(void );


static void HplAtm128UartP__HplUart0__tx(uint8_t data);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart1Init__init(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__default__txDone(void );
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t HplAtm128UartP__Uart0RxControl__start(void );









static error_t HplAtm128UartP__Uart0RxControl__stop(void );
#line 74
static error_t HplAtm128UartP__Uart0TxControl__start(void );









static error_t HplAtm128UartP__Uart0TxControl__stop(void );
# 41 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl16.nc"
static void HplAtm128Timer3P__TimerCtrl__setCtrlCapture(Atm128TimerCtrlCapture_t control);
#line 37
static Atm128TimerCtrlCapture_t HplAtm128Timer3P__TimerCtrl__getCtrlCapture(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P__CompareA__default__fired(void );
# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer3P__Capture__default__captured(HplAtm128Timer3P__Capture__size_type t);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P__CompareB__default__fired(void );
#line 49
static void HplAtm128Timer3P__CompareC__default__fired(void );
# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static HplAtm128Timer3P__Timer__timer_size HplAtm128Timer3P__Timer__get(void );
#line 95
static void HplAtm128Timer3P__Timer__setScale(uint8_t scale);
#line 58
static void HplAtm128Timer3P__Timer__set(HplAtm128Timer3P__Timer__timer_size t);










static void HplAtm128Timer3P__Timer__start(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*InitThreeP.InitThree*/Atm128TimerInitC__1__Init__init(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__overflow(void );
#line 61
static void /*CounterThree16C.NCounter*/Atm128CounterC__1__Timer__overflow(void );
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC__1__CounterFrom__overflow(void );
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );







static uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



DisseminationEngineImplP__ProbeReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void DisseminationEngineImplP__ProbeAMSend__sendDone(
#line 92
message_t * msg, 






error_t error);
#line 99
static void DisseminationEngineImplP__AMSend__sendDone(
#line 92
message_t * msg, 






error_t error);
# 82 "/opt/tinyos-2.x/tos/lib/net/TrickleTimer.nc"
static void DisseminationEngineImplP__TrickleTimer__fired(
# 50 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40e33e10);
# 77 "/opt/tinyos-2.x/tos/lib/net/TrickleTimer.nc"
static void DisseminationEngineImplP__TrickleTimer__default__incrementCounter(
# 50 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40e33e10);
# 72 "/opt/tinyos-2.x/tos/lib/net/TrickleTimer.nc"
static void DisseminationEngineImplP__TrickleTimer__default__reset(
# 50 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40e33e10);
# 60 "/opt/tinyos-2.x/tos/lib/net/TrickleTimer.nc"
static error_t DisseminationEngineImplP__TrickleTimer__default__start(
# 50 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40e33e10);
# 48 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationCache.nc"
static void DisseminationEngineImplP__DisseminationCache__default__storeData(
# 49 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40e33320, 
# 48 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationCache.nc"
void * data, uint8_t size, uint32_t seqno);

static void DisseminationEngineImplP__DisseminationCache__newData(
# 49 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40e33320);
# 45 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationCache.nc"
static error_t DisseminationEngineImplP__DisseminationCache__start(
# 49 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40e33320);
# 49 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationCache.nc"
static uint32_t DisseminationEngineImplP__DisseminationCache__default__requestSeqno(
# 49 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40e33320);
# 47 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationCache.nc"
static void *DisseminationEngineImplP__DisseminationCache__default__requestData(
# 49 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40e33320, 
# 47 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationCache.nc"
uint8_t *size);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



DisseminationEngineImplP__Receive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t DisseminationEngineImplP__StdControl__start(void );
#line 74
static error_t DisseminationEngineImplP__DisseminatorControl__default__start(
# 51 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40e318f8);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__getPayload(
#line 121
message_t * msg, 


uint8_t len);
#line 112
static uint8_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__maxPayloadLength(void );
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(
#line 85
message_t * msg, 



error_t error);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(
# 40 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40e83650, 
# 92 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(
# 38 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40e52ba0, 
# 56 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(
# 38 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40e52ba0, 
# 111 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 


uint8_t len);
#line 101
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__maxPayloadLength(
# 38 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40e52ba0);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(
# 38 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40e52ba0, 
# 85 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );
#line 64
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*DisseminationEngineP.DisseminationProbeSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(
#line 85
message_t * msg, 



error_t error);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__changedTask__runTask(void );
# 47 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationCache.nc"
static void */*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__requestData(uint8_t *size);
static void /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__storeData(void * data, uint8_t size, uint32_t seqno);
static uint32_t /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__requestSeqno(void );
# 52 "/opt/tinyos-2.x/tos/lib/net/DisseminationUpdate.nc"
static void /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationUpdate__change(/*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationUpdate__t * newVal);
# 61 "/opt/tinyos-2.x/tos/lib/net/DisseminationValue.nc"
static void /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationValue__default__changed(void );
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__StdControl__start(void );
# 82 "/opt/tinyos-2.x/tos/lib/net/TrickleTimer.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__default__fired(
# 50 "/opt/tinyos-2.x/tos/lib/net/TrickleTimerImplP.nc"
uint8_t arg_0x40ee3148);
# 77 "/opt/tinyos-2.x/tos/lib/net/TrickleTimer.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__incrementCounter(
# 50 "/opt/tinyos-2.x/tos/lib/net/TrickleTimerImplP.nc"
uint8_t arg_0x40ee3148);
# 72 "/opt/tinyos-2.x/tos/lib/net/TrickleTimer.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__reset(
# 50 "/opt/tinyos-2.x/tos/lib/net/TrickleTimerImplP.nc"
uint8_t arg_0x40ee3148);
# 60 "/opt/tinyos-2.x/tos/lib/net/TrickleTimer.nc"
static error_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__start(
# 50 "/opt/tinyos-2.x/tos/lib/net/TrickleTimerImplP.nc"
uint8_t arg_0x40ee3148);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Init__init(void );
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask__runTask(void );
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__fired(void );
# 34 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__clearAll(void );
#line 58
static void /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__clear(uint16_t bitnum);
#line 46
static bool /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__get(uint16_t bitnum);





static void /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__set(uint16_t bitnum);
#line 34
static void /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__clearAll(void );
#line 58
static void /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__clear(uint16_t bitnum);
#line 46
static bool /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__get(uint16_t bitnum);





static void /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__set(uint16_t bitnum);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP__0__SubReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__sendDone(
#line 92
message_t * msg, 






error_t error);
# 50 "/opt/tinyos-2.x/tos/lib/net/CollectionDebug.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__default__logEvent(uint8_t type);
#line 62
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__default__logEventMsg(uint8_t type, uint16_t msg, am_addr_t origin, am_addr_t node);
# 43 "/opt/tinyos-2.x/tos/lib/net/CollectionPacket.nc"
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(message_t *msg);





static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(message_t *msg);
# 61 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__evicted(am_addr_t neighbor);
# 31 "/opt/tinyos-2.x/tos/interfaces/Intercept.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__Intercept__default__forward(
# 114 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0x40f8f3f0, 
# 20 "/opt/tinyos-2.x/tos/interfaces/Intercept.nc"
message_t * msg, 

void * payload, 








uint8_t len);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


/*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__maxPayloadLength(void );
#line 83
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP__0__Snoop__default__receive(
# 113 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0x40f90c80, 
# 60 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__default__sendDone(
# 111 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0x40f91b40, 
# 85 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__fired(void );
# 92 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RadioControl__startDone(error_t error);
#line 117
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RadioControl__stopDone(error_t error);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__runTask(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Init__init(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP__0__Receive__default__receive(
# 112 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0x40f90598, 
# 60 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 7 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpCongestion.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpCongestion__isCongested(void );
# 51 "/opt/tinyos-2.x/tos/lib/net/UnicastNameFreeRouting.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__routeFound(void );
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__noRoute(void );
# 52 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpPacket.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__option(message_t *msg, ctp_options_t opt);





static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setEtx(message_t *msg, uint16_t etx);
#line 49
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__clearOption(message_t *msg, ctp_options_t option);







static uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getEtx(message_t *msg);


static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getOrigin(message_t *msg);
#line 46
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setOption(message_t *msg, ctp_options_t option);







static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getThl(message_t *msg);








static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getSequenceNumber(message_t *msg);





static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__matchInstance(message_t *m1, message_t *m2);
#line 66
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getType(message_t *msg);
#line 55
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setThl(message_t *msg, uint8_t thl);
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__StdControl__start(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSnoop__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 97 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__t * 


/*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__get(void );
#line 61
static bool /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__empty(void );
#line 89
static error_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__put(
#line 85
/*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__t * newVal);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__Init__init(void );
# 97 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__t * 


/*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__get(void );
#line 61
static bool /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__empty(void );
#line 89
static error_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__put(
#line 85
/*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__t * newVal);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Init__init(void );
# 73 "/opt/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
/*CtpP.SendQueueP*/QueueC__0__Queue__t  

/*CtpP.SendQueueP*/QueueC__0__Queue__head(void );
#line 90
static error_t /*CtpP.SendQueueP*/QueueC__0__Queue__enqueue(
#line 86
/*CtpP.SendQueueP*/QueueC__0__Queue__t  newVal);
#line 101
static 
#line 99
/*CtpP.SendQueueP*/QueueC__0__Queue__t  

/*CtpP.SendQueueP*/QueueC__0__Queue__element(uint8_t idx);
#line 65
static uint8_t /*CtpP.SendQueueP*/QueueC__0__Queue__maxSize(void );
#line 81
static 
#line 79
/*CtpP.SendQueueP*/QueueC__0__Queue__t  

/*CtpP.SendQueueP*/QueueC__0__Queue__dequeue(void );
#line 50
static bool /*CtpP.SendQueueP*/QueueC__0__Queue__empty(void );







static uint8_t /*CtpP.SendQueueP*/QueueC__0__Queue__size(void );
# 40 "/opt/tinyos-2.x/tos/interfaces/Cache.nc"
static void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__insert(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__t item);







static bool /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__lookup(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__t item);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Init__init(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



LinkEstimatorP__SubReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 51 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
static error_t LinkEstimatorP__LinkEstimator__txAck(am_addr_t neighbor);
#line 44
static error_t LinkEstimatorP__LinkEstimator__pinNeighbor(am_addr_t neighbor);










static error_t LinkEstimatorP__LinkEstimator__txNoAck(am_addr_t neighbor);
#line 41
static error_t LinkEstimatorP__LinkEstimator__insertNeighbor(am_addr_t neighbor);
#line 58
static error_t LinkEstimatorP__LinkEstimator__clearDLQ(am_addr_t neighbor);
#line 47
static error_t LinkEstimatorP__LinkEstimator__unpinNeighbor(am_addr_t neighbor);
#line 38
static uint16_t LinkEstimatorP__LinkEstimator__getLinkQuality(uint16_t neighbor);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t LinkEstimatorP__Packet__payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


LinkEstimatorP__Packet__getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t LinkEstimatorP__Packet__maxPayloadLength(void );
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void LinkEstimatorP__AMSend__sendDone(
#line 92
message_t * msg, 






error_t error);
#line 69
static error_t LinkEstimatorP__Send__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

LinkEstimatorP__Send__getPayload(
#line 121
message_t * msg, 


uint8_t len);
#line 112
static uint8_t LinkEstimatorP__Send__maxPayloadLength(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t LinkEstimatorP__Init__init(void );
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t LinkEstimatorP__StdControl__start(void );
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 112
static uint8_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__maxPayloadLength(void );
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__sendDone(
#line 85
message_t * msg, 



error_t error);
# 43 "/opt/tinyos-2.x/tos/lib/net/RootControl.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__isRoot(void );
#line 41
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__setRoot(void );
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__runTask(void );
# 68 "/opt/tinyos-2.x/tos/lib/net/CollectionDebug.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__default__logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t metric);
#line 56
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__default__logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3);
# 61 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__evicted(am_addr_t neighbor);
# 46 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingPacket.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP__0__CtpRoutingPacket__getOption(message_t * msg, ctp_options_t opt);
# 92 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__RadioControl__startDone(error_t error);
#line 117
static void /*CtpP.Router*/CtpRoutingEngineP__0__RadioControl__stopDone(error_t error);
# 71 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpInfo.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__recomputeRoutes(void );
#line 59
static void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__triggerRouteUpdate(void );
#line 52
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__getEtx(uint16_t *etx);
#line 66
static void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__triggerImmediateRouteUpdate(void );









static void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__setNeighborCongested(am_addr_t n, bool congested);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask__runTask(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__Init__init(void );
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__sendDone(
#line 92
message_t * msg, 






error_t error);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__fired(void );
#line 72
static void /*CtpP.Router*/CtpRoutingEngineP__0__RouteTimer__fired(void );
# 43 "/opt/tinyos-2.x/tos/lib/net/ctp/CompareBit.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP__0__CompareBit__shouldInsert(message_t * msg, void * payload, uint8_t len);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*CtpP.Router*/CtpRoutingEngineP__0__BeaconReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__StdControl__start(void );
# 49 "/opt/tinyos-2.x/tos/lib/net/UnicastNameFreeRouting.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP__0__Routing__hasRoute(void );
#line 48
static am_addr_t /*CtpP.Router*/CtpRoutingEngineP__0__Routing__nextHop(void );
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__Send__sendDone(
#line 85
message_t * msg, 



error_t error);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*AntiTheftRootAppC.AlertsForwarder.AMQueueEntryP*/AMQueueEntryP__4__AMSend__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*AntiTheftRootAppC.AlertsForwarder.AMQueueEntryP*/AMQueueEntryP__4__AMSend__getPayload(
#line 121
message_t * msg, 


uint8_t len);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*AntiTheftRootAppC.AlertsForwarder.AMQueueEntryP*/AMQueueEntryP__4__Send__sendDone(
#line 85
message_t * msg, 



error_t error);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(
# 40 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40e83650, 
# 92 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__send(
# 38 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40e52ba0, 
# 56 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__getPayload(
# 38 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40e52ba0, 
# 111 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 


uint8_t len);
#line 89
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(
# 38 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40e52ba0, 
# 85 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask(void );
#line 64
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask(void );
# 41 "/opt/tinyos-2.x/tos/lib/net/RootControl.nc"
static error_t AntiTheftRootC__RootControl__setRoot(void );
# 83 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t AntiTheftRootC__SerialControl__start(void );
#line 83
static error_t AntiTheftRootC__RadioControl__start(void );
# 52 "/opt/tinyos-2.x/tos/interfaces/LowPowerListening.nc"
static void AntiTheftRootC__LowPowerListening__setLocalWakeupInterval(uint16_t intervalMs);
# 52 "/opt/tinyos-2.x/tos/lib/net/DisseminationUpdate.nc"
static void AntiTheftRootC__SettingsUpdate__change(AntiTheftRootC__SettingsUpdate__t * newVal);
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t AntiTheftRootC__CollectionControl__start(void );
#line 74
static error_t AntiTheftRootC__DisseminationControl__start(void );
# 56 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static void AntiTheftRootC__Leds__led0Toggle(void );
#line 89
static void AntiTheftRootC__Leds__led2Toggle(void );
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t AntiTheftRootC__AlertsForward__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

AntiTheftRootC__AlertsForward__getPayload(
#line 121
message_t * msg, 


uint8_t len);
# 43 "AntiTheftRootC.nc"
static inline void AntiTheftRootC__Boot__booted(void );





static inline void AntiTheftRootC__SerialControl__startDone(error_t error);
static inline void AntiTheftRootC__SerialControl__stopDone(error_t error);
static inline void AntiTheftRootC__RadioControl__startDone(error_t error);
#line 64
static inline void AntiTheftRootC__RadioControl__stopDone(error_t error);



static inline message_t *AntiTheftRootC__SettingsReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 80
message_t AntiTheftRootC__fwdMsg;
bool AntiTheftRootC__fwdBusy;



static message_t *AntiTheftRootC__AlertsReceive__receive(message_t *msg, void *payload, 
uint8_t len);
#line 106
static inline void AntiTheftRootC__AlertsForward__sendDone(message_t *msg, error_t error);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 51
static error_t PlatformP__MeasureClock__init(void );
# 42 "/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP__power_init(void );






static inline error_t PlatformP__Init__init(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MotePlatformP__SubInit__init(void );
# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void MotePlatformP__SerialIdPin__makeInput(void );
#line 30
static void MotePlatformP__SerialIdPin__clr(void );
# 26 "/opt/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void );
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );

static inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );





static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );

static inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 47
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void );
#line 52
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void );
#line 52
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__get(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__get(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__get(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__get(void );
# 33 "/opt/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
enum MeasureClockC____nesc_unnamed4353 {


  MeasureClockC__MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
#line 120
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 46 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 61
static void RealMainP__Scheduler__taskLoop(void );
#line 54
static bool RealMainP__Scheduler__runNextTask(void );
# 52 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
int main(void )   ;
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x40347c40);
# 59 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 50 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4354 {

  SchedulerBasicP__NUM_TASKS = 28U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 86
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 113
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 138
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 159
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 54 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 58 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
const_uint8_t McuSleepC__atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 3, ((
1 << 2) | (1 << 4)) | (1 << 3), (
1 << 4) | (1 << 3), (
1 << 2) | (1 << 4), 
1 << 4 };

static inline mcu_power_t McuSleepC__getPowerState(void );
#line 97
static inline void McuSleepC__McuSleep__sleep(void );
#line 110
static inline void McuSleepC__McuPowerState__update(void );
# 31 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__toggle(void );



static void LedsP__Led0__makeOutput(void );
#line 29
static void LedsP__Led0__set(void );





static void LedsP__Led1__makeOutput(void );
#line 29
static void LedsP__Led1__set(void );

static void LedsP__Led2__toggle(void );



static void LedsP__Led2__makeOutput(void );
#line 29
static void LedsP__Led2__set(void );
# 45 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 73
static inline void LedsP__Leds__led0Toggle(void );
#line 103
static inline void LedsP__Leds__led2Toggle(void );
# 92 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void CC2420CsmaP__SplitControl__startDone(error_t error);
#line 117
static void CC2420CsmaP__SplitControl__stopDone(error_t error);
# 95 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420CsmaP__RadioBackoff__requestCca(message_t * msg);
#line 81
static void CC2420CsmaP__RadioBackoff__requestInitialBackoff(message_t * msg);






static void CC2420CsmaP__RadioBackoff__requestCongestionBackoff(message_t * msg);
#line 66
static void CC2420CsmaP__SubBackoff__setCongestionBackoff(uint16_t backoffTime);
#line 60
static void CC2420CsmaP__SubBackoff__setInitialBackoff(uint16_t backoffTime);
# 51 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static error_t CC2420CsmaP__CC2420Transmit__send(message_t * p_msg, bool useCca);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void CC2420CsmaP__Send__sendDone(
#line 85
message_t * msg, 



error_t error);
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t CC2420CsmaP__Random__rand16(void );
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t CC2420CsmaP__SubControl__start(void );









static error_t CC2420CsmaP__SubControl__stop(void );
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420CsmaP__CC2420PacketBody__getHeader(message_t * msg);




static cc2420_metadata_t * CC2420CsmaP__CC2420PacketBody__getMetadata(message_t * msg);
# 71 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static error_t CC2420CsmaP__CC2420Power__startOscillator(void );
#line 90
static error_t CC2420CsmaP__CC2420Power__rxOn(void );
#line 51
static error_t CC2420CsmaP__CC2420Power__startVReg(void );
#line 63
static error_t CC2420CsmaP__CC2420Power__stopVReg(void );
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420CsmaP__Resource__release(void );
#line 78
static error_t CC2420CsmaP__Resource__request(void );
# 66 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static bool CC2420CsmaP__SplitControlState__isState(uint8_t myState);
#line 45
static error_t CC2420CsmaP__SplitControlState__requestState(uint8_t reqState);





static void CC2420CsmaP__SplitControlState__forceState(uint8_t reqState);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t CC2420CsmaP__sendDone_task__postTask(void );
#line 56
static error_t CC2420CsmaP__stopDone_task__postTask(void );
#line 56
static error_t CC2420CsmaP__startDone_task__postTask(void );
# 74 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
enum CC2420CsmaP____nesc_unnamed4355 {
#line 74
  CC2420CsmaP__startDone_task = 0U
};
#line 74
typedef int CC2420CsmaP____nesc_sillytask_startDone_task[CC2420CsmaP__startDone_task];
enum CC2420CsmaP____nesc_unnamed4356 {
#line 75
  CC2420CsmaP__stopDone_task = 1U
};
#line 75
typedef int CC2420CsmaP____nesc_sillytask_stopDone_task[CC2420CsmaP__stopDone_task];
enum CC2420CsmaP____nesc_unnamed4357 {
#line 76
  CC2420CsmaP__sendDone_task = 2U
};
#line 76
typedef int CC2420CsmaP____nesc_sillytask_sendDone_task[CC2420CsmaP__sendDone_task];
#line 58
enum CC2420CsmaP____nesc_unnamed4358 {
  CC2420CsmaP__S_STOPPED, 
  CC2420CsmaP__S_STARTING, 
  CC2420CsmaP__S_STARTED, 
  CC2420CsmaP__S_STOPPING, 
  CC2420CsmaP__S_TRANSMITTING
};

message_t * CC2420CsmaP__m_msg;

error_t CC2420CsmaP__sendErr = SUCCESS;


bool CC2420CsmaP__ccaOn;






static inline void CC2420CsmaP__shutdown(void );


static inline error_t CC2420CsmaP__SplitControl__start(void );
#line 122
static inline error_t CC2420CsmaP__Send__send(message_t *p_msg, uint8_t len);
#line 170
static inline uint8_t CC2420CsmaP__Send__maxPayloadLength(void );
#line 202
static inline void CC2420CsmaP__CC2420Transmit__sendDone(message_t *p_msg, error_t err);




static inline void CC2420CsmaP__CC2420Power__startVRegDone(void );



static inline void CC2420CsmaP__Resource__granted(void );



static inline void CC2420CsmaP__CC2420Power__startOscillatorDone(void );




static inline void CC2420CsmaP__SubBackoff__requestInitialBackoff(message_t *msg);






static inline void CC2420CsmaP__SubBackoff__requestCongestionBackoff(message_t *msg);
#line 241
static inline void CC2420CsmaP__sendDone_task__runTask(void );
#line 254
static inline void CC2420CsmaP__startDone_task__runTask(void );







static inline void CC2420CsmaP__stopDone_task__runTask(void );









static inline void CC2420CsmaP__shutdown(void );
# 53 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ControlP__CC2420Config__syncDone(error_t error);
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__RXCTRL1__write(uint16_t data);
# 55 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void CC2420ControlP__StartupTimer__start(CC2420ControlP__StartupTimer__size_type dt);
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__MDMCTRL0__write(uint16_t data);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP__RSTN__makeOutput(void );
#line 29
static void CC2420ControlP__RSTN__set(void );
static void CC2420ControlP__RSTN__clr(void );
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static void CC2420ControlP__ReadRssi__readDone(error_t result, CC2420ControlP__ReadRssi__val_t val);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t CC2420ControlP__syncDone__postTask(void );
# 47 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__RSSI__read(uint16_t *data);







static cc2420_status_t CC2420ControlP__IOCFG0__write(uint16_t data);
# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t CC2420ControlP__ActiveMessageAddress__amAddress(void );




static am_group_t CC2420ControlP__ActiveMessageAddress__amGroup(void );
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP__CSN__makeOutput(void );
#line 29
static void CC2420ControlP__CSN__set(void );
static void CC2420ControlP__CSN__clr(void );




static void CC2420ControlP__VREN__makeOutput(void );
#line 29
static void CC2420ControlP__VREN__set(void );
static void CC2420ControlP__VREN__clr(void );
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SXOSCON__strobe(void );
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__SpiResource__release(void );
#line 78
static error_t CC2420ControlP__SpiResource__request(void );
#line 110
static error_t CC2420ControlP__SyncResource__release(void );
#line 78
static error_t CC2420ControlP__SyncResource__request(void );
# 76 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static void CC2420ControlP__CC2420Power__startOscillatorDone(void );
#line 56
static void CC2420ControlP__CC2420Power__startVRegDone(void );
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__IOCFG1__write(uint16_t data);
#line 55
static cc2420_status_t CC2420ControlP__FSCTRL__write(uint16_t data);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SRXON__strobe(void );
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420ControlP__Resource__granted(void );
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420ControlP__PANID__write(uint8_t offset, uint8_t * data, uint8_t length);
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ControlP__InterruptCCA__disable(void );
#line 42
static error_t CC2420ControlP__InterruptCCA__enableRisingEdge(void );
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__RssiResource__release(void );
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SRFOFF__strobe(void );
# 117 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
enum CC2420ControlP____nesc_unnamed4359 {
#line 117
  CC2420ControlP__sync = 3U
};
#line 117
typedef int CC2420ControlP____nesc_sillytask_sync[CC2420ControlP__sync];
enum CC2420ControlP____nesc_unnamed4360 {
#line 118
  CC2420ControlP__syncDone = 4U
};
#line 118
typedef int CC2420ControlP____nesc_sillytask_syncDone[CC2420ControlP__syncDone];
#line 85
#line 79
typedef enum CC2420ControlP____nesc_unnamed4361 {
  CC2420ControlP__S_VREG_STOPPED, 
  CC2420ControlP__S_VREG_STARTING, 
  CC2420ControlP__S_VREG_STARTED, 
  CC2420ControlP__S_XOSC_STARTING, 
  CC2420ControlP__S_XOSC_STARTED
} CC2420ControlP__cc2420_control_state_t;

uint8_t CC2420ControlP__m_channel;

uint8_t CC2420ControlP__m_tx_power;

uint16_t CC2420ControlP__m_pan;

uint16_t CC2420ControlP__m_short_addr;

bool CC2420ControlP__m_sync_busy;


bool CC2420ControlP__autoAckEnabled;


bool CC2420ControlP__hwAutoAckDefault;


bool CC2420ControlP__addressRecognition;


bool CC2420ControlP__hwAddressRecognition;

CC2420ControlP__cc2420_control_state_t CC2420ControlP__m_state = CC2420ControlP__S_VREG_STOPPED;



static void CC2420ControlP__writeFsctrl(void );
static void CC2420ControlP__writeMdmctrl0(void );
static void CC2420ControlP__writeId(void );





static inline error_t CC2420ControlP__Init__init(void );
#line 171
static inline error_t CC2420ControlP__Resource__request(void );







static inline error_t CC2420ControlP__Resource__release(void );







static inline error_t CC2420ControlP__CC2420Power__startVReg(void );
#line 199
static inline error_t CC2420ControlP__CC2420Power__stopVReg(void );







static inline error_t CC2420ControlP__CC2420Power__startOscillator(void );
#line 249
static inline error_t CC2420ControlP__CC2420Power__rxOn(void );
#line 279
static uint16_t CC2420ControlP__CC2420Config__getShortAddr(void );







static inline uint16_t CC2420ControlP__CC2420Config__getPanAddr(void );
#line 300
static inline error_t CC2420ControlP__CC2420Config__sync(void );
#line 332
static inline bool CC2420ControlP__CC2420Config__isAddressRecognitionEnabled(void );
#line 359
static inline bool CC2420ControlP__CC2420Config__isHwAutoAckDefault(void );






static inline bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void );









static inline void CC2420ControlP__SyncResource__granted(void );
#line 390
static inline void CC2420ControlP__SpiResource__granted(void );




static inline void CC2420ControlP__RssiResource__granted(void );
#line 408
static inline void CC2420ControlP__StartupTimer__fired(void );









static inline void CC2420ControlP__InterruptCCA__fired(void );
#line 442
static inline void CC2420ControlP__sync__runTask(void );



static inline void CC2420ControlP__syncDone__runTask(void );









static void CC2420ControlP__writeFsctrl(void );
#line 473
static void CC2420ControlP__writeMdmctrl0(void );
#line 492
static void CC2420ControlP__writeId(void );
#line 509
static inline void CC2420ControlP__ReadRssi__default__readDone(error_t error, uint16_t data);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP__Compare__fired(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP__Timer__overflow(void );
# 50 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP__Timer__get(void );
#line 76
static inline void HplAtm128Timer0AsyncP__TimerCtrl__setControl(Atm128TimerControl_t x);
#line 94
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void );
#line 122
static inline void HplAtm128Timer0AsyncP__Compare__start(void );









static inline uint8_t HplAtm128Timer0AsyncP__Compare__get(void );


static inline void HplAtm128Timer0AsyncP__Compare__set(uint8_t t);




static __inline void HplAtm128Timer0AsyncP__stabiliseTimer0(void );
#line 155
static inline mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void );
#line 178
void __vector_15(void ) __attribute((signal))   ;





void __vector_16(void ) __attribute((signal))   ;
#line 198
static inline void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void );







static inline int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void );
# 44 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer1P__Timer0Ctrl__getInterruptFlag(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareA__fired(void );
# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer1P__Capture__captured(HplAtm128Timer1P__Capture__size_type t);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareB__fired(void );
#line 49
static void HplAtm128Timer1P__CompareC__fired(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer1P__Timer__overflow(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P__Timer__get(void );


static inline void HplAtm128Timer1P__Timer__set(uint16_t t);








static inline void HplAtm128Timer1P__Timer__setScale(uint8_t s);









static inline Atm128TimerCtrlCapture_t HplAtm128Timer1P__TimerCtrl__getCtrlCapture(void );









static inline uint16_t HplAtm128Timer1P__TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x);






static inline void HplAtm128Timer1P__TimerCtrl__setCtrlCapture(Atm128_TCCR1B_t x);
#line 122
static inline void HplAtm128Timer1P__Capture__setEdge(bool up);



static inline void HplAtm128Timer1P__Capture__reset(void );
static inline void HplAtm128Timer1P__CompareA__reset(void );



static inline void HplAtm128Timer1P__Timer__start(void );
static inline void HplAtm128Timer1P__Capture__start(void );
static inline void HplAtm128Timer1P__CompareA__start(void );




static inline void HplAtm128Timer1P__Capture__stop(void );
static inline void HplAtm128Timer1P__CompareA__stop(void );




static inline bool HplAtm128Timer1P__Timer__test(void );
#line 183
static inline void HplAtm128Timer1P__CompareA__set(uint16_t t);
#line 195
void __vector_12(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer1P__CompareB__default__fired(void );
void __vector_13(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer1P__CompareC__default__fired(void );
void __vector_24(void ) __attribute((interrupt))   ;



void __vector_11(void ) __attribute((interrupt))   ;



void __vector_14(void ) __attribute((interrupt))   ;
# 95 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale);
#line 58
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size t);










static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start(void );
# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void );








static inline void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void );
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__fired(void );
# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset(void );
#line 45
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type t);










static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start(void );


static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop(void );
# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get(void );
# 65 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__stop(void );








static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size dt);
#line 110
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void );






static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void );
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow(void );
# 78 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test(void );
#line 52
static /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get(void );
# 41 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void );




static inline bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );









static inline void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get(void );






static bool /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__overflow(void );
# 56 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type /*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper;

enum /*Counter32khz32C.Transform32*/TransformCounterC__0____nesc_unnamed4362 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type ) - /*Counter32khz32C.Transform32*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type ) + 0, 



  TransformCounterC__0__OVERFLOW_MASK = /*Counter32khz32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type )2 << (/*Counter32khz32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get(void );
#line 122
static inline void /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void );
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__fired(void );
#line 92
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type dt);
#line 62
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__stop(void );
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__get(void );
# 66 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0;
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt;

enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0____nesc_unnamed4363 {

  TransformAlarmC__0__MAX_DELAY_LOG2 = 8 * sizeof(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type ) - 1 - 0, 
  TransformAlarmC__0__MAX_DELAY = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type )1 << /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY_LOG2
};

static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow(void );
#line 91
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__stop(void );




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__set_alarm(void );
#line 136
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type dt);









static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type dt);




static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__fired(void );
#line 166
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__overflow(void );
# 22 "/opt/tinyos-2.x/tos/system/NoInitC.nc"
static inline error_t NoInitC__Init__init(void );
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captured(uint16_t time);
# 79 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__setEdge(bool up);
#line 55
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__reset(void );


static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__start(void );


static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__stop(void );
# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__enableCapture(uint8_t mode);









static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureRisingEdge(void );



static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureFallingEdge(void );



static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__disable(void );



static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__captured(uint16_t time);
# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__clear(void );
#line 40
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__disable(void );
#line 59
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__edge(bool low_to_high);
#line 35
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__enable(void );
# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__fired(void );
# 15 "/opt/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__enable(bool rising);
#line 29
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__enableFallingEdge(void );



static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__disable(void );




static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__fired(void );
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void HplAtm128InterruptSigP__IntSig6__fired(void );
#line 41
static void HplAtm128InterruptSigP__IntSig1__fired(void );
#line 41
static void HplAtm128InterruptSigP__IntSig4__fired(void );
#line 41
static void HplAtm128InterruptSigP__IntSig7__fired(void );
#line 41
static void HplAtm128InterruptSigP__IntSig2__fired(void );
#line 41
static void HplAtm128InterruptSigP__IntSig5__fired(void );
#line 41
static void HplAtm128InterruptSigP__IntSig0__fired(void );
#line 41
static void HplAtm128InterruptSigP__IntSig3__fired(void );
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSigP.nc"
void __vector_1(void ) __attribute((signal))   ;




void __vector_2(void ) __attribute((signal))   ;




void __vector_3(void ) __attribute((signal))   ;




void __vector_4(void ) __attribute((signal))   ;




void __vector_5(void ) __attribute((signal))   ;




void __vector_6(void ) __attribute((signal))   ;




void __vector_7(void ) __attribute((signal))   ;




void __vector_8(void ) __attribute((signal))   ;
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__fired(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__default__fired(void );
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__fired(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__default__fired(void );
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__fired(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__default__fired(void );
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__fired(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__default__fired(void );
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__fired(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__default__fired(void );
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__fired(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__default__fired(void );
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__fired(void );
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__clear(void );
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__enable(void );
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__disable(void );



static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__edge(bool low_to_high);
#line 61
static inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__IrqSignal__fired(void );
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__fired(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__default__fired(void );
# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static bool HplCC2420InterruptsP__CC_CCA__get(void );
# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static void HplCC2420InterruptsP__CCA__fired(void );
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t HplCC2420InterruptsP__CCATask__postTask(void );
# 69 "/opt/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
enum HplCC2420InterruptsP____nesc_unnamed4364 {
#line 69
  HplCC2420InterruptsP__CCATask = 5U
};
#line 69
typedef int HplCC2420InterruptsP____nesc_sillytask_CCATask[HplCC2420InterruptsP__CCATask];
#line 56
uint8_t HplCC2420InterruptsP__ccaWaitForState;

uint8_t HplCC2420InterruptsP__ccaLastState;

bool HplCC2420InterruptsP__ccaCheckDisabled = FALSE;








static inline void HplCC2420InterruptsP__CCATask__runTask(void );
#line 89
static inline error_t HplCC2420InterruptsP__CCA__enableRisingEdge(void );
#line 105
static inline error_t HplCC2420InterruptsP__CCA__disable(void );
# 59 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static error_t CC2420SpiP__SpiPacket__send(
#line 48
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420SpiP__Fifo__writeDone(
# 46 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x407ceb38, 
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420SpiP__Fifo__readDone(
# 46 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x407ceb38, 
# 71 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 24 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP__ChipSpiResource__releasing(void );
# 34 "/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
static uint8_t CC2420SpiP__SpiByte__write(uint8_t tx);
# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static void CC2420SpiP__WorkingState__toIdle(void );




static bool CC2420SpiP__WorkingState__isIdle(void );
#line 45
static error_t CC2420SpiP__WorkingState__requestState(uint8_t reqState);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__SpiResource__release(void );
#line 87
static error_t CC2420SpiP__SpiResource__immediateRequest(void );
#line 78
static error_t CC2420SpiP__SpiResource__request(void );
#line 118
static bool CC2420SpiP__SpiResource__isOwner(void );
#line 92
static void CC2420SpiP__Resource__granted(
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x407ce108);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t CC2420SpiP__grant__postTask(void );
# 88 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
enum CC2420SpiP____nesc_unnamed4365 {
#line 88
  CC2420SpiP__grant = 6U
};
#line 88
typedef int CC2420SpiP____nesc_sillytask_grant[CC2420SpiP__grant];
#line 63
enum CC2420SpiP____nesc_unnamed4366 {
  CC2420SpiP__RESOURCE_COUNT = 5U, 
  CC2420SpiP__NO_HOLDER = 0xFF
};


enum CC2420SpiP____nesc_unnamed4367 {
  CC2420SpiP__S_IDLE, 
  CC2420SpiP__S_BUSY
};


uint16_t CC2420SpiP__m_addr;


uint8_t CC2420SpiP__m_requests = 0;


uint8_t CC2420SpiP__m_holder = CC2420SpiP__NO_HOLDER;


bool CC2420SpiP__release;


static error_t CC2420SpiP__attemptRelease(void );







static inline void CC2420SpiP__ChipSpiResource__abortRelease(void );






static inline error_t CC2420SpiP__ChipSpiResource__attemptRelease(void );




static error_t CC2420SpiP__Resource__request(uint8_t id);
#line 126
static error_t CC2420SpiP__Resource__immediateRequest(uint8_t id);
#line 149
static error_t CC2420SpiP__Resource__release(uint8_t id);
#line 178
static inline uint8_t CC2420SpiP__Resource__isOwner(uint8_t id);





static inline void CC2420SpiP__SpiResource__granted(void );




static cc2420_status_t CC2420SpiP__Fifo__beginRead(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 209
static inline error_t CC2420SpiP__Fifo__continueRead(uint8_t addr, uint8_t *data, 
uint8_t len);



static inline cc2420_status_t CC2420SpiP__Fifo__write(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 260
static cc2420_status_t CC2420SpiP__Ram__write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len);
#line 287
static inline cc2420_status_t CC2420SpiP__Reg__read(uint8_t addr, uint16_t *data);
#line 305
static cc2420_status_t CC2420SpiP__Reg__write(uint8_t addr, uint16_t data);
#line 318
static cc2420_status_t CC2420SpiP__Strobe__strobe(uint8_t addr);










static void CC2420SpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error);








static error_t CC2420SpiP__attemptRelease(void );
#line 358
static inline void CC2420SpiP__grant__runTask(void );








static inline void CC2420SpiP__Resource__default__granted(uint8_t id);


static inline void CC2420SpiP__Fifo__default__readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error);


static inline void CC2420SpiP__Fifo__default__writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error);
# 74 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t StateImplP__state[4U];

enum StateImplP____nesc_unnamed4368 {
  StateImplP__S_IDLE = 0
};


static inline error_t StateImplP__Init__init(void );
#line 96
static error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState);
#line 111
static inline void StateImplP__State__forceState(uint8_t id, uint8_t reqState);






static inline void StateImplP__State__toIdle(uint8_t id);







static inline bool StateImplP__State__isIdle(uint8_t id);






static bool StateImplP__State__isState(uint8_t id, uint8_t myState);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t Atm128SpiP__zeroTask__postTask(void );
# 71 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static void Atm128SpiP__SpiPacket__sendDone(
#line 64
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__ResourceArbiter__release(
# 85 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40824068);
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__ResourceArbiter__immediateRequest(
# 85 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40824068);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__ResourceArbiter__request(
# 85 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40824068);
# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static bool Atm128SpiP__ResourceArbiter__isOwner(
# 85 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40824068);
# 72 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP__Spi__sleep(void );
#line 66
static void Atm128SpiP__Spi__initMaster(void );
#line 96
static void Atm128SpiP__Spi__enableInterrupt(bool enabled);
#line 80
static uint8_t Atm128SpiP__Spi__read(void );
#line 125
static void Atm128SpiP__Spi__setMasterDoubleSpeed(bool on);
#line 114
static void Atm128SpiP__Spi__setClock(uint8_t speed);
#line 108
static void Atm128SpiP__Spi__setClockPolarity(bool highWhenIdle);
#line 86
static void Atm128SpiP__Spi__write(uint8_t data);
#line 99
static void Atm128SpiP__Spi__enableSpi(bool busOn);
#line 111
static void Atm128SpiP__Spi__setClockPhase(bool sampleOnTrailing);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void Atm128SpiP__Resource__granted(
# 81 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40827398);
# 80 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static bool Atm128SpiP__ArbiterInfo__inUse(void );
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void Atm128SpiP__McuPowerState__update(void );
# 241 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
enum Atm128SpiP____nesc_unnamed4369 {
#line 241
  Atm128SpiP__zeroTask = 7U
};
#line 241
typedef int Atm128SpiP____nesc_sillytask_zeroTask[Atm128SpiP__zeroTask];
#line 91
uint16_t Atm128SpiP__len;
uint8_t * Atm128SpiP__txBuffer;
uint8_t * Atm128SpiP__rxBuffer;
uint16_t Atm128SpiP__pos;

enum Atm128SpiP____nesc_unnamed4370 {
  Atm128SpiP__SPI_IDLE, 
  Atm128SpiP__SPI_BUSY, 
  Atm128SpiP__SPI_ATOMIC_SIZE = 10
};





static void Atm128SpiP__startSpi(void );
#line 120
static inline void Atm128SpiP__stopSpi(void );







static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx);
#line 196
static error_t Atm128SpiP__sendNextPart(void );
#line 241
static inline void Atm128SpiP__zeroTask__runTask(void );
#line 275
static error_t Atm128SpiP__SpiPacket__send(uint8_t *writeBuf, 
uint8_t *readBuf, 
uint16_t bufLen);
#line 299
static inline void Atm128SpiP__Spi__dataReady(uint8_t data);
#line 339
static inline error_t Atm128SpiP__Resource__immediateRequest(uint8_t id);







static inline error_t Atm128SpiP__Resource__request(uint8_t id);








static inline error_t Atm128SpiP__Resource__release(uint8_t id);









static inline uint8_t Atm128SpiP__Resource__isOwner(uint8_t id);



static inline void Atm128SpiP__ResourceArbiter__granted(uint8_t id);



static inline void Atm128SpiP__Resource__default__granted(uint8_t id);
# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP__MISO__makeInput(void );

static void HplAtm128SpiP__SCK__makeOutput(void );
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void HplAtm128SpiP__Mcu__update(void );
# 92 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP__SPI__dataReady(uint8_t data);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP__MOSI__makeOutput(void );
# 79 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__initMaster(void );
#line 94
static inline void HplAtm128SpiP__SPI__sleep(void );



static inline uint8_t HplAtm128SpiP__SPI__read(void );
static inline void HplAtm128SpiP__SPI__write(uint8_t d);


void __vector_17(void ) __attribute((signal))   ;
#line 115
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled);
#line 130
static void HplAtm128SpiP__SPI__enableSpi(bool enabled);
#line 156
static inline void HplAtm128SpiP__SPI__setMasterBit(bool isMaster);
#line 169
static inline void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle);
#line 183
static inline void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing);
#line 200
static inline void HplAtm128SpiP__SPI__setClock(uint8_t v);
#line 213
static inline void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on);
# 39 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1____nesc_unnamed4371 {
#line 39
  FcfsResourceQueueC__1__NO_ENTRY = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[1U];
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void );




static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );



static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
#line 72
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id);
# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(
# 52 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x408b9030);
# 51 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(
# 52 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x408b9030);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x408b9c60);
# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x408b9c60);
# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void );
#line 60
static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void );
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x408ba5d8);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void );
# 69 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4372 {
#line 69
  SimpleArbiterP__0__grantedTask = 8U
};
#line 69
typedef int /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_sillytask_grantedTask[/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask];
#line 62
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4373 {
#line 62
  SimpleArbiterP__0__RES_IDLE = 0, SimpleArbiterP__0__RES_GRANTING = 1, SimpleArbiterP__0__RES_BUSY = 2
};
#line 63
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4374 {
#line 63
  SimpleArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId;



static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id);
#line 84
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(uint8_t id);
#line 97
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id);
#line 124
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse(void );
#line 148
static uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__isOwner(uint8_t id);






static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
#line 167
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplCC2420SpiP__SS__makeOutput(void );
#line 29
static void HplCC2420SpiP__SS__set(void );
static void HplCC2420SpiP__SS__clr(void );
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void HplCC2420SpiP__Resource__granted(void );
#line 110
static error_t HplCC2420SpiP__SubResource__release(void );
#line 87
static error_t HplCC2420SpiP__SubResource__immediateRequest(void );
#line 78
static error_t HplCC2420SpiP__SubResource__request(void );
#line 118
static bool HplCC2420SpiP__SubResource__isOwner(void );
# 51 "/opt/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP__Resource__request(void );




static inline error_t HplCC2420SpiP__Resource__immediateRequest(void );










static inline void HplCC2420SpiP__SubResource__granted(void );







static inline error_t HplCC2420SpiP__Resource__release(void );







static inline bool HplCC2420SpiP__Resource__isOwner(void );
# 51 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC__addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC__group = TOS_AM_GROUP;






static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );
#line 82
static inline am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
#line 95
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 81 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420TransmitP__RadioBackoff__requestInitialBackoff(message_t * msg);






static void CC2420TransmitP__RadioBackoff__requestCongestionBackoff(message_t * msg);
# 59 "/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static void CC2420TransmitP__PacketTimeStamp__clear(
#line 55
message_t * msg);
#line 67
static void CC2420TransmitP__PacketTimeStamp__set(
#line 62
message_t * msg, 




CC2420TransmitP__PacketTimeStamp__size_type value);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__STXONCCA__strobe(void );
# 43 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static error_t CC2420TransmitP__CaptureSFD__captureFallingEdge(void );
#line 55
static void CC2420TransmitP__CaptureSFD__disable(void );
#line 42
static error_t CC2420TransmitP__CaptureSFD__captureRisingEdge(void );
# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static CC2420TransmitP__BackoffTimer__size_type CC2420TransmitP__BackoffTimer__getNow(void );
#line 55
static void CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__BackoffTimer__size_type dt);






static void CC2420TransmitP__BackoffTimer__stop(void );
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420TransmitP__TXFIFO_RAM__write(uint8_t offset, uint8_t * data, uint8_t length);
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420TransmitP__TXCTRL__write(uint16_t data);
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP__CC2420Receive__sfd_dropped(void );
#line 49
static void CC2420TransmitP__CC2420Receive__sfd(uint32_t time);
# 73 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static void CC2420TransmitP__Send__sendDone(message_t * p_msg, error_t error);
# 31 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP__ChipSpiResource__abortRelease(void );







static error_t CC2420TransmitP__ChipSpiResource__attemptRelease(void );
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__SFLUSHTX__strobe(void );
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__CSN__makeOutput(void );
#line 29
static void CC2420TransmitP__CSN__set(void );
static void CC2420TransmitP__CSN__clr(void );
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420TransmitP__CC2420PacketBody__getHeader(message_t * msg);




static cc2420_metadata_t * CC2420TransmitP__CC2420PacketBody__getMetadata(message_t * msg);
# 47 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
static uint8_t CC2420TransmitP__PacketTimeSyncOffset__get(
#line 42
message_t * msg);
#line 39
static bool CC2420TransmitP__PacketTimeSyncOffset__isSet(
#line 35
message_t * msg);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420TransmitP__SpiResource__release(void );
#line 87
static error_t CC2420TransmitP__SpiResource__immediateRequest(void );
#line 78
static error_t CC2420TransmitP__SpiResource__request(void );
# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__CCA__makeInput(void );
#line 32
static bool CC2420TransmitP__CCA__get(void );
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__SNOP__strobe(void );
# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__SFD__makeInput(void );
#line 32
static bool CC2420TransmitP__SFD__get(void );
# 82 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static cc2420_status_t CC2420TransmitP__TXFIFO__write(uint8_t * data, uint8_t length);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__STXON__strobe(void );
# 99 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
#line 89
typedef enum CC2420TransmitP____nesc_unnamed4375 {
  CC2420TransmitP__S_STOPPED, 
  CC2420TransmitP__S_STARTED, 
  CC2420TransmitP__S_LOAD, 
  CC2420TransmitP__S_SAMPLE_CCA, 
  CC2420TransmitP__S_BEGIN_TRANSMIT, 
  CC2420TransmitP__S_SFD, 
  CC2420TransmitP__S_EFD, 
  CC2420TransmitP__S_ACK_WAIT, 
  CC2420TransmitP__S_CANCEL
} CC2420TransmitP__cc2420_transmit_state_t;





enum CC2420TransmitP____nesc_unnamed4376 {
  CC2420TransmitP__CC2420_ABORT_PERIOD = 320
};
#line 120
message_t * CC2420TransmitP__m_msg;

bool CC2420TransmitP__m_cca;

uint8_t CC2420TransmitP__m_tx_power;

CC2420TransmitP__cc2420_transmit_state_t CC2420TransmitP__m_state = CC2420TransmitP__S_STOPPED;

bool CC2420TransmitP__m_receiving = FALSE;

uint16_t CC2420TransmitP__m_prev_time;


bool CC2420TransmitP__sfdHigh;


bool CC2420TransmitP__abortSpiRelease;


int8_t CC2420TransmitP__totalCcaChecks;


uint16_t CC2420TransmitP__myInitialBackoff;


uint16_t CC2420TransmitP__myCongestionBackoff;



static inline error_t CC2420TransmitP__send(message_t * p_msg, bool cca);

static void CC2420TransmitP__loadTXFIFO(void );
static void CC2420TransmitP__attemptSend(void );
static void CC2420TransmitP__congestionBackoff(void );
static error_t CC2420TransmitP__acquireSpiResource(void );
static inline error_t CC2420TransmitP__releaseSpiResource(void );
static void CC2420TransmitP__signalDone(error_t err);



static inline error_t CC2420TransmitP__Init__init(void );







static inline error_t CC2420TransmitP__StdControl__start(void );










static inline error_t CC2420TransmitP__StdControl__stop(void );
#line 192
static inline error_t CC2420TransmitP__Send__send(message_t * p_msg, bool useCca);
#line 243
static inline void CC2420TransmitP__RadioBackoff__setInitialBackoff(uint16_t backoffTime);







static inline void CC2420TransmitP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime);







static __inline uint32_t CC2420TransmitP__getTime32(uint16_t time);
#line 278
static inline void CC2420TransmitP__CaptureSFD__captured(uint16_t time);
#line 375
static inline void CC2420TransmitP__ChipSpiResource__releasing(void );
#line 387
static inline void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t *ack_msg);
#line 414
static inline void CC2420TransmitP__SpiResource__granted(void );
#line 452
static inline void CC2420TransmitP__TXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);
#line 484
static inline void CC2420TransmitP__TXFIFO__readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);










static inline void CC2420TransmitP__BackoffTimer__fired(void );
#line 545
static inline error_t CC2420TransmitP__send(message_t * p_msg, bool cca);
#line 735
static void CC2420TransmitP__attemptSend(void );
#line 780
static void CC2420TransmitP__congestionBackoff(void );






static error_t CC2420TransmitP__acquireSpiResource(void );







static inline error_t CC2420TransmitP__releaseSpiResource(void );
#line 817
static void CC2420TransmitP__loadTXFIFO(void );
#line 842
static void CC2420TransmitP__signalDone(error_t err);
# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP__FIFO__get(void );
# 86 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static bool CC2420ReceiveP__CC2420Config__isAddressRecognitionEnabled(void );
#line 110
static bool CC2420ReceiveP__CC2420Config__isAutoAckEnabled(void );
#line 105
static bool CC2420ReceiveP__CC2420Config__isHwAutoAckDefault(void );
#line 64
static uint16_t CC2420ReceiveP__CC2420Config__getShortAddr(void );
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t CC2420ReceiveP__receiveDone_task__postTask(void );
# 59 "/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static void CC2420ReceiveP__PacketTimeStamp__clear(
#line 55
message_t * msg);
#line 67
static void CC2420ReceiveP__PacketTimeStamp__set(
#line 62
message_t * msg, 




CC2420ReceiveP__PacketTimeStamp__size_type value);
# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP__FIFOP__get(void );
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP__CC2420Receive__receive(uint8_t type, message_t * message);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP__SACK__strobe(void );
# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420ReceiveP__CSN__set(void );
static void CC2420ReceiveP__CSN__clr(void );
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420ReceiveP__CC2420PacketBody__getHeader(message_t * msg);




static cc2420_metadata_t * CC2420ReceiveP__CC2420PacketBody__getMetadata(message_t * msg);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ReceiveP__Receive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420ReceiveP__SpiResource__release(void );
#line 87
static error_t CC2420ReceiveP__SpiResource__immediateRequest(void );
#line 78
static error_t CC2420ReceiveP__SpiResource__request(void );
#line 118
static bool CC2420ReceiveP__SpiResource__isOwner(void );
# 62 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420ReceiveP__RXFIFO__continueRead(uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420ReceiveP__RXFIFO__beginRead(uint8_t * data, uint8_t length);
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ReceiveP__InterruptFIFOP__disable(void );
#line 43
static error_t CC2420ReceiveP__InterruptFIFOP__enableFallingEdge(void );
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP__SFLUSHRX__strobe(void );
# 148 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
enum CC2420ReceiveP____nesc_unnamed4377 {
#line 148
  CC2420ReceiveP__receiveDone_task = 9U
};
#line 148
typedef int CC2420ReceiveP____nesc_sillytask_receiveDone_task[CC2420ReceiveP__receiveDone_task];
#line 89
#line 81
typedef enum CC2420ReceiveP____nesc_unnamed4378 {
  CC2420ReceiveP__S_STOPPED, 
  CC2420ReceiveP__S_STARTED, 
  CC2420ReceiveP__S_RX_LENGTH, 
  CC2420ReceiveP__S_RX_DEC, 
  CC2420ReceiveP__S_RX_DEC_WAIT, 
  CC2420ReceiveP__S_RX_FCF, 
  CC2420ReceiveP__S_RX_PAYLOAD
} CC2420ReceiveP__cc2420_receive_state_t;

enum CC2420ReceiveP____nesc_unnamed4379 {
  CC2420ReceiveP__RXFIFO_SIZE = 128, 
  CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE = 8, 
  CC2420ReceiveP__SACK_HEADER_LENGTH = 7
};

uint32_t CC2420ReceiveP__m_timestamp_queue[CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE];

uint8_t CC2420ReceiveP__m_timestamp_head;

uint8_t CC2420ReceiveP__m_timestamp_size;





uint8_t CC2420ReceiveP__m_missed_packets;



bool CC2420ReceiveP__receivingPacket;


uint8_t CC2420ReceiveP__rxFrameLength;

uint8_t CC2420ReceiveP__m_bytes_left;

message_t * CC2420ReceiveP__m_p_rx_buf;

message_t CC2420ReceiveP__m_rx_buf;
#line 137
CC2420ReceiveP__cc2420_receive_state_t CC2420ReceiveP__m_state;



static void CC2420ReceiveP__reset_state(void );
static void CC2420ReceiveP__beginReceive(void );
static void CC2420ReceiveP__receive(void );
static void CC2420ReceiveP__waitForNextPacket(void );
static void CC2420ReceiveP__flush(void );
static inline bool CC2420ReceiveP__passesAddressCheck(message_t * msg);




static inline error_t CC2420ReceiveP__Init__init(void );





static inline error_t CC2420ReceiveP__StdControl__start(void );
#line 171
static inline error_t CC2420ReceiveP__StdControl__stop(void );
#line 186
static inline void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time);








static inline void CC2420ReceiveP__CC2420Receive__sfd_dropped(void );
#line 212
static inline void CC2420ReceiveP__InterruptFIFOP__fired(void );
#line 508
static inline void CC2420ReceiveP__SpiResource__granted(void );
#line 525
static inline void CC2420ReceiveP__RXFIFO__readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error);
#line 663
static inline void CC2420ReceiveP__RXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error);







static inline void CC2420ReceiveP__receiveDone_task__runTask(void );
#line 704
static inline void CC2420ReceiveP__CC2420Config__syncDone(error_t error);






static void CC2420ReceiveP__beginReceive(void );
#line 728
static void CC2420ReceiveP__flush(void );
#line 754
static void CC2420ReceiveP__receive(void );









static void CC2420ReceiveP__waitForNextPacket(void );
#line 808
static void CC2420ReceiveP__reset_state(void );










static inline bool CC2420ReceiveP__passesAddressCheck(message_t *msg);
# 65 "/opt/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline error_t CC2420PacketP__Acks__requestAck(message_t *p_msg);









static inline bool CC2420PacketP__Acks__wasAcked(message_t *p_msg);
#line 94
static inline uint8_t CC2420PacketP__CC2420Packet__getLqi(message_t *p_msg);



static uint8_t CC2420PacketP__CC2420Packet__getNetwork(message_t *p_msg);







static void CC2420PacketP__CC2420Packet__setNetwork(message_t *p_msg, uint8_t networkId);







static inline cc2420_header_t * CC2420PacketP__CC2420PacketBody__getHeader(message_t * msg);



static inline cc2420_metadata_t *CC2420PacketP__CC2420PacketBody__getMetadata(message_t *msg);



static inline bool CC2420PacketP__LinkPacketMetadata__highChannelQuality(message_t *msg);
#line 137
static void CC2420PacketP__PacketTimeStamp32khz__clear(message_t *msg);





static inline void CC2420PacketP__PacketTimeStamp32khz__set(message_t *msg, uint32_t value);
#line 176
static inline bool CC2420PacketP__PacketTimeSyncOffset__isSet(message_t *msg);








static inline uint8_t CC2420PacketP__PacketTimeSyncOffset__get(message_t *msg);
# 47 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 44 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void );
#line 37
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired(void );
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow(void );
# 44 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy(void );
#line 32
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous(void );
# 39 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start(void );
# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get(void );
# 38 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0;
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base;



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0____nesc_unnamed4380 {
  Atm128AlarmAsyncP__0__MINDT = 2, 
  Atm128AlarmAsyncP__0__MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void );
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void );
#line 149
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void );
#line 161
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void );
#line 204
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void );
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 92
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 105
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 62
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 63 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4381 {
#line 63
  AlarmToTimerC__0__fired = 10U
};
#line 63
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 44
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 60
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 82
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 118
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40ad5548);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4382 {
#line 60
  VirtualizeTimerC__0__updateFromTimer = 11U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4383 {

  VirtualizeTimerC__0__NUM_TIMERS = 5, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4384 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 89
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 128
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);




static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num);
#line 178
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num);




static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__gett0(uint8_t num);




static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getdt(uint8_t num);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 47 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 41 "/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static inline error_t RandomMlcgC__Init__init(void );
#line 58
static uint32_t RandomMlcgC__Random__rand32(void );
#line 78
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t UniqueSendP__SubSend__send(
#line 56
message_t * msg, 







uint8_t len);
#line 101
static uint8_t UniqueSendP__SubSend__maxPayloadLength(void );
#line 89
static void UniqueSendP__Send__sendDone(
#line 85
message_t * msg, 



error_t error);
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t UniqueSendP__Random__rand16(void );
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * UniqueSendP__CC2420PacketBody__getHeader(message_t * msg);
# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static void UniqueSendP__State__toIdle(void );
#line 45
static error_t UniqueSendP__State__requestState(uint8_t reqState);
# 54 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
uint8_t UniqueSendP__localSendId;

enum UniqueSendP____nesc_unnamed4385 {
  UniqueSendP__S_IDLE, 
  UniqueSendP__S_SENDING
};


static inline error_t UniqueSendP__Init__init(void );
#line 75
static error_t UniqueSendP__Send__send(message_t *msg, uint8_t len);
#line 95
static inline uint8_t UniqueSendP__Send__maxPayloadLength(void );








static inline void UniqueSendP__SubSend__sendDone(message_t *msg, error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP__Receive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * UniqueReceiveP__CC2420PacketBody__getHeader(message_t * msg);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP__DuplicateReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 59 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
#line 56
struct UniqueReceiveP____nesc_unnamed4386 {
  am_addr_t source;
  uint8_t dsn;
} UniqueReceiveP__receivedMessages[4];

uint8_t UniqueReceiveP__writeIndex = 0;


uint8_t UniqueReceiveP__recycleSourceElement;

enum UniqueReceiveP____nesc_unnamed4387 {
  UniqueReceiveP__INVALID_ELEMENT = 0xFF
};


static inline error_t UniqueReceiveP__Init__init(void );









static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn);
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn);


static inline message_t *UniqueReceiveP__SubReceive__receive(message_t *msg, void *payload, 
uint8_t len);
#line 111
static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn);
#line 137
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn);
#line 158
static inline message_t *UniqueReceiveP__DuplicateReceive__default__receive(message_t *msg, void *payload, uint8_t len);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t CC2420TinyosNetworkP__SubSend__send(
#line 56
message_t * msg, 







uint8_t len);
#line 101
static uint8_t CC2420TinyosNetworkP__SubSend__maxPayloadLength(void );
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t CC2420TinyosNetworkP__grantTask__postTask(void );
# 77 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Packet.nc"
static void CC2420TinyosNetworkP__CC2420Packet__setNetwork(message_t *p_msg, uint8_t networkId);
#line 75
static uint8_t CC2420TinyosNetworkP__CC2420Packet__getNetwork(message_t *p_msg);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__ActiveSend__sendDone(
#line 85
message_t * msg, 



error_t error);
# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t CC2420TinyosNetworkP__Queue__enqueue(resource_client_id_t id);
#line 43
static bool CC2420TinyosNetworkP__Queue__isEmpty(void );
#line 60
static resource_client_id_t CC2420TinyosNetworkP__Queue__dequeue(void );
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420TinyosNetworkP__CC2420PacketBody__getHeader(message_t * msg);




static cc2420_metadata_t * CC2420TinyosNetworkP__CC2420PacketBody__getMetadata(message_t * msg);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420TinyosNetworkP__BareReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420TinyosNetworkP__Resource__granted(
# 46 "/opt/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x40b71628);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__BareSend__sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420TinyosNetworkP__ActiveReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 147 "/opt/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
enum CC2420TinyosNetworkP____nesc_unnamed4388 {
#line 147
  CC2420TinyosNetworkP__grantTask = 12U
};
#line 147
typedef int CC2420TinyosNetworkP____nesc_sillytask_grantTask[CC2420TinyosNetworkP__grantTask];
#line 66
enum CC2420TinyosNetworkP____nesc_unnamed4389 {
  CC2420TinyosNetworkP__OWNER_NONE = 0xff, 
  CC2420TinyosNetworkP__TINYOS_N_NETWORKS = 0U
};

uint8_t CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__OWNER_NONE;
#line 71
uint8_t CC2420TinyosNetworkP__next_owner;

static inline error_t CC2420TinyosNetworkP__ActiveSend__send(message_t *msg, uint8_t len);








static inline uint8_t CC2420TinyosNetworkP__ActiveSend__maxPayloadLength(void );



static inline void *CC2420TinyosNetworkP__ActiveSend__getPayload(message_t *msg, uint8_t len);
#line 117
static inline void CC2420TinyosNetworkP__SubSend__sendDone(message_t *msg, error_t error);








static inline message_t *CC2420TinyosNetworkP__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 147
static inline void CC2420TinyosNetworkP__grantTask__runTask(void );
#line 166
static inline error_t CC2420TinyosNetworkP__Resource__request(uint8_t id);
#line 182
static inline error_t CC2420TinyosNetworkP__Resource__immediateRequest(uint8_t id);
#line 196
static inline error_t CC2420TinyosNetworkP__Resource__release(uint8_t id);
#line 208
static inline message_t *CC2420TinyosNetworkP__BareReceive__default__receive(message_t *msg, void *payload, uint8_t len);


static inline void CC2420TinyosNetworkP__BareSend__default__sendDone(message_t *msg, error_t error);








static inline void CC2420TinyosNetworkP__Resource__default__granted(uint8_t client);
# 39 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0____nesc_unnamed4390 {
#line 39
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[0];
uint8_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init(void );




static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );



static inline bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
#line 72
static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
# 47 "/opt/tinyos-2.x/tos/chips/cc2420/lpl/DummyLplP.nc"
static inline void DummyLplP__LowPowerListening__setLocalWakeupInterval(uint16_t intervalMs);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t CC2420ActiveMessageP__SubSend__send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

CC2420ActiveMessageP__SubSend__getPayload(
#line 111
message_t * msg, 


uint8_t len);
#line 101
static uint8_t CC2420ActiveMessageP__SubSend__maxPayloadLength(void );
# 70 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static uint16_t CC2420ActiveMessageP__CC2420Config__getPanAddr(void );
# 95 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP__RadioBackoff__requestCca(
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40b9f4b8, 
# 95 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
#line 81
static void CC2420ActiveMessageP__RadioBackoff__requestInitialBackoff(
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40b9f4b8, 
# 81 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);






static void CC2420ActiveMessageP__RadioBackoff__requestCongestionBackoff(
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40b9f4b8, 
# 88 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
# 59 "/opt/tinyos-2.x/tos/interfaces/SendNotifier.nc"
static void CC2420ActiveMessageP__SendNotifier__aboutToSend(
# 44 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40ba0e20, 
# 59 "/opt/tinyos-2.x/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void CC2420ActiveMessageP__AMSend__sendDone(
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40ba33f8, 
# 92 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ActiveMessageP__Snoop__receive(
# 41 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40ba1490, 
# 60 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t CC2420ActiveMessageP__ActiveMessageAddress__amAddress(void );
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420ActiveMessageP__CC2420PacketBody__getHeader(message_t * msg);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ActiveMessageP__Receive__receive(
# 40 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40ba3db8, 
# 60 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420ActiveMessageP__RadioResource__release(void );
#line 87
static error_t CC2420ActiveMessageP__RadioResource__immediateRequest(void );
#line 78
static error_t CC2420ActiveMessageP__RadioResource__request(void );
# 62 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
uint16_t CC2420ActiveMessageP__pending_length;
message_t *CC2420ActiveMessageP__pending_message = (void *)0;

static void CC2420ActiveMessageP__RadioResource__granted(void );
#line 78
static error_t CC2420ActiveMessageP__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len);
#line 113
static uint8_t CC2420ActiveMessageP__AMSend__maxPayloadLength(am_id_t id);



static void *CC2420ActiveMessageP__AMSend__getPayload(am_id_t id, message_t *m, uint8_t len);




static inline am_addr_t CC2420ActiveMessageP__AMPacket__address(void );



static am_addr_t CC2420ActiveMessageP__AMPacket__destination(message_t *amsg);




static am_addr_t CC2420ActiveMessageP__AMPacket__source(message_t *amsg);




static inline void CC2420ActiveMessageP__AMPacket__setDestination(message_t *amsg, am_addr_t addr);









static inline bool CC2420ActiveMessageP__AMPacket__isForMe(message_t *amsg);




static am_id_t CC2420ActiveMessageP__AMPacket__type(message_t *amsg);




static void CC2420ActiveMessageP__AMPacket__setType(message_t *amsg, am_id_t type);
#line 181
static uint8_t CC2420ActiveMessageP__Packet__payloadLength(message_t *msg);



static void CC2420ActiveMessageP__Packet__setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t CC2420ActiveMessageP__Packet__maxPayloadLength(void );



static inline void *CC2420ActiveMessageP__Packet__getPayload(message_t *msg, uint8_t len);





static inline void CC2420ActiveMessageP__SubSend__sendDone(message_t *msg, error_t result);






static inline message_t *CC2420ActiveMessageP__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 222
static inline void CC2420ActiveMessageP__CC2420Config__syncDone(error_t error);





static inline void CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(message_t *msg);




static inline void CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(message_t *msg);



static inline void CC2420ActiveMessageP__SubBackoff__requestCca(message_t *msg);
#line 266
static inline message_t *CC2420ActiveMessageP__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t *CC2420ActiveMessageP__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);







static inline void CC2420ActiveMessageP__SendNotifier__default__aboutToSend(am_id_t amId, am_addr_t addr, message_t *msg);

static inline void CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(am_id_t id, 
message_t *msg);


static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(am_id_t id, 
message_t *msg);


static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCca(am_id_t id, 
message_t *msg);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(
#line 56
message_t * msg, 







uint8_t len);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(
# 36 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40c18200, 
# 92 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(
# 37 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40c18bc0, 
# 60 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 49 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg);







static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
#line 86
static inline void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__getPayload(am_id_t id, message_t *m, uint8_t len);



static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result);







static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len);








static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );



static inline void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len);
#line 137
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg);









static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(message_t *amsg, am_addr_t addr);
#line 161
static inline am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(message_t *amsg, am_id_t type);
# 92 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void SerialP__SplitControl__startDone(error_t error);
#line 117
static void SerialP__SplitControl__stopDone(error_t error);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP__stopDoneTask__postTask(void );
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t SerialP__SerialControl__start(void );









static error_t SerialP__SerialControl__stop(void );
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP__RunTx__postTask(void );
# 38 "/opt/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flush(void );
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP__startDoneTask__postTask(void );
# 45 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static error_t SerialP__SerialFrameComm__putDelimiter(void );
#line 68
static void SerialP__SerialFrameComm__resetReceive(void );
#line 54
static error_t SerialP__SerialFrameComm__putData(uint8_t data);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP__defaultSerialFlushTask__postTask(void );
# 70 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static uint8_t SerialP__SendBytePacket__nextByte(void );









static void SerialP__SendBytePacket__sendCompleted(error_t error);
# 51 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
static error_t SerialP__ReceiveBytePacket__startPacket(void );






static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data);










static void SerialP__ReceiveBytePacket__endPacket(error_t result);
# 189 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
enum SerialP____nesc_unnamed4391 {
#line 189
  SerialP__RunTx = 13U
};
#line 189
typedef int SerialP____nesc_sillytask_RunTx[SerialP__RunTx];
#line 320
enum SerialP____nesc_unnamed4392 {
#line 320
  SerialP__startDoneTask = 14U
};
#line 320
typedef int SerialP____nesc_sillytask_startDoneTask[SerialP__startDoneTask];





enum SerialP____nesc_unnamed4393 {
#line 326
  SerialP__stopDoneTask = 15U
};
#line 326
typedef int SerialP____nesc_sillytask_stopDoneTask[SerialP__stopDoneTask];








enum SerialP____nesc_unnamed4394 {
#line 335
  SerialP__defaultSerialFlushTask = 16U
};
#line 335
typedef int SerialP____nesc_sillytask_defaultSerialFlushTask[SerialP__defaultSerialFlushTask];
#line 79
enum SerialP____nesc_unnamed4395 {
  SerialP__RX_DATA_BUFFER_SIZE = 2, 
  SerialP__TX_DATA_BUFFER_SIZE = 4, 
  SerialP__SERIAL_MTU = 255, 
  SerialP__SERIAL_VERSION = 1, 
  SerialP__ACK_QUEUE_SIZE = 5
};

enum SerialP____nesc_unnamed4396 {
  SerialP__RXSTATE_NOSYNC, 
  SerialP__RXSTATE_PROTO, 
  SerialP__RXSTATE_TOKEN, 
  SerialP__RXSTATE_INFO, 
  SerialP__RXSTATE_INACTIVE
};

enum SerialP____nesc_unnamed4397 {
  SerialP__TXSTATE_IDLE, 
  SerialP__TXSTATE_PROTO, 
  SerialP__TXSTATE_SEQNO, 
  SerialP__TXSTATE_INFO, 
  SerialP__TXSTATE_FCS1, 
  SerialP__TXSTATE_FCS2, 
  SerialP__TXSTATE_ENDFLAG, 
  SerialP__TXSTATE_ENDWAIT, 
  SerialP__TXSTATE_FINISH, 
  SerialP__TXSTATE_ERROR, 
  SerialP__TXSTATE_INACTIVE
};





#line 109
typedef enum SerialP____nesc_unnamed4398 {
  SerialP__BUFFER_AVAILABLE, 
  SerialP__BUFFER_FILLING, 
  SerialP__BUFFER_COMPLETE
} SerialP__tx_data_buffer_states_t;

enum SerialP____nesc_unnamed4399 {
  SerialP__TX_ACK_INDEX = 0, 
  SerialP__TX_DATA_INDEX = 1, 
  SerialP__TX_BUFFER_COUNT = 2
};






#line 122
typedef struct SerialP____nesc_unnamed4400 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__RX_DATA_BUFFER_SIZE + 1];
} SerialP__rx_buf_t;




#line 128
typedef struct SerialP____nesc_unnamed4401 {
  uint8_t state;
  uint8_t buf;
} SerialP__tx_buf_t;





#line 133
typedef struct SerialP____nesc_unnamed4402 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__ACK_QUEUE_SIZE + 1];
} SerialP__ack_queue_t;



SerialP__rx_buf_t SerialP__rxBuf;
SerialP__tx_buf_t SerialP__txBuf[SerialP__TX_BUFFER_COUNT];



uint8_t SerialP__rxState;
uint8_t SerialP__rxByteCnt;
uint8_t SerialP__rxProto;
uint8_t SerialP__rxSeqno;
uint16_t SerialP__rxCRC;



uint8_t SerialP__txState;
uint8_t SerialP__txByteCnt;
uint8_t SerialP__txProto;
uint8_t SerialP__txSeqno;
uint16_t SerialP__txCRC;
uint8_t SerialP__txPending;
uint8_t SerialP__txIndex;


SerialP__ack_queue_t SerialP__ackQ;

bool SerialP__offPending = FALSE;



static __inline void SerialP__txInit(void );
static __inline void SerialP__rxInit(void );
static __inline void SerialP__ackInit(void );

static __inline bool SerialP__ack_queue_is_full(void );
static __inline bool SerialP__ack_queue_is_empty(void );
static __inline void SerialP__ack_queue_push(uint8_t token);
static __inline uint8_t SerialP__ack_queue_top(void );
static inline uint8_t SerialP__ack_queue_pop(void );




static __inline void SerialP__rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP__rx_buffer_top(void );
static __inline uint8_t SerialP__rx_buffer_pop(void );
static __inline uint16_t SerialP__rx_current_crc(void );

static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP__MaybeScheduleTx(void );




static __inline void SerialP__txInit(void );
#line 205
static __inline void SerialP__rxInit(void );








static __inline void SerialP__ackInit(void );



static inline error_t SerialP__Init__init(void );
#line 232
static __inline bool SerialP__ack_queue_is_full(void );









static __inline bool SerialP__ack_queue_is_empty(void );





static __inline void SerialP__ack_queue_push(uint8_t token);









static __inline uint8_t SerialP__ack_queue_top(void );









static inline uint8_t SerialP__ack_queue_pop(void );
#line 295
static __inline void SerialP__rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP__rx_buffer_top(void );



static __inline uint8_t SerialP__rx_buffer_pop(void );





static __inline uint16_t SerialP__rx_current_crc(void );










static inline void SerialP__startDoneTask__runTask(void );





static inline void SerialP__stopDoneTask__runTask(void );



static inline void SerialP__SerialFlush__flushDone(void );




static inline void SerialP__defaultSerialFlushTask__runTask(void );


static inline void SerialP__SerialFlush__default__flush(void );



static inline error_t SerialP__SplitControl__start(void );




static void SerialP__testOff(void );
#line 384
static inline void SerialP__SerialFrameComm__delimiterReceived(void );


static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data);



static inline bool SerialP__valid_rx_proto(uint8_t proto);










static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
#line 502
static void SerialP__MaybeScheduleTx(void );










static inline error_t SerialP__SendBytePacket__completeSend(void );








static inline error_t SerialP__SendBytePacket__startSend(uint8_t b);
#line 539
static inline void SerialP__RunTx__runTask(void );
#line 642
static inline void SerialP__SerialFrameComm__putDone(void );
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void );
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(
# 40 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40c9d560, 
# 85 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(
# 39 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40ca0e50, 
# 60 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
# 43 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40cca088, 
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
# 43 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40cca088);
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
# 43 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40cca088, 
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 60 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void );
#line 51
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte);
# 147 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4403 {
#line 147
  SerialDispatcherP__0__signalSendDone = 17U
};
#line 147
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone];
#line 264
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4404 {
#line 264
  SerialDispatcherP__0__receiveTask = 18U
};
#line 264
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask];
#line 55
#line 51
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4405 {
  SerialDispatcherP__0__SEND_STATE_IDLE = 0, 
  SerialDispatcherP__0__SEND_STATE_BEGIN = 1, 
  SerialDispatcherP__0__SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4406 {
  SerialDispatcherP__0__RECV_STATE_IDLE = 0, 
  SerialDispatcherP__0__RECV_STATE_BEGIN = 1, 
  SerialDispatcherP__0__RECV_STATE_DATA = 2
};






#line 63
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4407 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[2];
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[1] };




uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t * )&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0];

uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = 0;
error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = 0;

static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len);
#line 147
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
#line 167
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );
#line 183
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void );



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void );








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void );




static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );
#line 233
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b);
#line 264
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
#line 285
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
#line 347
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static error_t HdlcTranslateC__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 83 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data);





static void HdlcTranslateC__SerialFrameComm__putDone(void );
#line 74
static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void );
# 47 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
#line 44
typedef struct HdlcTranslateC____nesc_unnamed4408 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC__HdlcState;


HdlcTranslateC__HdlcState HdlcTranslateC__state = { 0, 0 };
uint8_t HdlcTranslateC__txTemp;
uint8_t HdlcTranslateC__m_data;


static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void );





static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data);
#line 86
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );





static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
#line 104
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error);










static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void );
# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte);
#line 99
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 42 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void );
#line 40
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void );
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void );

static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void );


static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data);
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void );
# 62 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len;
#line 62
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len;
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;
#line 63
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos;
#line 64
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr;

static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );







static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );
#line 93
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
#line 133
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 155
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len);
#line 173
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
#line 216
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart0__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart0__txDone(void );

static void HplAtm128UartP__HplUart1__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__txDone(void );
# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void HplAtm128UartP__McuPowerState__update(void );
# 87 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0Init__init(void );
#line 107
static inline error_t HplAtm128UartP__Uart0TxControl__start(void );





static inline error_t HplAtm128UartP__Uart0TxControl__stop(void );





static inline error_t HplAtm128UartP__Uart0RxControl__start(void );





static inline error_t HplAtm128UartP__Uart0RxControl__stop(void );





static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void );





static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void );
#line 164
static void HplAtm128UartP__HplUart0__tx(uint8_t data);






void __vector_18(void ) __attribute((signal))   ;





void __vector_20(void ) __attribute((interrupt))   ;



static inline error_t HplAtm128UartP__Uart1Init__init(void );
#line 265
void __vector_30(void ) __attribute((signal))   ;




void __vector_32(void ) __attribute((interrupt))   ;





static inline void HplAtm128UartP__HplUart1__default__txDone(void );
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P__CompareA__fired(void );
# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer3P__Capture__captured(HplAtm128Timer3P__Capture__size_type t);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P__CompareB__fired(void );
#line 49
static void HplAtm128Timer3P__CompareC__fired(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer3P__Timer__overflow(void );
# 47 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline uint16_t HplAtm128Timer3P__Timer__get(void );


static inline void HplAtm128Timer3P__Timer__set(uint16_t t);








static inline void HplAtm128Timer3P__Timer__setScale(uint8_t s);









static inline Atm128TimerCtrlCapture_t HplAtm128Timer3P__TimerCtrl__getCtrlCapture(void );









static inline uint16_t HplAtm128Timer3P__TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x);






static inline void HplAtm128Timer3P__TimerCtrl__setCtrlCapture(Atm128_TCCR3B_t x);
#line 127
static inline void HplAtm128Timer3P__Timer__start(void );
#line 188
static inline void HplAtm128Timer3P__CompareA__default__fired(void );
void __vector_26(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer3P__CompareB__default__fired(void );
void __vector_27(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer3P__CompareC__default__fired(void );
void __vector_28(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer3P__Capture__default__captured(uint16_t time);
void __vector_25(void ) __attribute((interrupt))   ;



void __vector_29(void ) __attribute((interrupt))   ;
# 95 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__setScale(uint8_t scale);
#line 58
static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__set(/*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__timer_size t);










static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__start(void );
# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC__1__Init__init(void );








static inline void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__overflow(void );
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterThree16C.NCounter*/Atm128CounterC__1__Counter__overflow(void );
# 56 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterThree16C.NCounter*/Atm128CounterC__1__Timer__overflow(void );
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC__1__Counter__overflow(void );
# 56 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*CounterMicro32C.Transform32*/TransformCounterC__1__upper_count_type /*CounterMicro32C.Transform32*/TransformCounterC__1__m_upper;

enum /*CounterMicro32C.Transform32*/TransformCounterC__1____nesc_unnamed4409 {

  TransformCounterC__1__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__1__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__1__from_size_type ) - /*CounterMicro32C.Transform32*/TransformCounterC__1__LOW_SHIFT_RIGHT, 
  TransformCounterC__1__NUM_UPPER_BITS = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__1__to_size_type ) - 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__1__from_size_type ) + 0, 



  TransformCounterC__1__OVERFLOW_MASK = /*CounterMicro32C.Transform32*/TransformCounterC__1__NUM_UPPER_BITS ? ((/*CounterMicro32C.Transform32*/TransformCounterC__1__upper_count_type )2 << (/*CounterMicro32C.Transform32*/TransformCounterC__1__NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 122
static inline void /*CounterMicro32C.Transform32*/TransformCounterC__1__CounterFrom__overflow(void );
# 40 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );


static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);


static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t DisseminationEngineImplP__AMSend__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

DisseminationEngineImplP__AMSend__getPayload(
#line 121
message_t * msg, 


uint8_t len);
#line 112
static uint8_t DisseminationEngineImplP__AMSend__maxPayloadLength(void );
# 77 "/opt/tinyos-2.x/tos/lib/net/TrickleTimer.nc"
static void DisseminationEngineImplP__TrickleTimer__incrementCounter(
# 50 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40e33e10);
# 72 "/opt/tinyos-2.x/tos/lib/net/TrickleTimer.nc"
static void DisseminationEngineImplP__TrickleTimer__reset(
# 50 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40e33e10);
# 60 "/opt/tinyos-2.x/tos/lib/net/TrickleTimer.nc"
static error_t DisseminationEngineImplP__TrickleTimer__start(
# 50 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40e33e10);
# 48 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationCache.nc"
static void DisseminationEngineImplP__DisseminationCache__storeData(
# 49 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40e33320, 
# 48 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationCache.nc"
void * data, uint8_t size, uint32_t seqno);
static uint32_t DisseminationEngineImplP__DisseminationCache__requestSeqno(
# 49 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40e33320);
# 47 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationCache.nc"
static void *DisseminationEngineImplP__DisseminationCache__requestData(
# 49 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40e33320, 
# 47 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationCache.nc"
uint8_t *size);
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t DisseminationEngineImplP__DisseminatorControl__start(
# 51 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40e318f8);
#line 64
enum DisseminationEngineImplP____nesc_unnamed4410 {
#line 64
  DisseminationEngineImplP__NUM_DISSEMINATORS = 1U
};
message_t DisseminationEngineImplP__m_buf;
bool DisseminationEngineImplP__m_running;
bool DisseminationEngineImplP__m_bufBusy;


static void DisseminationEngineImplP__sendObject(uint16_t key);

static inline error_t DisseminationEngineImplP__StdControl__start(void );
#line 91
static inline error_t DisseminationEngineImplP__DisseminationCache__start(uint16_t key);










static inline void DisseminationEngineImplP__DisseminationCache__newData(uint16_t key);







static inline void DisseminationEngineImplP__TrickleTimer__fired(uint16_t key);
#line 130
static void DisseminationEngineImplP__sendObject(uint16_t key);
#line 155
static inline void DisseminationEngineImplP__ProbeAMSend__sendDone(message_t *msg, error_t error);



static inline void DisseminationEngineImplP__AMSend__sendDone(message_t *msg, error_t error);



static inline message_t *DisseminationEngineImplP__Receive__receive(message_t *msg, 
void *payload, 
uint8_t len);
#line 219
static inline message_t *DisseminationEngineImplP__ProbeReceive__receive(message_t *msg, 
void *payload, 
uint8_t len);
#line 236
static inline void *
DisseminationEngineImplP__DisseminationCache__default__requestData(uint16_t key, uint8_t *size);


static inline 
#line 239
void 
DisseminationEngineImplP__DisseminationCache__default__storeData(uint16_t key, void *data, 
uint8_t size, 
uint32_t seqno);


static inline 
#line 244
uint32_t 
DisseminationEngineImplP__DisseminationCache__default__requestSeqno(uint16_t key);

static inline error_t DisseminationEngineImplP__TrickleTimer__default__start(uint16_t key);



static inline void DisseminationEngineImplP__TrickleTimer__default__reset(uint16_t key);

static inline void DisseminationEngineImplP__TrickleTimer__default__incrementCounter(uint16_t key);

static inline error_t DisseminationEngineImplP__DisseminatorControl__default__start(uint16_t id);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

/*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__getPayload(
#line 111
message_t * msg, 


uint8_t len);
#line 101
static uint8_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__maxPayloadLength(void );
# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static void /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err);



static inline uint8_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__maxPayloadLength(void );



static inline void */*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__getPayload(message_t *m, uint8_t len);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(
# 40 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40e83650, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__getPayload(
# 40 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40e83650, 
# 121 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
#line 112
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__maxPayloadLength(
# 40 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40e83650);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(
# 38 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40e52ba0, 
# 85 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(
#line 63
message_t * msg);
#line 83
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(
#line 63
message_t * amsg);
#line 136
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(
#line 132
message_t * amsg);
# 118 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4411 {
#line 118
  AMQueueImplP__0__CancelTask = 19U
};
#line 118
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask];
#line 161
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4412 {
#line 161
  AMQueueImplP__0__errorTask = 20U
};
#line 161
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask];
#line 49
#line 47
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4413 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 4;
/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[4];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[4 / 8 + 1];

static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void );
#line 82
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 118
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
#line 155
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );




static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );
#line 181
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
#line 199
static inline uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__maxPayloadLength(uint8_t id);



static inline void */*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(uint8_t id, message_t *m, uint8_t len);



static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*DisseminationEngineP.DisseminationProbeSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(
#line 92
message_t * msg, 






error_t error);
# 57 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*DisseminationEngineP.DisseminationProbeSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(message_t *m, error_t err);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__changedTask__postTask(void );
# 50 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationCache.nc"
static void /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__newData(void );
#line 45
static error_t /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__start(void );
# 61 "/opt/tinyos-2.x/tos/lib/net/DisseminationValue.nc"
static void /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationValue__changed(void );
# 62 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminatorP.nc"
enum /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0____nesc_unnamed4414 {
#line 62
  DisseminatorP__0__changedTask = 21U
};
#line 62
typedef int /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0____nesc_sillytask_changedTask[/*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__changedTask];
#line 55
/*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__t /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__valueCache;
bool /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__m_running;



uint32_t /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__seqno = DISSEMINATION_SEQNO_UNKNOWN;

static inline void /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__changedTask__runTask(void );



static inline error_t /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__StdControl__start(void );
#line 88
static inline void /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationUpdate__change(/*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__t *newVal);
#line 101
static inline void */*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__requestData(uint8_t *size);




static void /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__storeData(void *data, uint8_t size, 
uint32_t newSeqno);









static inline uint32_t /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__requestSeqno(void );



static inline void /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationValue__default__changed(void );
# 34 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__clearAll(void );
#line 58
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__clear(uint16_t bitnum);
#line 46
static bool /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__get(uint16_t bitnum);





static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__set(uint16_t bitnum);
#line 34
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__clearAll(void );
#line 58
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__clear(uint16_t bitnum);
#line 46
static bool /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__get(uint16_t bitnum);





static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__set(uint16_t bitnum);
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Random__rand16(void );
# 82 "/opt/tinyos-2.x/tos/lib/net/TrickleTimer.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__fired(
# 50 "/opt/tinyos-2.x/tos/lib/net/TrickleTimerImplP.nc"
uint8_t arg_0x40ee3148);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask__postTask(void );
# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__getNow(void );
#line 140
static uint32_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__getdt(void );
#line 133
static uint32_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__gett0(void );
#line 62
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__startOneShot(uint32_t dt);




static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__stop(void );
# 146 "/opt/tinyos-2.x/tos/lib/net/TrickleTimerImplP.nc"
enum /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0____nesc_unnamed4415 {
#line 146
  TrickleTimerImplP__0__timerTask = 22U
};
#line 146
typedef int /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0____nesc_sillytask_timerTask[/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask];
#line 67
#line 62
typedef struct /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0____nesc_unnamed4416 {
  uint16_t period;
  uint32_t time;
  uint32_t remainder;
  uint8_t count;
} /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickle_t;

/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickle_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[1U];

static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__adjustTimer(void );
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__generateTime(uint8_t id);

static inline error_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Init__init(void );
#line 92
static inline error_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__start(uint8_t id);
#line 122
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__reset(uint8_t id);
#line 142
static inline void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__incrementCounter(uint8_t id);



static inline void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask__runTask(void );
#line 168
static inline void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__fired(void );
#line 203
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__adjustTimer(void );
#line 246
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__generateTime(uint8_t id);
#line 270
static inline void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__default__fired(uint8_t id);
# 40 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
typedef uint8_t /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__int_type;

enum /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0____nesc_unnamed4417 {

  BitVectorC__0__ELEMENT_SIZE = 8 * sizeof(/*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__int_type ), 
  BitVectorC__0__ARRAY_SIZE = (1U + /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__ELEMENT_SIZE - 1) / /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__ELEMENT_SIZE
};

/*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__int_type /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__m_bits[/*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__ARRAY_SIZE];

static inline uint16_t /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getIndex(uint16_t bitnum);




static inline uint16_t /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getMask(uint16_t bitnum);










static inline void /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__clearAll(void );









static inline bool /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__get(uint16_t bitnum);




static inline void /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__set(uint16_t bitnum);




static inline void /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__clear(uint16_t bitnum);
#line 40
typedef uint8_t /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__int_type;

enum /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1____nesc_unnamed4418 {

  BitVectorC__1__ELEMENT_SIZE = 8 * sizeof(/*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__int_type ), 
  BitVectorC__1__ARRAY_SIZE = (1U + /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__ELEMENT_SIZE - 1) / /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__ELEMENT_SIZE
};

/*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__int_type /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__m_bits[/*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__ARRAY_SIZE];

static inline uint16_t /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getIndex(uint16_t bitnum);




static inline uint16_t /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getMask(uint16_t bitnum);










static inline void /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__clearAll(void );









static inline bool /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__get(uint16_t bitnum);




static inline void /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__set(uint16_t bitnum);




static inline void /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__clear(uint16_t bitnum);
# 43 "/opt/tinyos-2.x/tos/lib/net/RootControl.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__RootControl__isRoot(void );
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 112
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__maxPayloadLength(void );
# 50 "/opt/tinyos-2.x/tos/lib/net/CollectionDebug.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(uint8_t type);
#line 62
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(uint8_t type, uint16_t msg, am_addr_t origin, am_addr_t node);
# 51 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__txAck(am_addr_t neighbor);



static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__txNoAck(am_addr_t neighbor);
# 40 "/opt/tinyos-2.x/tos/interfaces/Cache.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__insert(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__t item);







static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__lookup(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__t item);
# 31 "/opt/tinyos-2.x/tos/interfaces/Intercept.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__Intercept__forward(
# 114 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0x40f8f3f0, 
# 20 "/opt/tinyos-2.x/tos/interfaces/Intercept.nc"
message_t * msg, 

void * payload, 








uint8_t len);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP__0__Snoop__receive(
# 113 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0x40f90c80, 
# 60 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Random__rand16(void );
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__sendDone(
# 111 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0x40f91b40, 
# 85 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 81 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__isRunning(void );
#line 62
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__startOneShot(uint32_t dt);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__postTask(void );
# 73 "/opt/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__t  

/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__head(void );
#line 90
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__enqueue(
#line 86
/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__t  newVal);
#line 101
static 
#line 99
/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__t  

/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__element(uint8_t idx);
#line 81
static 
#line 79
/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__t  

/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__dequeue(void );
#line 50
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__empty(void );







static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__size(void );
# 71 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpInfo.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__recomputeRoutes(void );
#line 59
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__triggerRouteUpdate(void );
#line 52
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__getEtx(uint16_t *etx);
#line 66
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__triggerImmediateRouteUpdate(void );









static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__setNeighborCongested(am_addr_t n, bool congested);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


/*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__maxPayloadLength(void );
#line 83
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP__0__Receive__receive(
# 112 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0x40f90598, 
# 60 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 49 "/opt/tinyos-2.x/tos/lib/net/UnicastNameFreeRouting.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__hasRoute(void );
#line 48
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__nextHop(void );
# 48 "/opt/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__PacketAcknowledgements__requestAck(
#line 42
message_t * msg);
#line 74
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__PacketAcknowledgements__wasAcked(
#line 69
message_t * msg);
# 97 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__t * 


/*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__get(void );
#line 61
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__empty(void );
#line 89
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__put(
#line 85
/*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__t * newVal);
# 77 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__source(
#line 73
message_t * amsg);
#line 57
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__address(void );









static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(
#line 63
message_t * amsg);
# 97 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__t * 


/*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__get(void );
#line 61
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__empty(void );
#line 89
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__put(
#line 85
/*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__t * newVal);
# 240 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
enum /*CtpP.Forwarder*/CtpForwardingEngineP__0____nesc_unnamed4419 {
#line 240
  CtpForwardingEngineP__0__sendTask = 23U
};
#line 240
typedef int /*CtpP.Forwarder*/CtpForwardingEngineP__0____nesc_sillytask_sendTask[/*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask];
#line 169
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__startRetxmitTimer(uint16_t mask, uint16_t offset);
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__clearState(uint8_t state);
static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__hasState(uint8_t state);
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__setState(uint8_t state);


enum /*CtpP.Forwarder*/CtpForwardingEngineP__0____nesc_unnamed4420 {
  CtpForwardingEngineP__0__QUEUE_CONGESTED = 0x1, 
  CtpForwardingEngineP__0__ROUTING_ON = 0x2, 
  CtpForwardingEngineP__0__RADIO_ON = 0x4, 
  CtpForwardingEngineP__0__ACK_PENDING = 0x8, 
  CtpForwardingEngineP__0__SENDING = 0x10
};


uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__forwardingState = 0;




am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__lastParent;



uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__seqno;

enum /*CtpP.Forwarder*/CtpForwardingEngineP__0____nesc_unnamed4421 {
  CtpForwardingEngineP__0__CLIENT_COUNT = 0U
};






fe_queue_entry_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__clientEntries[/*CtpP.Forwarder*/CtpForwardingEngineP__0__CLIENT_COUNT];
fe_queue_entry_t * /*CtpP.Forwarder*/CtpForwardingEngineP__0__clientPtrs[/*CtpP.Forwarder*/CtpForwardingEngineP__0__CLIENT_COUNT];







message_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsg;
message_t * /*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsgPtr;

static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Init__init(void );
#line 228
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__StdControl__start(void );
#line 245
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RadioControl__startDone(error_t err);









static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__startRetxmitTimer(uint16_t window, uint16_t offset);
#line 268
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__routeFound(void );




static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__noRoute(void );





static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RadioControl__stopDone(error_t err);





static inline ctp_data_header_t */*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(message_t *m);
#line 377
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__runTask(void );
#line 489
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__packetComplete(fe_queue_entry_t *qe, message_t *msg, bool success);
#line 533
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__sendDone(message_t *msg, error_t error);
#line 584
static inline message_t * /*CtpP.Forwarder*/CtpForwardingEngineP__0__forward(message_t * m);
#line 674
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 737
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSnoop__receive(message_t *msg, void *payload, uint8_t len);
#line 754
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__fired(void );





static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpCongestion__isCongested(void );








static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__evicted(am_addr_t neighbor);







static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__payloadLength(message_t *msg);



static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__maxPayloadLength(void );



static void */*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__getPayload(message_t *msg, uint8_t len);








static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(message_t *msg);

static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(message_t *msg);





static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getType(message_t *msg);
static inline am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getOrigin(message_t *msg);
static inline uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getEtx(message_t *msg);
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getSequenceNumber(message_t *msg);
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getThl(message_t *msg);
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setThl(message_t *msg, uint8_t thl);


static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setEtx(message_t *msg, uint16_t e);

static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__option(message_t *msg, ctp_options_t opt);


static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setOption(message_t *msg, ctp_options_t opt);


static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__clearOption(message_t *msg, ctp_options_t opt);






static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__matchInstance(message_t *m1, message_t *m2);
#line 843
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__clearState(uint8_t state);


static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__hasState(uint8_t state);


static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__setState(uint8_t state);






static inline 
#line 855
void 
/*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__default__sendDone(uint8_t client, message_t *msg, error_t error);



static inline 
#line 859
bool 
/*CtpP.Forwarder*/CtpForwardingEngineP__0__Intercept__default__forward(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len);



static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP__0__Receive__default__receive(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len);



static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP__0__Snoop__default__receive(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len);
#line 885
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__default__logEvent(uint8_t type);








static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__default__logEventMsg(uint8_t type, uint16_t msg, am_addr_t origin, am_addr_t node);
# 60 "/opt/tinyos-2.x/tos/system/PoolP.nc"
uint8_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__free;
uint8_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__index;
/*CtpP.MessagePoolP.PoolP*/PoolP__0__pool_t * /*CtpP.MessagePoolP.PoolP*/PoolP__0__queue[12];
/*CtpP.MessagePoolP.PoolP*/PoolP__0__pool_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__pool[12];

static inline error_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__Init__init(void );









static inline bool /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__empty(void );
#line 88
static inline /*CtpP.MessagePoolP.PoolP*/PoolP__0__pool_t */*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__get(void );
#line 103
static error_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__put(/*CtpP.MessagePoolP.PoolP*/PoolP__0__pool_t *newVal);
#line 60
uint8_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__free;
uint8_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__index;
/*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool_t * /*CtpP.QEntryPoolP.PoolP*/PoolP__1__queue[12];
/*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool[12];

static inline error_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Init__init(void );









static inline bool /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__empty(void );
#line 88
static inline /*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool_t */*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__get(void );
#line 103
static error_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__put(/*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool_t *newVal);
# 48 "/opt/tinyos-2.x/tos/system/QueueC.nc"
/*CtpP.SendQueueP*/QueueC__0__queue_t  /*CtpP.SendQueueP*/QueueC__0__queue[12];
uint8_t /*CtpP.SendQueueP*/QueueC__0__head = 0;
uint8_t /*CtpP.SendQueueP*/QueueC__0__tail = 0;
uint8_t /*CtpP.SendQueueP*/QueueC__0__size = 0;

static inline bool /*CtpP.SendQueueP*/QueueC__0__Queue__empty(void );



static inline uint8_t /*CtpP.SendQueueP*/QueueC__0__Queue__size(void );



static inline uint8_t /*CtpP.SendQueueP*/QueueC__0__Queue__maxSize(void );



static inline /*CtpP.SendQueueP*/QueueC__0__queue_t /*CtpP.SendQueueP*/QueueC__0__Queue__head(void );



static inline void /*CtpP.SendQueueP*/QueueC__0__printQueue(void );
#line 85
static /*CtpP.SendQueueP*/QueueC__0__queue_t /*CtpP.SendQueueP*/QueueC__0__Queue__dequeue(void );
#line 97
static inline error_t /*CtpP.SendQueueP*/QueueC__0__Queue__enqueue(/*CtpP.SendQueueP*/QueueC__0__queue_t newVal);
#line 112
static inline /*CtpP.SendQueueP*/QueueC__0__queue_t /*CtpP.SendQueueP*/QueueC__0__Queue__element(uint8_t idx);
# 60 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpPacket.nc"
static am_addr_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getOrigin(message_t *msg);
#line 54
static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getThl(message_t *msg);








static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getSequenceNumber(message_t *msg);


static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getType(message_t *msg);
# 58 "/opt/tinyos-2.x/tos/lib/net/ctp/LruCtpMsgCacheP.nc"
#line 53
typedef struct /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0____nesc_unnamed4422 {
  am_addr_t origin;
  uint8_t seqno;
  collection_id_t type;
  uint8_t thl;
} /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__ctp_packet_sig_t;

/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__ctp_packet_sig_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[4];
uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first;
uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count;

static inline error_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Init__init(void );
#line 84
static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__lookup(message_t *m);
#line 100
static inline void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__remove(uint8_t i);
#line 116
static inline void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__insert(message_t *m);
#line 135
static inline bool /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__lookup(message_t *m);
# 61 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
static void LinkEstimatorP__LinkEstimator__evicted(am_addr_t neighbor);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t LinkEstimatorP__AMSend__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 99
static void LinkEstimatorP__Send__sendDone(
#line 92
message_t * msg, 






error_t error);
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t LinkEstimatorP__Random__rand16(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t LinkEstimatorP__SubPacket__payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


LinkEstimatorP__SubPacket__getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t LinkEstimatorP__SubPacket__maxPayloadLength(void );
# 77 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t LinkEstimatorP__SubAMPacket__source(
#line 73
message_t * amsg);
#line 67
static am_addr_t LinkEstimatorP__SubAMPacket__destination(
#line 63
message_t * amsg);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



LinkEstimatorP__Receive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 43 "/opt/tinyos-2.x/tos/lib/net/ctp/CompareBit.nc"
static bool LinkEstimatorP__CompareBit__shouldInsert(message_t * msg, void * payload, uint8_t len);
# 47 "/opt/tinyos-2.x/tos/interfaces/LinkPacketMetadata.nc"
static bool LinkEstimatorP__LinkPacketMetadata__highChannelQuality(
#line 44
message_t * msg);
# 58 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
enum LinkEstimatorP____nesc_unnamed4423 {


  LinkEstimatorP__EVICT_EETX_THRESHOLD = 55, 


  LinkEstimatorP__MAX_PKT_GAP = 10, 
  LinkEstimatorP__BEST_EETX = 0, 
  LinkEstimatorP__INVALID_RVAL = 0xff, 
  LinkEstimatorP__INVALID_NEIGHBOR_ADDR = 0xff, 


  LinkEstimatorP__VERY_LARGE_EETX_VALUE = 0xff, 


  LinkEstimatorP__ALPHA = 9, 


  LinkEstimatorP__DLQ_PKT_WINDOW = 5, 


  LinkEstimatorP__BLQ_PKT_WINDOW = 3, 



  LinkEstimatorP__LARGE_EETX_VALUE = 60
};


neighbor_table_entry_t LinkEstimatorP__NeighborTable[10];

uint8_t LinkEstimatorP__linkEstSeq = 0;



uint8_t LinkEstimatorP__prevSentIdx = 0;


static inline linkest_header_t *LinkEstimatorP__getHeader(message_t *m);




static inline linkest_footer_t *LinkEstimatorP__getFooter(message_t *m, uint8_t len);







static inline uint8_t LinkEstimatorP__addLinkEstHeaderAndFooter(message_t *msg, uint8_t len);
#line 163
static void LinkEstimatorP__initNeighborIdx(uint8_t i, am_addr_t ll_addr);
#line 176
static uint8_t LinkEstimatorP__findIdx(am_addr_t ll_addr);
#line 189
static uint8_t LinkEstimatorP__findEmptyNeighborIdx(void );
#line 202
static uint8_t LinkEstimatorP__findWorstNeighborIdx(uint8_t thresholdEETX);
#line 237
static inline uint8_t LinkEstimatorP__findRandomNeighborIdx(void );
#line 275
static void LinkEstimatorP__updateEETX(neighbor_table_entry_t *ne, uint16_t newEst);





static void LinkEstimatorP__updateDEETX(neighbor_table_entry_t *ne);
#line 301
static inline uint8_t LinkEstimatorP__computeEETX(uint8_t q1);
#line 316
static inline void LinkEstimatorP__updateNeighborTableEst(am_addr_t n);
#line 356
static void LinkEstimatorP__updateNeighborEntryIdx(uint8_t idx, uint8_t seq);
#line 392
static inline void LinkEstimatorP__print_neighbor_table(void );
#line 406
static void LinkEstimatorP__print_packet(message_t *msg, uint8_t len);










static inline void LinkEstimatorP__initNeighborTable(void );







static inline error_t LinkEstimatorP__StdControl__start(void );









static inline error_t LinkEstimatorP__Init__init(void );






static uint16_t LinkEstimatorP__LinkEstimator__getLinkQuality(am_addr_t neighbor);
#line 458
static inline error_t LinkEstimatorP__LinkEstimator__insertNeighbor(am_addr_t neighbor);
#line 486
static error_t LinkEstimatorP__LinkEstimator__pinNeighbor(am_addr_t neighbor);









static inline error_t LinkEstimatorP__LinkEstimator__unpinNeighbor(am_addr_t neighbor);
#line 508
static inline error_t LinkEstimatorP__LinkEstimator__txAck(am_addr_t neighbor);
#line 525
static inline error_t LinkEstimatorP__LinkEstimator__txNoAck(am_addr_t neighbor);
#line 541
static inline error_t LinkEstimatorP__LinkEstimator__clearDLQ(am_addr_t neighbor);
#line 556
static inline error_t LinkEstimatorP__Send__send(am_addr_t addr, message_t *msg, uint8_t len);










static inline void LinkEstimatorP__AMSend__sendDone(message_t *msg, error_t error);








static inline uint8_t LinkEstimatorP__Send__maxPayloadLength(void );



static inline void *LinkEstimatorP__Send__getPayload(message_t *msg, uint8_t len);






static inline void LinkEstimatorP__processReceivedMessage(message_t * msg, void * payload, uint8_t len);
#line 664
static inline message_t *LinkEstimatorP__SubReceive__receive(message_t *msg, 
void *payload, 
uint8_t len);
#line 680
static uint8_t LinkEstimatorP__Packet__payloadLength(message_t *msg);
#line 699
static uint8_t LinkEstimatorP__Packet__maxPayloadLength(void );




static void *LinkEstimatorP__Packet__getPayload(message_t *msg, uint8_t len);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__send(
#line 56
message_t * msg, 







uint8_t len);
#line 101
static uint8_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__maxPayloadLength(void );
# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__sendDone(message_t *m, error_t err);



static inline uint8_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__maxPayloadLength(void );
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__postTask(void );
# 68 "/opt/tinyos-2.x/tos/lib/net/CollectionDebug.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t metric);
#line 56
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3);
# 44 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__pinNeighbor(am_addr_t neighbor);
#line 41
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__insertNeighbor(am_addr_t neighbor);
#line 58
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__clearDLQ(am_addr_t neighbor);
#line 47
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__unpinNeighbor(am_addr_t neighbor);
#line 38
static uint16_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__getLinkQuality(uint16_t neighbor);
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t /*CtpP.Router*/CtpRoutingEngineP__0__Random__rand16(void );
#line 35
static uint32_t /*CtpP.Router*/CtpRoutingEngineP__0__Random__rand32(void );
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask__postTask(void );
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__getPayload(
#line 121
message_t * msg, 


uint8_t len);
#line 112
static uint8_t /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__maxPayloadLength(void );
# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__startOneShot(uint32_t dt);




static void /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__stop(void );
#line 53
static void /*CtpP.Router*/CtpRoutingEngineP__0__RouteTimer__startPeriodic(uint32_t dt);
# 7 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpCongestion.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP__0__CtpCongestion__isCongested(void );
# 77 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t /*CtpP.Router*/CtpRoutingEngineP__0__AMPacket__source(
#line 73
message_t * amsg);
#line 57
static am_addr_t /*CtpP.Router*/CtpRoutingEngineP__0__AMPacket__address(void );
#line 136
static am_id_t /*CtpP.Router*/CtpRoutingEngineP__0__AMPacket__type(
#line 132
message_t * amsg);
# 51 "/opt/tinyos-2.x/tos/lib/net/UnicastNameFreeRouting.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__Routing__routeFound(void );
static void /*CtpP.Router*/CtpRoutingEngineP__0__Routing__noRoute(void );
# 258 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
enum /*CtpP.Router*/CtpRoutingEngineP__0____nesc_unnamed4424 {
#line 258
  CtpRoutingEngineP__0__updateRouteTask = 24U
};
#line 258
typedef int /*CtpP.Router*/CtpRoutingEngineP__0____nesc_sillytask_updateRouteTask[/*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask];
#line 381
enum /*CtpP.Router*/CtpRoutingEngineP__0____nesc_unnamed4425 {
#line 381
  CtpRoutingEngineP__0__sendBeaconTask = 25U
};
#line 381
typedef int /*CtpP.Router*/CtpRoutingEngineP__0____nesc_sillytask_sendBeaconTask[/*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask];
#line 125
bool /*CtpP.Router*/CtpRoutingEngineP__0__ECNOff = TRUE;



bool /*CtpP.Router*/CtpRoutingEngineP__0__radioOn = FALSE;


bool /*CtpP.Router*/CtpRoutingEngineP__0__running = FALSE;

bool /*CtpP.Router*/CtpRoutingEngineP__0__sending = FALSE;


bool /*CtpP.Router*/CtpRoutingEngineP__0__justEvicted = FALSE;

route_info_t /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo;
bool /*CtpP.Router*/CtpRoutingEngineP__0__state_is_root;
am_addr_t /*CtpP.Router*/CtpRoutingEngineP__0__my_ll_addr;

message_t /*CtpP.Router*/CtpRoutingEngineP__0__beaconMsgBuffer;
ctp_routing_header_t */*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg;


routing_table_entry /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[10];
uint8_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive;


uint32_t /*CtpP.Router*/CtpRoutingEngineP__0__parentChanges;



static inline void /*CtpP.Router*/CtpRoutingEngineP__0__routingTableInit(void );
static uint8_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableFind(am_addr_t arg_0x41124c20);
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableUpdateEntry(am_addr_t arg_0x411221e0, am_addr_t arg_0x41122398, uint16_t arg_0x41122548);
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableEvict(am_addr_t neighbor);

uint32_t /*CtpP.Router*/CtpRoutingEngineP__0__currentInterval = 128;
uint32_t /*CtpP.Router*/CtpRoutingEngineP__0__t;
bool /*CtpP.Router*/CtpRoutingEngineP__0__tHasPassed;

static void /*CtpP.Router*/CtpRoutingEngineP__0__chooseAdvertiseTime(void );








static inline void /*CtpP.Router*/CtpRoutingEngineP__0__resetInterval(void );




static inline void /*CtpP.Router*/CtpRoutingEngineP__0__decayInterval(void );







static inline void /*CtpP.Router*/CtpRoutingEngineP__0__remainingInterval(void );






static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__Init__init(void );
#line 209
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__StdControl__start(void );
#line 226
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__RadioControl__startDone(error_t error);










static inline void /*CtpP.Router*/CtpRoutingEngineP__0__RadioControl__stopDone(error_t error);






static inline bool /*CtpP.Router*/CtpRoutingEngineP__0__passLinkEtxThreshold(uint16_t etx);





static inline uint16_t /*CtpP.Router*/CtpRoutingEngineP__0__evaluateEtx(uint16_t quality);







static inline void /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__runTask(void );
#line 381
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask__runTask(void );
#line 423
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__sendDone(message_t *msg, error_t error);







static inline void /*CtpP.Router*/CtpRoutingEngineP__0__RouteTimer__fired(void );





static inline void /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__fired(void );
#line 452
static inline ctp_routing_header_t */*CtpP.Router*/CtpRoutingEngineP__0__getHeader(message_t * m);






static inline message_t */*CtpP.Router*/CtpRoutingEngineP__0__BeaconReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 509
static void /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__evicted(am_addr_t neighbor);
#line 521
static inline am_addr_t /*CtpP.Router*/CtpRoutingEngineP__0__Routing__nextHop(void );


static inline bool /*CtpP.Router*/CtpRoutingEngineP__0__Routing__hasRoute(void );
#line 538
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__getEtx(uint16_t *etx);
#line 552
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__recomputeRoutes(void );



static inline void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__triggerRouteUpdate(void );



static inline void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__triggerImmediateRouteUpdate(void );



static void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__setNeighborCongested(am_addr_t n, bool congested);
#line 594
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__setRoot(void );
#line 619
static inline bool /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__isRoot(void );
#line 640
static inline bool /*CtpP.Router*/CtpRoutingEngineP__0__CompareBit__shouldInsert(message_t *msg, void *payload, uint8_t len);
#line 690
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__routingTableInit(void );





static uint8_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableFind(am_addr_t neighbor);
#line 708
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableUpdateEntry(am_addr_t from, am_addr_t parent, uint16_t etx);
#line 751
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableEvict(am_addr_t neighbor);
#line 774
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__default__logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3);





static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__default__logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t etx);



static bool /*CtpP.Router*/CtpRoutingEngineP__0__CtpRoutingPacket__getOption(message_t *msg, ctp_options_t opt);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__Send__send(
#line 56
message_t * msg, 







uint8_t len);
# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMPacket__setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMPacket__setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__Send__sendDone(message_t *m, error_t err);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*AntiTheftRootAppC.AlertsForwarder.AMQueueEntryP*/AMQueueEntryP__4__AMSend__sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*AntiTheftRootAppC.AlertsForwarder.AMQueueEntryP*/AMQueueEntryP__4__Send__send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

/*AntiTheftRootAppC.AlertsForwarder.AMQueueEntryP*/AMQueueEntryP__4__Send__getPayload(
#line 111
message_t * msg, 


uint8_t len);
# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static void /*AntiTheftRootAppC.AlertsForwarder.AMQueueEntryP*/AMQueueEntryP__4__AMPacket__setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*AntiTheftRootAppC.AlertsForwarder.AMQueueEntryP*/AMQueueEntryP__4__AMPacket__setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*AntiTheftRootAppC.AlertsForwarder.AMQueueEntryP*/AMQueueEntryP__4__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*AntiTheftRootAppC.AlertsForwarder.AMQueueEntryP*/AMQueueEntryP__4__Send__sendDone(message_t *m, error_t err);







static inline void */*AntiTheftRootAppC.AlertsForwarder.AMQueueEntryP*/AMQueueEntryP__4__AMSend__getPayload(message_t *m, uint8_t len);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__send(
# 40 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40e83650, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__getPayload(
# 40 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40e83650, 
# 121 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(
# 38 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40e52ba0, 
# 85 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__payloadLength(
#line 63
message_t * msg);
#line 83
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__postTask(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__destination(
#line 63
message_t * amsg);
#line 136
static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__type(
#line 132
message_t * amsg);
# 118 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_unnamed4426 {
#line 118
  AMQueueImplP__1__CancelTask = 26U
};
#line 118
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_sillytask_CancelTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask];
#line 161
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_unnamed4427 {
#line 161
  AMQueueImplP__1__errorTask = 27U
};
#line 161
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_sillytask_errorTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask];
#line 49
#line 47
typedef struct /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_unnamed4428 {
  message_t * msg;
} /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue_entry_t;

uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = 1;
/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue_entry_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[1];
uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[1 / 8 + 1];

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend(void );

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__nextPacket(void );
#line 82
static inline error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 118
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask(void );
#line 155
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask(void );




static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend(void );
#line 181
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
#line 203
static inline void */*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__getPayload(uint8_t id, message_t *m, uint8_t len);



static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
# 86 "/opt/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 86
{
   __asm volatile ("cli");}

#line 103
#line 102
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 106
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 112
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 113 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 46 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 46
  SchedulerBasicP__Scheduler__init();
#line 46
}
#line 46
# 42 "/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP__power_init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    * (volatile uint8_t *)(0x35 + 0x20) = 1 << 5;
  }
}

# 58 "/opt/tinyos-2.x/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 81 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P__TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x)
#line 81
{
#line 81
  union __nesc_unnamed4429 {
#line 81
    Atm128TimerCtrlCapture_t f;
#line 81
    uint16_t t;
  } 
#line 81
  c = { .f = x };

#line 81
  return c.t;
}





static inline void HplAtm128Timer1P__TimerCtrl__setCtrlCapture(Atm128_TCCR1B_t x)
#line 88
{
  * (volatile uint8_t *)(0x2E + 0x20) = HplAtm128Timer1P__TimerCtrlCapture2int(x);
}

#line 71
static inline Atm128TimerCtrlCapture_t HplAtm128Timer1P__TimerCtrl__getCtrlCapture(void )
#line 71
{
  return * (Atm128TimerCtrlCapture_t * )& * (volatile uint8_t *)(0x2E + 0x20);
}

#line 61
static inline void HplAtm128Timer1P__Timer__setScale(uint8_t s)
#line 61
{
  Atm128TimerCtrlCapture_t x = HplAtm128Timer1P__TimerCtrl__getCtrlCapture();

#line 63
  x.bits.cs = s;
  HplAtm128Timer1P__TimerCtrl__setCtrlCapture(x);
}

# 95 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale){
#line 95
  HplAtm128Timer1P__Timer__setScale(scale);
#line 95
}
#line 95
# 131 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Timer__start(void )
#line 131
{
#line 131
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 2;
}

# 69 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start(void ){
#line 69
  HplAtm128Timer1P__Timer__start();
#line 69
}
#line 69
# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Timer__set(uint16_t t)
#line 52
{
#line 52
  * (volatile uint16_t *)(0x2C + 0x20) = t;
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size t){
#line 58
  HplAtm128Timer1P__Timer__set(t);
#line 58
}
#line 58
# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(0);
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start();
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(4);
  }
  return SUCCESS;
}

# 79 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline uint16_t HplAtm128Timer3P__TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x)
#line 79
{
#line 79
  union __nesc_unnamed4430 {
#line 79
    Atm128TimerCtrlCapture_t f;
#line 79
    uint16_t t;
  } 
#line 79
  c = { .f = x };

#line 79
  return c.t;
}





static inline void HplAtm128Timer3P__TimerCtrl__setCtrlCapture(Atm128_TCCR3B_t x)
#line 86
{
  * (volatile uint8_t *)0x8A = HplAtm128Timer3P__TimerCtrlCapture2int(x);
}

#line 69
static inline Atm128TimerCtrlCapture_t HplAtm128Timer3P__TimerCtrl__getCtrlCapture(void )
#line 69
{
  return * (Atm128TimerCtrlCapture_t *)& * (volatile uint8_t *)0x8A;
}

#line 59
static inline void HplAtm128Timer3P__Timer__setScale(uint8_t s)
#line 59
{
  Atm128TimerCtrlCapture_t x = HplAtm128Timer3P__TimerCtrl__getCtrlCapture();

#line 61
  x.bits.cs = s;
  HplAtm128Timer3P__TimerCtrl__setCtrlCapture(x);
}

# 95 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__setScale(uint8_t scale){
#line 95
  HplAtm128Timer3P__Timer__setScale(scale);
#line 95
}
#line 95
# 127 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__Timer__start(void )
#line 127
{
#line 127
  * (volatile uint8_t *)0x7D |= 1 << 2;
}

# 69 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__start(void ){
#line 69
  HplAtm128Timer3P__Timer__start();
#line 69
}
#line 69
# 50 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__Timer__set(uint16_t t)
#line 50
{
#line 50
  * (volatile uint16_t *)0x88 = t;
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__set(/*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__timer_size t){
#line 58
  HplAtm128Timer3P__Timer__set(t);
#line 58
}
#line 58
# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC__1__Init__init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__set(0);
    /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__start();
    /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__setScale(2);
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t MotePlatformP__SubInit__init(void ){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*InitThreeP.InitThree*/Atm128TimerInitC__1__Init__init();
#line 51
  result = ecombine(result, /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )59U &= ~(1 << 4);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr();
#line 30
}
#line 30
# 50 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )58U &= ~(1 << 4);
}

# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput();
#line 33
}
#line 33
# 26 "/opt/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void )
#line 26
{

  * (volatile uint8_t *)(0x15 + 0x20) = 0;
  * (volatile uint8_t *)(0x14 + 0x20) = 0xff;


  MotePlatformP__SerialIdPin__makeInput();
  MotePlatformP__SerialIdPin__clr();

  return MotePlatformP__SubInit__init();
}

# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 0;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 1;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 2;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 0;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 1;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 2;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput();
#line 35
}
#line 35
# 45 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 45
{
  /* atomic removed: atomic calls only */
#line 46
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 51
  unsigned char result;
#line 51

#line 51
  result = LedsP__Init__init();
#line 51
  result = ecombine(result, MotePlatformP__PlatformInit__init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 41 "/opt/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
#line 41
{
  /* atomic removed: atomic calls only */



  {
    uint8_t now;
#line 47
    uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)(0x2E + 0x20) = 1 << 0;
    * (volatile uint8_t *)(0x30 + 0x20) = 1 << 3;
    * (volatile uint8_t *)(0x33 + 0x20) = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)(0x2C + 0x20);
    for (wraps = MeasureClockC__MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)(0x2C + 0x20);

        if (next < start) {
          wraps--;
          }
#line 65
        start = next;
      }


    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;


    start = * (volatile uint16_t *)(0x2C + 0x20);
    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;
    MeasureClockC__cycles = * (volatile uint16_t *)(0x2C + 0x20);

    MeasureClockC__cycles = (MeasureClockC__cycles - start + 16) >> 5;


    * (volatile uint8_t *)(0x30 + 0x20) = * (volatile uint8_t *)(0x2E + 0x20) = * (volatile uint8_t *)(0x33 + 0x20) = 0;
    * (volatile uint8_t *)(0x32 + 0x20) = 0;
    * (volatile uint16_t *)(0x2C + 0x20) = 0;
    * (volatile uint8_t *)0x7C = * (volatile uint8_t *)(0x36 + 0x20) = 0xff;
    while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
      ;
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP__MeasureClock__init(void ){
#line 51
  unsigned char result;
#line 51

#line 51
  result = MeasureClockC__Init__init();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 49 "/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t ok;


  ok = PlatformP__MeasureClock__init();
  ok = ecombine(ok, PlatformP__MoteInit__init());

  if (ok != SUCCESS) {
    return ok;
    }
  PlatformP__power_init();

  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 51
  unsigned char result;
#line 51

#line 51
  result = PlatformP__Init__init();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 54 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 54
  unsigned char result;
#line 54

#line 54
  result = SchedulerBasicP__Scheduler__runNextTask();
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 106 "AntiTheftRootC.nc"
static inline void AntiTheftRootC__AlertsForward__sendDone(message_t *msg, error_t error)
#line 106
{
  if (msg == &AntiTheftRootC__fwdMsg) {
    AntiTheftRootC__fwdBusy = FALSE;
    }
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*AntiTheftRootAppC.AlertsForwarder.AMQueueEntryP*/AMQueueEntryP__4__AMSend__sendDone(message_t * msg, error_t error){
#line 99
  AntiTheftRootC__AlertsForward__sendDone(msg, error);
#line 99
}
#line 99
# 57 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*AntiTheftRootAppC.AlertsForwarder.AMQueueEntryP*/AMQueueEntryP__4__Send__sendDone(message_t *m, error_t err)
#line 57
{
  /*AntiTheftRootAppC.AlertsForwarder.AMQueueEntryP*/AMQueueEntryP__4__AMSend__sendDone(m, err);
}

# 207 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
#line 207
{
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(uint8_t arg_0x40e52ba0, message_t * msg, error_t error){
#line 89
  switch (arg_0x40e52ba0) {
#line 89
    case 0U:
#line 89
      /*AntiTheftRootAppC.AlertsForwarder.AMQueueEntryP*/AMQueueEntryP__4__Send__sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(arg_0x40e52ba0, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 118 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask(void )
#line 118
{
  uint8_t i;
#line 119
  uint8_t j;
#line 119
  uint8_t mask;
#line 119
  uint8_t last;
  message_t *msg;

#line 121
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[last].msg;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[last].msg = (void *)0;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[i] &= ~mask;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

#line 161
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask(void )
#line 161
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current, /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg, FAIL);
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__send(am_id_t arg_0x40e83650, am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(arg_0x40e83650, addr, msg, len);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 235
{
  const uint8_t *base = source;

#line 237
  return base[0];
}

# 49 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg)
#line 49
{
  return (serial_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

#line 111
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg)
#line 111
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

#line 113
  return __nesc_ntoh_uint8(header->length.data);
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__payloadLength(message_t * msg){
#line 67
  unsigned char result;
#line 67

#line 67
  result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(msg);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__destination(message_t * amsg){
#line 67
  unsigned short result;
#line 67

#line 67
  result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(amsg);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 161 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg)
#line 161
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 163
  return __nesc_ntoh_uint8(header->type.data);
}

# 136 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__type(message_t * amsg){
#line 136
  unsigned char result;
#line 136

#line 136
  result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(amsg);
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 57 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__nextPacket(void )
#line 57
{
  uint8_t i;

#line 59
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg == (void *)0 || 
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current / 8] & (1 << /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current % 8)) 
        {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 70
    /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = 1;
    }
}

#line 166
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend(void )
#line 166
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__nextPacket();
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current < 1) {
      error_t nextErr;
      message_t *nextMsg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg;
      am_id_t nextId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__destination(nextMsg);
      uint8_t len = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__payloadLength(nextMsg);

#line 174
      nextErr = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__postTask();
        }
    }
}

# 522 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__startSend(uint8_t b)
#line 522
{
  bool not_busy = FALSE;

#line 524
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 524
    {
      if (SerialP__txBuf[SerialP__TX_DATA_INDEX].state == SerialP__BUFFER_AVAILABLE) {
          SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_FILLING;
          SerialP__txBuf[SerialP__TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
#line 530
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP__MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

# 51 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte){
#line 51
  unsigned char result;
#line 51

#line 51
  result = SerialP__SendBytePacket__startSend(first_byte);
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 43 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen)
#line 43
{
  return upperLen + sizeof(serial_header_t );
}

# 350 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 351
{
  return 0;
}

# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0x40cca088, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char result;
#line 23

#line 23
  switch (arg_0x40cca088) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      result = SerialPacketInfoActiveMessageP__Info__dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0x40cca088, msg, upperLen);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return result;
#line 23
}
#line 23
# 40 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void )
#line 40
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 347 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id)
#line 347
{
  return 0;
}

# 15 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0x40cca088){
#line 15
  unsigned char result;
#line 15

#line 15
  switch (arg_0x40cca088) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      result = SerialPacketInfoActiveMessageP__Info__offset();
#line 15
      break;
#line 15
    default:
#line 15
      result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0x40cca088);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return result;
#line 15
}
#line 15
# 100 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len)
#line 100
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE) {
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 105
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(id);
      if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex > sizeof(message_header_t )) {
          {
            unsigned char __nesc_temp = 
#line 108
            ESIZE;

            {
#line 108
              __nesc_atomic_end(__nesc_atomic); 
#line 108
              return __nesc_temp;
            }
          }
        }
#line 111
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_DATA;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = id;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;






      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
    }
#line 123
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
      return FAIL;
    }
}

# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(message_t * msg, uint8_t len){
#line 64
  unsigned char result;
#line 64

#line 64
  result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(TOS_SERIAL_ACTIVE_MESSAGE_ID, msg, len);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__RunTx__postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(SerialP__RunTx);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 86 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(/*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 268 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__routeFound(void )
#line 268
{
  ;
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__postTask();
}

# 51 "/opt/tinyos-2.x/tos/lib/net/UnicastNameFreeRouting.nc"
inline static void /*CtpP.Router*/CtpRoutingEngineP__0__Routing__routeFound(void ){
#line 51
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__routeFound();
#line 51
}
#line 51
# 273 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__noRoute(void )
#line 273
{
}

# 52 "/opt/tinyos-2.x/tos/lib/net/UnicastNameFreeRouting.nc"
inline static void /*CtpP.Router*/CtpRoutingEngineP__0__Routing__noRoute(void ){
#line 52
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__noRoute();
#line 52
}
#line 52
# 173 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__resetInterval(void )
#line 173
{
  /*CtpP.Router*/CtpRoutingEngineP__0__currentInterval = 128;
  /*CtpP.Router*/CtpRoutingEngineP__0__chooseAdvertiseTime();
}

#line 556
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__triggerRouteUpdate(void )
#line 556
{
  /*CtpP.Router*/CtpRoutingEngineP__0__resetInterval();
}

# 541 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP__LinkEstimator__clearDLQ(am_addr_t neighbor)
#line 541
{
  neighbor_table_entry_t *ne;
  uint8_t nidx = LinkEstimatorP__findIdx(neighbor);

#line 544
  if (nidx == LinkEstimatorP__INVALID_RVAL) {
      return FAIL;
    }
  ne = &LinkEstimatorP__NeighborTable[nidx];
  ne->data_total = 0;
  ne->data_success = 0;
  return SUCCESS;
}

# 58 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__clearDLQ(am_addr_t neighbor){
#line 58
  unsigned char result;
#line 58

#line 58
  result = LinkEstimatorP__LinkEstimator__clearDLQ(neighbor);
#line 58

#line 58
  return result;
#line 58
}
#line 58
#line 44
inline static error_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__pinNeighbor(am_addr_t neighbor){
#line 44
  unsigned char result;
#line 44

#line 44
  result = LinkEstimatorP__LinkEstimator__pinNeighbor(neighbor);
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 496 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP__LinkEstimator__unpinNeighbor(am_addr_t neighbor)
#line 496
{
  uint8_t nidx = LinkEstimatorP__findIdx(neighbor);

#line 498
  if (nidx == LinkEstimatorP__INVALID_RVAL) {
      return FAIL;
    }
  LinkEstimatorP__NeighborTable[nidx].flags &= ~PINNED_ENTRY;
  return SUCCESS;
}

# 47 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__unpinNeighbor(am_addr_t neighbor){
#line 47
  unsigned char result;
#line 47

#line 47
  result = LinkEstimatorP__LinkEstimator__unpinNeighbor(neighbor);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 774 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__default__logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3)
#line 774
{
  return SUCCESS;
}

# 56 "/opt/tinyos-2.x/tos/lib/net/CollectionDebug.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3){
#line 56
  unsigned char result;
#line 56

#line 56
  result = /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__default__logEventDbg(type, arg1, arg2, arg3);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 244 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline bool /*CtpP.Router*/CtpRoutingEngineP__0__passLinkEtxThreshold(uint16_t etx)
#line 244
{
  return etx < ETX_THRESHOLD;
}

# 38 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
inline static uint16_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__getLinkQuality(uint16_t neighbor){
#line 38
  unsigned short result;
#line 38

#line 38
  result = LinkEstimatorP__LinkEstimator__getLinkQuality(neighbor);
#line 38

#line 38
  return result;
#line 38
}
#line 38
# 250 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline uint16_t /*CtpP.Router*/CtpRoutingEngineP__0__evaluateEtx(uint16_t quality)
#line 250
{

  return quality + 10;
}




static inline void /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__runTask(void )
#line 258
{
  uint8_t i;
  routing_table_entry *entry;
  routing_table_entry *best;
  uint16_t minEtx;
  uint16_t currentEtx;
  uint16_t linkEtx;
#line 264
  uint16_t pathEtx;

  if (/*CtpP.Router*/CtpRoutingEngineP__0__state_is_root) {
    return;
    }
  best = (void *)0;

  minEtx = MAX_METRIC;

  currentEtx = MAX_METRIC;

  ;


  for (i = 0; i < /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive; i++) {
      entry = &/*CtpP.Router*/CtpRoutingEngineP__0__routingTable[i];


      if (entry->info.parent == INVALID_ADDR || entry->info.parent == /*CtpP.Router*/CtpRoutingEngineP__0__my_ll_addr) {
          ;


          continue;
        }

      linkEtx = /*CtpP.Router*/CtpRoutingEngineP__0__evaluateEtx(/*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__getLinkQuality(entry->neighbor));
      ;


      pathEtx = linkEtx + entry->info.etx;

      if (entry->neighbor == /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent) {
          ;
          currentEtx = pathEtx;

          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 299
            {
              /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.etx = entry->info.etx;
              /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.congested = entry->info.congested;
            }
#line 302
            __nesc_atomic_end(__nesc_atomic); }
          continue;
        }

      if (entry->info.congested) {
        continue;
        }
      if (!/*CtpP.Router*/CtpRoutingEngineP__0__passLinkEtxThreshold(linkEtx)) {
          ;
          continue;
        }

      if (pathEtx < minEtx) {
          ;
          minEtx = pathEtx;
          best = entry;
        }
    }
#line 334
  if (minEtx != MAX_METRIC) {

      if ((
#line 335
      currentEtx == MAX_METRIC || (
      /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.congested && minEtx < /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.etx + 10)) || 
      minEtx + PARENT_SWITCH_THRESHOLD < currentEtx) {




          /*CtpP.Router*/CtpRoutingEngineP__0__parentChanges++;

          ;
          /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__logEventDbg(NET_C_TREE_NEW_PARENT, best->neighbor, best->info.etx, minEtx);
          /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__unpinNeighbor(/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent);
          /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__pinNeighbor(best->neighbor);
          /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__clearDLQ(best->neighbor);

          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 350
            {
              /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent = best->neighbor;
              /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.etx = best->info.etx;
              /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.congested = best->info.congested;
            }
#line 354
            __nesc_atomic_end(__nesc_atomic); }
          if (currentEtx - minEtx > 20) {
              /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__triggerRouteUpdate();
            }
        }
    }




  if (/*CtpP.Router*/CtpRoutingEngineP__0__justEvicted && /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent == INVALID_ADDR) {
    /*CtpP.Router*/CtpRoutingEngineP__0__Routing__noRoute();
    }
  else {



    if (
#line 370
    !/*CtpP.Router*/CtpRoutingEngineP__0__justEvicted && 
    currentEtx == MAX_METRIC && 
    minEtx != MAX_METRIC) {
      /*CtpP.Router*/CtpRoutingEngineP__0__Routing__routeFound();
      }
    }
#line 374
  /*CtpP.Router*/CtpRoutingEngineP__0__justEvicted = FALSE;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint32_t /*CtpP.Router*/CtpRoutingEngineP__0__Random__rand32(void ){
#line 35
  unsigned long result;
#line 35

#line 35
  result = RandomMlcgC__Random__rand32();
#line 35

#line 35
  return result;
#line 35
}
#line 35
# 153 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__stop(void ){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(2U);
#line 67
}
#line 67
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 94 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void )
#line 94
{
  return * (Atm128_TIFR_t *)& * (volatile uint8_t *)(0x36 + 0x20);
}

# 44 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void ){
#line 44
  union __nesc_unnamed4273 result;
#line 44

#line 44
  result = HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag();
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 264 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 264
{
  const uint8_t *base = source;

#line 266
  return ((uint16_t )base[0] << 8) | base[1];
}

static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 269
{
  uint8_t *base = target;

#line 271
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

#line 240
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 240
{
  uint8_t *base = target;

#line 242
  base[0] = value;
  return value;
}

# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__Send__send(message_t * msg, uint8_t len){
#line 64
  unsigned char result;
#line 64

#line 64
  result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(3U, msg, len);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 151 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMPacket__setType(message_t * amsg, am_id_t t){
#line 151
  CC2420ActiveMessageP__AMPacket__setType(amsg, t);
#line 151
}
#line 151
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 281
{
  uint8_t *base = target;

#line 283
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

# 114 "/opt/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline cc2420_header_t * CC2420PacketP__CC2420PacketBody__getHeader(message_t * msg)
#line 114
{
  return (cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
}

# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420ActiveMessageP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 136 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__AMPacket__setDestination(message_t *amsg, am_addr_t addr)
#line 136
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(amsg);

#line 138
  __nesc_hton_leuint16(header->dest.data, addr);
}

# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 92
  CC2420ActiveMessageP__AMPacket__setDestination(amsg, addr);
#line 92
}
#line 92
# 45 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMPacket__setDestination(msg, dest);
  /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMPacket__setType(msg, 112);
  return /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__Send__send(msg, len);
}

# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t LinkEstimatorP__AMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__send(addr, msg, len);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 170 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline uint8_t CC2420CsmaP__Send__maxPayloadLength(void )
#line 170
{
  return 28;
}

# 101 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static uint8_t UniqueSendP__SubSend__maxPayloadLength(void ){
#line 101
  unsigned char result;
#line 101

#line 101
  result = CC2420CsmaP__Send__maxPayloadLength();
#line 101

#line 101
  return result;
#line 101
}
#line 101
# 95 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline uint8_t UniqueSendP__Send__maxPayloadLength(void )
#line 95
{
  return UniqueSendP__SubSend__maxPayloadLength();
}

# 101 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static uint8_t CC2420TinyosNetworkP__SubSend__maxPayloadLength(void ){
#line 101
  unsigned char result;
#line 101

#line 101
  result = UniqueSendP__Send__maxPayloadLength();
#line 101

#line 101
  return result;
#line 101
}
#line 101
# 82 "/opt/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline uint8_t CC2420TinyosNetworkP__ActiveSend__maxPayloadLength(void )
#line 82
{
  return CC2420TinyosNetworkP__SubSend__maxPayloadLength();
}

# 101 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static uint8_t CC2420ActiveMessageP__SubSend__maxPayloadLength(void ){
#line 101
  unsigned char result;
#line 101

#line 101
  result = CC2420TinyosNetworkP__ActiveSend__maxPayloadLength();
#line 101

#line 101
  return result;
#line 101
}
#line 101
# 189 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline uint8_t CC2420ActiveMessageP__Packet__maxPayloadLength(void )
#line 189
{
  return CC2420ActiveMessageP__SubSend__maxPayloadLength();
}

# 95 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t LinkEstimatorP__SubPacket__maxPayloadLength(void ){
#line 95
  unsigned char result;
#line 95

#line 95
  result = CC2420ActiveMessageP__Packet__maxPayloadLength();
#line 95

#line 95
  return result;
#line 95
}
#line 95
# 101 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline linkest_footer_t *LinkEstimatorP__getFooter(message_t *m, uint8_t len)
#line 101
{

  return (linkest_footer_t *)(len + (uint8_t *)LinkEstimatorP__Packet__getPayload(m, len + sizeof(linkest_footer_t )));
}

# 86 "/opt/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void *CC2420TinyosNetworkP__ActiveSend__getPayload(message_t *msg, uint8_t len)
#line 86
{
  if (len <= CC2420TinyosNetworkP__ActiveSend__maxPayloadLength()) {
      return msg->data;
    }
  else 
#line 89
    {
      return (void *)0;
    }
}

# 114 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void * CC2420ActiveMessageP__SubSend__getPayload(message_t * msg, uint8_t len){
#line 114
  void *result;
#line 114

#line 114
  result = CC2420TinyosNetworkP__ActiveSend__getPayload(msg, len);
#line 114

#line 114
  return result;
#line 114
}
#line 114
# 193 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void *CC2420ActiveMessageP__Packet__getPayload(message_t *msg, uint8_t len)
#line 193
{
  return CC2420ActiveMessageP__SubSend__getPayload(msg, len);
}

# 115 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void * LinkEstimatorP__SubPacket__getPayload(message_t * msg, uint8_t len){
#line 115
  void *result;
#line 115

#line 115
  result = CC2420ActiveMessageP__Packet__getPayload(msg, len);
#line 115

#line 115
  return result;
#line 115
}
#line 115
# 96 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline linkest_header_t *LinkEstimatorP__getHeader(message_t *m)
#line 96
{
  return (linkest_header_t *)LinkEstimatorP__SubPacket__getPayload(m, sizeof(linkest_header_t ));
}










static inline uint8_t LinkEstimatorP__addLinkEstHeaderAndFooter(message_t *msg, uint8_t len)
#line 109
{
  unsigned char *__nesc_temp50;
#line 110
  uint8_t newlen;
  linkest_header_t * hdr;
  linkest_footer_t * footer;
  uint8_t i;
#line 113
  uint8_t j;
#line 113
  uint8_t k;
  uint8_t maxEntries;
#line 114
  uint8_t newPrevSentIdx;

#line 115
  ;
  hdr = LinkEstimatorP__getHeader(msg);
  footer = LinkEstimatorP__getFooter(msg, len);

  maxEntries = (LinkEstimatorP__SubPacket__maxPayloadLength() - len - sizeof(linkest_header_t ))
   / sizeof(linkest_footer_t );



  if (maxEntries > NUM_ENTRIES_FLAG) {
      maxEntries = NUM_ENTRIES_FLAG;
    }
  ;

  j = 0;
  newPrevSentIdx = 0;
  for (i = 0; i < 10 && j < maxEntries; i++) {
      uint8_t neighborCount;
      neighbor_stat_entry_t * neighborLists;

#line 134
      if (maxEntries <= 10) {
        neighborCount = maxEntries;
        }
      else {
#line 137
        neighborCount = 10;
        }
      neighborLists = (neighbor_stat_entry_t * )footer->neighborList;
      k = (LinkEstimatorP__prevSentIdx + i + 1) % 10;
      if (LinkEstimatorP__NeighborTable[k].flags & VALID_ENTRY && 
      LinkEstimatorP__NeighborTable[k].flags & MATURE_ENTRY) {
          __nesc_hton_uint16(neighborLists[j].ll_addr.data, LinkEstimatorP__NeighborTable[k].ll_addr);
          __nesc_hton_uint8(neighborLists[j].inquality.data, LinkEstimatorP__NeighborTable[k].inquality);
          newPrevSentIdx = k;
          ;

          j++;
        }
    }
  LinkEstimatorP__prevSentIdx = newPrevSentIdx;

  __nesc_hton_uint8(hdr->seq.data, LinkEstimatorP__linkEstSeq++);
  __nesc_hton_uint8(hdr->flags.data, 0);
  (__nesc_temp50 = hdr->flags.data, __nesc_hton_uint8(__nesc_temp50, __nesc_ntoh_uint8(__nesc_temp50) | (NUM_ENTRIES_FLAG & j)));
  newlen = sizeof(linkest_header_t ) + len + j * sizeof(linkest_footer_t );
  ;
  return newlen;
}

#line 556
static inline error_t LinkEstimatorP__Send__send(am_addr_t addr, message_t *msg, uint8_t len)
#line 556
{
  uint8_t newlen;

#line 558
  newlen = LinkEstimatorP__addLinkEstHeaderAndFooter(msg, len);
  ;
  ;
  LinkEstimatorP__print_packet(msg, newlen);
  return LinkEstimatorP__AMSend__send(addr, msg, newlen);
}

# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char result;
#line 69

#line 69
  result = LinkEstimatorP__Send__send(addr, msg, len);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 780 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__default__logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t etx)
#line 780
{
  return SUCCESS;
}

# 68 "/opt/tinyos-2.x/tos/lib/net/CollectionDebug.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t metric){
#line 68
  unsigned char result;
#line 68

#line 68
  result = /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__default__logEventRoute(type, parent, hopcount, metric);
#line 68

#line 68
  return result;
#line 68
}
#line 68
# 760 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpCongestion__isCongested(void )
#line 760
{
  return FALSE;
}

# 7 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpCongestion.nc"
inline static bool /*CtpP.Router*/CtpRoutingEngineP__0__CtpCongestion__isCongested(void ){
#line 7
  unsigned char result;
#line 7

#line 7
  result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpCongestion__isCongested();
#line 7

#line 7
  return result;
#line 7
}
#line 7
# 381 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask__runTask(void )
#line 381
{
  unsigned char *__nesc_temp52;
  unsigned char *__nesc_temp51;
#line 382
  error_t eval;

#line 383
  if (/*CtpP.Router*/CtpRoutingEngineP__0__sending) {
      return;
    }

  __nesc_hton_uint8(/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg->options.data, 0);


  if (/*CtpP.Router*/CtpRoutingEngineP__0__CtpCongestion__isCongested()) {
      (__nesc_temp51 = /*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg->options.data, __nesc_hton_uint8(__nesc_temp51, __nesc_ntoh_uint8(__nesc_temp51) | CTP_OPT_ECN));
    }

  __nesc_hton_uint16(/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg->parent.data, /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent);
  if (/*CtpP.Router*/CtpRoutingEngineP__0__state_is_root) {
      __nesc_hton_uint16(/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg->etx.data, /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.etx);
    }
  else {
#line 398
    if (/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent == INVALID_ADDR) {
        __nesc_hton_uint16(/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg->etx.data, /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.etx);
        (__nesc_temp52 = /*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg->options.data, __nesc_hton_uint8(__nesc_temp52, __nesc_ntoh_uint8(__nesc_temp52) | CTP_OPT_PULL));
      }
    else 
#line 401
      {
        __nesc_hton_uint16(/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg->etx.data, /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.etx + 
        /*CtpP.Router*/CtpRoutingEngineP__0__evaluateEtx(/*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__getLinkQuality(/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent)));
      }
    }
  ;



  /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__logEventRoute(NET_C_TREE_SENT_BEACON, __nesc_ntoh_uint16(/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg->parent.data), 0, __nesc_ntoh_uint16(/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg->etx.data));

  eval = /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__send(AM_BROADCAST_ADDR, 
  &/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsgBuffer, 
  sizeof(ctp_routing_header_t ));
  if (eval == SUCCESS) {
      /*CtpP.Router*/CtpRoutingEngineP__0__sending = TRUE;
    }
  else {
#line 417
    if (eval == EOFF) {
        /*CtpP.Router*/CtpRoutingEngineP__0__radioOn = FALSE;
        ;
      }
    }
}

# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(message_t * msg, uint8_t len){
#line 83
  CC2420ActiveMessageP__Packet__setPayloadLength(msg, len);
#line 83
}
#line 83
# 136 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(message_t * amsg){
#line 136
  unsigned char result;
#line 136

#line 136
  result = CC2420ActiveMessageP__AMPacket__type(amsg);
#line 136

#line 136
  return result;
#line 136
}
#line 136
#line 67
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(message_t * amsg){
#line 67
  unsigned short result;
#line 67

#line 67
  result = CC2420ActiveMessageP__AMPacket__destination(amsg);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(am_id_t arg_0x40e83650, am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char result;
#line 69

#line 69
  result = CC2420ActiveMessageP__AMSend__send(arg_0x40e83650, addr, msg, len);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 287 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline uint16_t CC2420ControlP__CC2420Config__getPanAddr(void )
#line 287
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 288
    {
      unsigned short __nesc_temp = 
#line 288
      CC2420ControlP__m_pan;

      {
#line 288
        __nesc_atomic_end(__nesc_atomic); 
#line 288
        return __nesc_temp;
      }
    }
#line 290
    __nesc_atomic_end(__nesc_atomic); }
}

# 70 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static uint16_t CC2420ActiveMessageP__CC2420Config__getPanAddr(void ){
#line 70
  unsigned short result;
#line 70

#line 70
  result = CC2420ControlP__CC2420Config__getPanAddr();
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static bool CC2420TinyosNetworkP__Queue__isEmpty(void ){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 182 "/opt/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP__Resource__immediateRequest(uint8_t id)
#line 182
{
  if (CC2420TinyosNetworkP__resource_owner == id) {
#line 183
    return EALREADY;
    }
  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      if (CC2420TinyosNetworkP__resource_owner == CC2420TinyosNetworkP__OWNER_NONE && CC2420TinyosNetworkP__Queue__isEmpty()) {
          CC2420TinyosNetworkP__resource_owner = id;
          return SUCCESS;
        }
      return FAIL;
    }
  else 
#line 191
    {
      CC2420TinyosNetworkP__resource_owner = id;
      return SUCCESS;
    }
}

# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ActiveMessageP__RadioResource__immediateRequest(void ){
#line 87
  unsigned char result;
#line 87

#line 87
  result = CC2420TinyosNetworkP__Resource__immediateRequest(CC2420ActiveMessageC__CC2420_AM_SEND_ID);
#line 87

#line 87
  return result;
#line 87
}
#line 87
# 278 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SendNotifier__default__aboutToSend(am_id_t amId, am_addr_t addr, message_t *msg)
#line 278
{
}

# 59 "/opt/tinyos-2.x/tos/interfaces/SendNotifier.nc"
inline static void CC2420ActiveMessageP__SendNotifier__aboutToSend(am_id_t arg_0x40ba0e20, am_addr_t dest, message_t * msg){
#line 59
    CC2420ActiveMessageP__SendNotifier__default__aboutToSend(arg_0x40ba0e20, dest, msg);
#line 59
}
#line 59
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t CC2420TinyosNetworkP__SubSend__send(message_t * msg, uint8_t len){
#line 64
  unsigned char result;
#line 64

#line 64
  result = UniqueSendP__Send__send(msg, len);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 77 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Packet.nc"
inline static void CC2420TinyosNetworkP__CC2420Packet__setNetwork(message_t *p_msg, uint8_t networkId){
#line 77
  CC2420PacketP__CC2420Packet__setNetwork(p_msg, networkId);
#line 77
}
#line 77
# 73 "/opt/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP__ActiveSend__send(message_t *msg, uint8_t len)
#line 73
{
  CC2420TinyosNetworkP__CC2420Packet__setNetwork(msg, 0x3f);
  return CC2420TinyosNetworkP__SubSend__send(msg, len);
}

# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t CC2420ActiveMessageP__SubSend__send(message_t * msg, uint8_t len){
#line 64
  unsigned char result;
#line 64

#line 64
  result = CC2420TinyosNetworkP__ActiveSend__send(msg, len);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 45 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static error_t UniqueSendP__State__requestState(uint8_t reqState){
#line 45
  unsigned char result;
#line 45

#line 45
  result = StateImplP__State__requestState(2U, reqState);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * UniqueSendP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 301 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 301
{
  uint8_t *base = target;

#line 303
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

#line 257
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 257
{
#line 257
  __nesc_hton_uint8(target, value);
#line 257
  return value;
}

#line 276
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 276
{
  const uint8_t *base = source;

#line 278
  return ((uint16_t )base[1] << 8) | base[0];
}

#line 251
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
#line 251
{
  uint8_t *base = target;

#line 253
  base[0] = value;
  return value;
}

# 545 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__send(message_t * p_msg, bool cca)
#line 545
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 546
    {
      if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
          {
            unsigned char __nesc_temp = 
#line 548
            ECANCEL;

            {
#line 548
              __nesc_atomic_end(__nesc_atomic); 
#line 548
              return __nesc_temp;
            }
          }
        }
#line 551
      if (CC2420TransmitP__m_state != CC2420TransmitP__S_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 552
            FAIL;

            {
#line 552
              __nesc_atomic_end(__nesc_atomic); 
#line 552
              return __nesc_temp;
            }
          }
        }


      CC2420TransmitP__m_state = CC2420TransmitP__S_LOAD;
      CC2420TransmitP__m_cca = cca;
      CC2420TransmitP__m_msg = p_msg;
      CC2420TransmitP__totalCcaChecks = 0;
    }
#line 562
    __nesc_atomic_end(__nesc_atomic); }

  if (CC2420TransmitP__acquireSpiResource() == SUCCESS) {
      CC2420TransmitP__loadTXFIFO();
    }

  return SUCCESS;
}

#line 192
static inline error_t CC2420TransmitP__Send__send(message_t * p_msg, bool useCca)
#line 192
{
  return CC2420TransmitP__send(p_msg, useCca);
}

# 51 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static error_t CC2420CsmaP__CC2420Transmit__send(message_t * p_msg, bool useCca){
#line 51
  unsigned char result;
#line 51

#line 51
  result = CC2420TransmitP__Send__send(p_msg, useCca);
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 246 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_leuint8(const void * source)
#line 246
{
  const uint8_t *base = source;

#line 248
  return base[0];
}

# 288 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCca(am_id_t id, 
message_t *msg)
#line 289
{
}

# 95 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP__RadioBackoff__requestCca(am_id_t arg_0x40b9f4b8, message_t * msg){
#line 95
    CC2420ActiveMessageP__RadioBackoff__default__requestCca(arg_0x40b9f4b8, msg);
#line 95
}
#line 95
# 237 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SubBackoff__requestCca(message_t *msg)
#line 237
{

  CC2420ActiveMessageP__RadioBackoff__requestCca(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.data), msg);
}

# 95 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__RadioBackoff__requestCca(message_t * msg){
#line 95
  CC2420ActiveMessageP__SubBackoff__requestCca(msg);
#line 95
}
#line 95
# 111 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static inline void StateImplP__State__forceState(uint8_t id, uint8_t reqState)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    StateImplP__state[id] = reqState;
#line 112
    __nesc_atomic_end(__nesc_atomic); }
}

# 51 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static void CC2420CsmaP__SplitControlState__forceState(uint8_t reqState){
#line 51
  StateImplP__State__forceState(1U, reqState);
#line 51
}
#line 51
#line 66
inline static bool CC2420CsmaP__SplitControlState__isState(uint8_t myState){
#line 66
  unsigned char result;
#line 66

#line 66
  result = StateImplP__State__isState(1U, myState);
#line 66

#line 66
  return result;
#line 66
}
#line 66
# 118 "/opt/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline cc2420_metadata_t *CC2420PacketP__CC2420PacketBody__getMetadata(message_t *msg)
#line 118
{
  return (cc2420_metadata_t *)msg->metadata;
}

# 47 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420CsmaP__CC2420PacketBody__getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *result;
#line 47

#line 47
  result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 47

#line 47
  return result;
#line 47
}
#line 47
#line 42
inline static cc2420_header_t * CC2420CsmaP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 122 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline error_t CC2420CsmaP__Send__send(message_t *p_msg, uint8_t len)
#line 122
{
  unsigned char *__nesc_temp43;
  unsigned char *__nesc_temp42;
#line 124
  cc2420_header_t *header = CC2420CsmaP__CC2420PacketBody__getHeader(p_msg);
  cc2420_metadata_t *metadata = CC2420CsmaP__CC2420PacketBody__getMetadata(p_msg);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 127
    {
      if (!CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTED)) {
          {
            unsigned char __nesc_temp = 
#line 129
            FAIL;

            {
#line 129
              __nesc_atomic_end(__nesc_atomic); 
#line 129
              return __nesc_temp;
            }
          }
        }
#line 132
      CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_TRANSMITTING);
      CC2420CsmaP__m_msg = p_msg;
    }
#line 134
    __nesc_atomic_end(__nesc_atomic); }

  __nesc_hton_leuint8(header->length.data, len + CC2420_SIZE);



  (__nesc_temp42 = header->fcf.data, __nesc_hton_leuint16(__nesc_temp42, __nesc_ntoh_leuint16(__nesc_temp42) & (1 << IEEE154_FCF_ACK_REQ)));

  (__nesc_temp43 = header->fcf.data, __nesc_hton_leuint16(__nesc_temp43, __nesc_ntoh_leuint16(__nesc_temp43) | ((((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE) | (
  1 << IEEE154_FCF_INTRAPAN)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE))));

  __nesc_hton_int8(metadata->ack.data, FALSE);
  __nesc_hton_uint8(metadata->rssi.data, 0);
  __nesc_hton_uint8(metadata->lqi.data, 0);

  __nesc_hton_uint32(metadata->timestamp.data, CC2420_INVALID_TIMESTAMP);

  CC2420CsmaP__ccaOn = TRUE;
  CC2420CsmaP__RadioBackoff__requestCca(CC2420CsmaP__m_msg);

  CC2420CsmaP__CC2420Transmit__send(CC2420CsmaP__m_msg, CC2420CsmaP__ccaOn);
  return SUCCESS;
}

# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t UniqueSendP__SubSend__send(message_t * msg, uint8_t len){
#line 64
  unsigned char result;
#line 64

#line 64
  result = CC2420CsmaP__Send__send(msg, len);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP__SpiResource__immediateRequest(void ){
#line 87
  unsigned char result;
#line 87

#line 87
  result = CC2420SpiP__Resource__immediateRequest(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
#line 87

#line 87
  return result;
#line 87
}
#line 87
# 45 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static error_t CC2420SpiP__WorkingState__requestState(uint8_t reqState){
#line 45
  unsigned char result;
#line 45

#line 45
  result = StateImplP__State__requestState(0U, reqState);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static bool Atm128SpiP__ResourceArbiter__isOwner(uint8_t arg_0x40824068){
#line 118
  unsigned char result;
#line 118

#line 118
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__isOwner(arg_0x40824068);
#line 118

#line 118
  return result;
#line 118
}
#line 118
# 366 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline uint8_t Atm128SpiP__Resource__isOwner(uint8_t id)
#line 366
{
  return Atm128SpiP__ResourceArbiter__isOwner(id);
}

# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static bool HplCC2420SpiP__SubResource__isOwner(void ){
#line 118
  unsigned char result;
#line 118

#line 118
  result = Atm128SpiP__Resource__isOwner(0U);
#line 118

#line 118
  return result;
#line 118
}
#line 118
# 83 "/opt/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline bool HplCC2420SpiP__Resource__isOwner(void )
{
  return HplCC2420SpiP__SubResource__isOwner();
}

# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static bool CC2420SpiP__SpiResource__isOwner(void ){
#line 118
  unsigned char result;
#line 118

#line 118
  result = HplCC2420SpiP__Resource__isOwner();
#line 118

#line 118
  return result;
#line 118
}
#line 118
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )56U &= ~(1 << 0);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplCC2420SpiP__SS__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr();
#line 30
}
#line 30
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )55U |= 1 << 0;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplCC2420SpiP__SS__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 35
}
#line 35
# 171 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 171
{
}

# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x408b9c60){
#line 49
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(arg_0x408b9c60);
#line 49
}
#line 49
# 169 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id)
#line 169
{
}

# 51 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(uint8_t arg_0x408b9030){
#line 51
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(arg_0x408b9030);
#line 51
}
#line 51
# 84 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(uint8_t id)
#line 84
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  /* atomic removed: atomic calls only */
#line 86
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = id;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
        {
          unsigned char __nesc_temp = 
#line 91
          SUCCESS;

#line 91
          return __nesc_temp;
        }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      FAIL;

#line 93
      return __nesc_temp;
    }
  }
}

# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP__ResourceArbiter__immediateRequest(uint8_t arg_0x40824068){
#line 87
  unsigned char result;
#line 87

#line 87
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(arg_0x40824068);
#line 87

#line 87
  return result;
#line 87
}
#line 87
# 339 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP__Resource__immediateRequest(uint8_t id)
#line 339
{
  error_t result = Atm128SpiP__ResourceArbiter__immediateRequest(id);

#line 341
  if (result == SUCCESS) {
      Atm128SpiP__startSpi();
    }
  return result;
}

# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t HplCC2420SpiP__SubResource__immediateRequest(void ){
#line 87
  unsigned char result;
#line 87

#line 87
  result = Atm128SpiP__Resource__immediateRequest(0U);
#line 87

#line 87
  return result;
#line 87
}
#line 87
# 56 "/opt/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP__Resource__immediateRequest(void )
{
  error_t error = HplCC2420SpiP__SubResource__immediateRequest();

#line 59
  if (error == SUCCESS) 
    {
      HplCC2420SpiP__SS__makeOutput();
      HplCC2420SpiP__SS__clr();
    }
  return error;
}

# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__immediateRequest(void ){
#line 87
  unsigned char result;
#line 87

#line 87
  result = HplCC2420SpiP__Resource__immediateRequest();
#line 87

#line 87
  return result;
#line 87
}
#line 87
# 110 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
#line 110
{
}

# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128SpiP__Mcu__update(void ){
#line 44
  McuSleepC__McuPowerState__update();
#line 44
}
#line 44
# 156 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setMasterBit(bool isMaster)
#line 156
{
  if (isMaster) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 4;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 4);
    }
}

# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )55U |= 1 << 1;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__SCK__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput();
#line 35
}
#line 35
# 50 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )55U &= ~(1 << 3);
}

# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__MISO__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput();
#line 33
}
#line 33
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )55U |= 1 << 2;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__MOSI__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput();
#line 35
}
#line 35
# 79 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__initMaster(void )
#line 79
{
  HplAtm128SpiP__MOSI__makeOutput();
  HplAtm128SpiP__MISO__makeInput();
  HplAtm128SpiP__SCK__makeOutput();
  HplAtm128SpiP__SPI__setMasterBit(TRUE);
}

# 66 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__initMaster(void ){
#line 66
  HplAtm128SpiP__SPI__initMaster();
#line 66
}
#line 66
# 213 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on)
#line 213
{
  if (on) {
      * (volatile uint8_t *)(0x0E + 0x20) |= 1 << 0;
    }
  else {
      * (volatile uint8_t *)(0x0E + 0x20) &= ~(1 << 0);
    }
}

# 125 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setMasterDoubleSpeed(bool on){
#line 125
  HplAtm128SpiP__SPI__setMasterDoubleSpeed(on);
#line 125
}
#line 125
# 169 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle)
#line 169
{
  if (highWhenIdle) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 3;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 3);
    }
}

# 108 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClockPolarity(bool highWhenIdle){
#line 108
  HplAtm128SpiP__SPI__setClockPolarity(highWhenIdle);
#line 108
}
#line 108
# 183 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing)
#line 183
{
  if (sampleOnTrailing) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 2;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 2);
    }
}

# 111 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClockPhase(bool sampleOnTrailing){
#line 111
  HplAtm128SpiP__SPI__setClockPhase(sampleOnTrailing);
#line 111
}
#line 111
# 200 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClock(uint8_t v)
#line 200
{
  v &= 1 | 0;
  * (volatile uint8_t *)(0x0D + 0x20) = (* (volatile uint8_t *)(0x0D + 0x20) & ~(1 | 0)) | v;
}

# 114 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClock(uint8_t speed){
#line 114
  HplAtm128SpiP__SPI__setClock(speed);
#line 114
}
#line 114
# 118 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static inline void StateImplP__State__toIdle(uint8_t id)
#line 118
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 119
    StateImplP__state[id] = StateImplP__S_IDLE;
#line 119
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static void CC2420SpiP__WorkingState__toIdle(void ){
#line 56
  StateImplP__State__toIdle(0U);
#line 56
}
#line 56
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP__SpiResource__request(void ){
#line 78
  unsigned char result;
#line 78

#line 78
  result = CC2420SpiP__Resource__request(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 54 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 54
{
  /* atomic removed: atomic calls only */
#line 55
  {
    unsigned char __nesc_temp = 
#line 55
    /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[id] != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY || /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail == id;

#line 55
    return __nesc_temp;
  }
}

#line 72
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id)
#line 72
{
  /* atomic removed: atomic calls only */
#line 73
  {
    if (!/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(id)) {
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = id;
          }
        else {
#line 78
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail] = id;
          }
#line 79
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 80
          SUCCESS;

#line 80
          return __nesc_temp;
        }
      }
#line 82
    {
      unsigned char __nesc_temp = 
#line 82
      EBUSY;

#line 82
      return __nesc_temp;
    }
  }
}

# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(id);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 167 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 167
{
}

# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(uint8_t arg_0x408b9030){
#line 43
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(arg_0x408b9030);
#line 43
}
#line 43
# 71 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id)
#line 71
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  /* atomic removed: atomic calls only */
#line 73
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId = id;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
        {
          unsigned char __nesc_temp = 
#line 78
          SUCCESS;

#line 78
          return __nesc_temp;
        }
      }
#line 80
    {
      unsigned char __nesc_temp = 
#line 80
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(id);

#line 80
      return __nesc_temp;
    }
  }
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP__ResourceArbiter__request(uint8_t arg_0x40824068){
#line 78
  unsigned char result;
#line 78

#line 78
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(arg_0x40824068);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 80 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
inline static bool Atm128SpiP__ArbiterInfo__inUse(void ){
#line 80
  unsigned char result;
#line 80

#line 80
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse();
#line 80

#line 80
  return result;
#line 80
}
#line 80
# 347 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP__Resource__request(uint8_t id)
#line 347
{
  /* atomic removed: atomic calls only */
#line 348
  {
    if (!Atm128SpiP__ArbiterInfo__inUse()) {
        Atm128SpiP__startSpi();
      }
  }
  return Atm128SpiP__ResourceArbiter__request(id);
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t HplCC2420SpiP__SubResource__request(void ){
#line 78
  unsigned char result;
#line 78

#line 78
  result = Atm128SpiP__Resource__request(0U);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 51 "/opt/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP__Resource__request(void )
{
  return HplCC2420SpiP__SubResource__request();
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__request(void ){
#line 78
  unsigned char result;
#line 78

#line 78
  result = HplCC2420SpiP__Resource__request();
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420TransmitP__TXCTRL__write(uint16_t data){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP__Reg__write(CC2420_TXCTRL, data);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 99 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__write(uint8_t d)
#line 99
{
#line 99
  * (volatile uint8_t *)(0x0F + 0x20) = d;
}

# 86 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__write(uint8_t data){
#line 86
  HplAtm128SpiP__SPI__write(data);
#line 86
}
#line 86
# 59 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
inline static error_t CC2420SpiP__SpiPacket__send(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len){
#line 59
  unsigned char result;
#line 59

#line 59
  result = Atm128SpiP__SpiPacket__send(txBuf, rxBuf, len);
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 34 "/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
inline static uint8_t CC2420SpiP__SpiByte__write(uint8_t tx){
#line 34
  unsigned char result;
#line 34

#line 34
  result = Atm128SpiP__SpiByte__write(tx);
#line 34

#line 34
  return result;
#line 34
}
#line 34
# 126 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static inline bool StateImplP__State__isIdle(uint8_t id)
#line 126
{
  return StateImplP__State__isState(id, StateImplP__S_IDLE);
}

# 61 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static bool CC2420SpiP__WorkingState__isIdle(void ){
#line 61
  unsigned char result;
#line 61

#line 61
  result = StateImplP__State__isIdle(0U);
#line 61

#line 61
  return result;
#line 61
}
#line 61
# 214 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP__Fifo__write(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 215
{

  uint8_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 219
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 221
            status;

            {
#line 221
              __nesc_atomic_end(__nesc_atomic); 
#line 221
              return __nesc_temp;
            }
          }
        }
    }
#line 225
    __nesc_atomic_end(__nesc_atomic); }
#line 225
  CC2420SpiP__m_addr = addr;

  status = CC2420SpiP__SpiByte__write(CC2420SpiP__m_addr);
  CC2420SpiP__SpiPacket__send(data, (void *)0, len);

  return status;
}

# 82 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static cc2420_status_t CC2420TransmitP__TXFIFO__write(uint8_t * data, uint8_t length){
#line 82
  unsigned char result;
#line 82

#line 82
  result = CC2420SpiP__Fifo__write(CC2420_TXFIFO, data, length);
#line 82

#line 82
  return result;
#line 82
}
#line 82
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t Atm128SpiP__zeroTask__postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(Atm128SpiP__zeroTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 54 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 54
{
  /* atomic removed: atomic calls only */
#line 55
  {
    unsigned char __nesc_temp = 
#line 55
    /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[id] != /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY || /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail == id;

#line 55
    return __nesc_temp;
  }
}

#line 72
static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id)
#line 72
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 73
    {
      if (!/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(id)) {
          if (/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead == /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY) {
            /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead = id;
            }
          else {
#line 78
            /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail] = id;
            }
#line 79
          /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail = id;
          {
            unsigned char __nesc_temp = 
#line 80
            SUCCESS;

            {
#line 80
              __nesc_atomic_end(__nesc_atomic); 
#line 80
              return __nesc_temp;
            }
          }
        }
#line 82
      {
        unsigned char __nesc_temp = 
#line 82
        EBUSY;

        {
#line 82
          __nesc_atomic_end(__nesc_atomic); 
#line 82
          return __nesc_temp;
        }
      }
    }
#line 85
    __nesc_atomic_end(__nesc_atomic); }
}

# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static error_t CC2420TinyosNetworkP__Queue__enqueue(resource_client_id_t id){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(id);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420TinyosNetworkP__grantTask__postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(CC2420TinyosNetworkP__grantTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 166 "/opt/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP__Resource__request(uint8_t id)
#line 166
{

  CC2420TinyosNetworkP__grantTask__postTask();

  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      return CC2420TinyosNetworkP__Queue__enqueue(id);
    }
  else 
#line 172
    {
      if (id == CC2420TinyosNetworkP__resource_owner) {
          return EALREADY;
        }
      else 
#line 175
        {
          CC2420TinyosNetworkP__next_owner = id;
          return SUCCESS;
        }
    }
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ActiveMessageP__RadioResource__request(void ){
#line 78
  unsigned char result;
#line 78

#line 78
  result = CC2420TinyosNetworkP__Resource__request(CC2420ActiveMessageC__CC2420_AM_SEND_ID);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 885 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__default__logEvent(uint8_t type)
#line 885
{
  return SUCCESS;
}

# 50 "/opt/tinyos-2.x/tos/lib/net/CollectionDebug.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(uint8_t type){
#line 50
  unsigned char result;
#line 50

#line 50
  result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__default__logEvent(type);
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 95 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__maxPayloadLength(void ){
#line 95
  unsigned char result;
#line 95

#line 95
  result = CC2420ActiveMessageP__Packet__maxPayloadLength();
#line 95

#line 95
  return result;
#line 95
}
#line 95
# 785 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__maxPayloadLength(void )
#line 785
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__maxPayloadLength() - sizeof(ctp_data_header_t );
}

# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__setPayloadLength(message_t * msg, uint8_t len){
#line 83
  CC2420ActiveMessageP__Packet__setPayloadLength(msg, len);
#line 83
}
#line 83
# 781 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__setPayloadLength(message_t *msg, uint8_t len)
#line 781
{
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__setPayloadLength(msg, len + sizeof(ctp_data_header_t ));
}

#line 849
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__setState(uint8_t state)
#line 849
{
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__forwardingState = /*CtpP.Forwarder*/CtpForwardingEngineP__0__forwardingState | state;
}

# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__send(message_t * msg, uint8_t len){
#line 64
  unsigned char result;
#line 64

#line 64
  result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(2U, msg, len);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 151 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setType(message_t * amsg, am_id_t t){
#line 151
  CC2420ActiveMessageP__AMPacket__setType(amsg, t);
#line 151
}
#line 151
#line 92
inline static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 92
  CC2420ActiveMessageP__AMPacket__setDestination(amsg, addr);
#line 92
}
#line 92
# 45 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setDestination(msg, dest);
  /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setType(msg, 113);
  return /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__send(msg, len);
}

# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__send(addr, msg, len);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 843 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__clearState(uint8_t state)
#line 843
{
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__forwardingState = /*CtpP.Forwarder*/CtpForwardingEngineP__0__forwardingState & ~state;
}

#line 285
static inline ctp_data_header_t */*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(message_t *m)
#line 285
{
  return (ctp_data_header_t *)/*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__getPayload(m, sizeof(ctp_data_header_t ));
}

#line 819
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setOption(message_t *msg, ctp_options_t opt)
#line 819
{
  unsigned char *__nesc_temp48;

#line 820
  (__nesc_temp48 = /*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->options.data, __nesc_hton_uint8(__nesc_temp48, __nesc_ntoh_uint8(__nesc_temp48) | opt));
}

#line 846
static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__hasState(uint8_t state)
#line 846
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP__0__forwardingState & state;
}

# 65 "/opt/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline error_t CC2420PacketP__Acks__requestAck(message_t *p_msg)
#line 65
{
  unsigned char *__nesc_temp46;

#line 66
  (__nesc_temp46 = CC2420PacketP__CC2420PacketBody__getHeader(p_msg)->fcf.data, __nesc_hton_leuint16(__nesc_temp46, __nesc_ntoh_leuint16(__nesc_temp46) | (1 << IEEE154_FCF_ACK_REQ)));
  return SUCCESS;
}

# 48 "/opt/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__PacketAcknowledgements__requestAck(message_t * msg){
#line 48
  unsigned char result;
#line 48

#line 48
  result = CC2420PacketP__Acks__requestAck(msg);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 822 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__clearOption(message_t *msg, ctp_options_t opt)
#line 822
{
  unsigned char *__nesc_temp49;

#line 823
  (__nesc_temp49 = /*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->options.data, __nesc_hton_uint8(__nesc_temp49, __nesc_ntoh_uint8(__nesc_temp49) & ~opt));
}

#line 814
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setEtx(message_t *msg, uint16_t e)
#line 814
{
#line 814
  __nesc_hton_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->etx.data, e);
}

#line 865
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP__0__Receive__default__receive(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len)
#line 867
{
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*CtpP.Forwarder*/CtpForwardingEngineP__0__Receive__receive(collection_id_t arg_0x40f90598, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x40f90598) {
#line 67
    case COL_ALERTS:
#line 67
      result = AntiTheftRootC__AlertsReceive__receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Receive__default__receive(arg_0x40f90598, msg, payload, len);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__payloadLength(message_t * msg){
#line 67
  unsigned char result;
#line 67

#line 67
  result = CC2420ActiveMessageP__Packet__payloadLength(msg);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 777 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__payloadLength(message_t *msg)
#line 777
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__payloadLength(msg) - sizeof(ctp_data_header_t );
}

# 619 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline bool /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__isRoot(void )
#line 619
{
  return /*CtpP.Router*/CtpRoutingEngineP__0__state_is_root;
}

# 43 "/opt/tinyos-2.x/tos/lib/net/RootControl.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__RootControl__isRoot(void ){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__isRoot();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 89 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__put(/*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__t * newVal){
#line 89
  unsigned char result;
#line 89

#line 89
  result = /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__put(newVal);
#line 89

#line 89
  return result;
#line 89
}
#line 89
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__put(/*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__t * newVal){
#line 89
  unsigned char result;
#line 89

#line 89
  result = /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__put(newVal);
#line 89

#line 89
  return result;
#line 89
}
#line 89
# 81 "/opt/tinyos-2.x/tos/interfaces/Queue.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__t  /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__dequeue(void ){
#line 81
  struct __nesc_unnamed4329 *result;
#line 81

#line 81
  result = /*CtpP.SendQueueP*/QueueC__0__Queue__dequeue();
#line 81

#line 81
  return result;
#line 81
}
#line 81
# 135 "/opt/tinyos-2.x/tos/lib/net/ctp/LruCtpMsgCacheP.nc"
static inline bool /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__lookup(message_t *m)
#line 135
{
  return /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__lookup(m) < /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count;
}

# 48 "/opt/tinyos-2.x/tos/interfaces/Cache.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__lookup(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__t item){
#line 48
  unsigned char result;
#line 48

#line 48
  result = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__lookup(item);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 521 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline am_addr_t /*CtpP.Router*/CtpRoutingEngineP__0__Routing__nextHop(void )
#line 521
{
  return /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent;
}

# 48 "/opt/tinyos-2.x/tos/lib/net/UnicastNameFreeRouting.nc"
inline static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__nextHop(void ){
#line 48
  unsigned short result;
#line 48

#line 48
  result = /*CtpP.Router*/CtpRoutingEngineP__0__Routing__nextHop();
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 65 "/opt/tinyos-2.x/tos/system/QueueC.nc"
static inline /*CtpP.SendQueueP*/QueueC__0__queue_t /*CtpP.SendQueueP*/QueueC__0__Queue__head(void )
#line 65
{
  return /*CtpP.SendQueueP*/QueueC__0__queue[/*CtpP.SendQueueP*/QueueC__0__head];
}

# 73 "/opt/tinyos-2.x/tos/interfaces/Queue.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__t  /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__head(void ){
#line 73
  struct __nesc_unnamed4329 *result;
#line 73

#line 73
  result = /*CtpP.SendQueueP*/QueueC__0__Queue__head();
#line 73

#line 73
  return result;
#line 73
}
#line 73
# 52 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpInfo.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__getEtx(uint16_t *etx){
#line 52
  unsigned char result;
#line 52

#line 52
  result = /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__getEtx(etx);
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 524 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline bool /*CtpP.Router*/CtpRoutingEngineP__0__Routing__hasRoute(void )
#line 524
{
  return /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent != INVALID_ADDR;
}

# 49 "/opt/tinyos-2.x/tos/lib/net/UnicastNameFreeRouting.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__hasRoute(void ){
#line 49
  unsigned char result;
#line 49

#line 49
  result = /*CtpP.Router*/CtpRoutingEngineP__0__Routing__hasRoute();
#line 49

#line 49
  return result;
#line 49
}
#line 49
# 53 "/opt/tinyos-2.x/tos/system/QueueC.nc"
static inline bool /*CtpP.SendQueueP*/QueueC__0__Queue__empty(void )
#line 53
{
  return /*CtpP.SendQueueP*/QueueC__0__size == 0;
}

# 50 "/opt/tinyos-2.x/tos/interfaces/Queue.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__empty(void ){
#line 50
  unsigned char result;
#line 50

#line 50
  result = /*CtpP.SendQueueP*/QueueC__0__Queue__empty();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 377 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__runTask(void )
#line 377
{
  uint16_t gradient;

#line 379
  ;
  if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__hasState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SENDING) || /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__empty()) {
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_SENDQUEUE_EMPTY);
      return;
    }
  else {
    if ((
#line 384
    !/*CtpP.Forwarder*/CtpForwardingEngineP__0__RootControl__isRoot() && 
    !/*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__hasRoute()) || 
    /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__getEtx(&gradient) != SUCCESS) {








        ;
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__startOneShot(NO_ROUTE_RETRY);
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_NO_ROUTE);
        return;
      }
    else {



        error_t subsendResult;
        fe_queue_entry_t *qe = /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__head();
        uint8_t payloadLen = /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__payloadLength(qe->msg);
        am_addr_t dest = /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__nextHop();

        if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__lookup(qe->msg)) {




            /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_DUPLICATE_CACHE_AT_SEND);
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__dequeue();
            if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__put(qe->msg) != SUCCESS) {
              /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_PUT_MSGPOOL_ERR);
              }
#line 418
            if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__put(qe) != SUCCESS) {
              /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_PUT_QEPOOL_ERR);
              }
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__postTask();
            return;
          }


        ;

        if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__RootControl__isRoot()) {

            collection_id_t collectid = __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(qe->msg)->type.data);
            uint8_t *payload;
            uint8_t payloadLength;

            memcpy(/*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsgPtr, qe->msg, sizeof(message_t ));

            payload = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__getPayload(/*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsgPtr, /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__payloadLength(/*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsgPtr));
            payloadLength = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__payloadLength(/*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsgPtr);
            ;
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsgPtr = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Receive__receive(collectid, /*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsgPtr, 
            payload, 
            payloadLength);
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__sendDone(qe->msg, SUCCESS);
          }
        else {

            /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setEtx(qe->msg, gradient);
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__clearOption(qe->msg, CTP_OPT_ECN | CTP_OPT_PULL);
            if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__PacketAcknowledgements__requestAck(qe->msg) == SUCCESS) {
                /*CtpP.Forwarder*/CtpForwardingEngineP__0__setState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__ACK_PENDING);
              }
            if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__hasState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__QUEUE_CONGESTED)) {
                /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setOption(qe->msg, CTP_OPT_ECN);
                /*CtpP.Forwarder*/CtpForwardingEngineP__0__clearState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__QUEUE_CONGESTED);
              }

            subsendResult = /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__send(dest, qe->msg, payloadLen);
            if (subsendResult == SUCCESS) {

                /*CtpP.Forwarder*/CtpForwardingEngineP__0__setState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SENDING);
                ;
                return;
              }
            else {
              if (subsendResult == ESIZE) {
                  ;
                  /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__setPayloadLength(qe->msg, /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__maxPayloadLength());
                  /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__postTask();
                  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_SUBSEND_SIZE);
                }
              else {
                  ;
                }
              }
          }
      }
    }
}

# 48 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )59U ^= 1 << 2;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 31 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__toggle(void ){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle();
#line 31
}
#line 31
# 73 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP__Leds__led0Toggle(void )
#line 73
{
  LedsP__Led0__toggle();
  ;
#line 75
  ;
}

# 56 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void AntiTheftRootC__Leds__led0Toggle(void ){
#line 56
  LedsP__Leds__led0Toggle();
#line 56
}
#line 56
# 120 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void )
#line 120
{
  return 28;
}

static inline void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len)
#line 124
{
  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return (void *)0;
    }
  else {
      return (void * )msg->data;
    }
}

#line 86
static inline void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__getPayload(am_id_t id, message_t *m, uint8_t len)
#line 86
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(m, len);
}

# 124 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void * /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__getPayload(am_id_t arg_0x40e83650, message_t * msg, uint8_t len){
#line 124
  void *result;
#line 124

#line 124
  result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__getPayload(arg_0x40e83650, msg, len);
#line 124

#line 124
  return result;
#line 124
}
#line 124
# 203 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void */*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__getPayload(uint8_t id, message_t *m, uint8_t len)
#line 203
{
  return /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__getPayload(0, m, len);
}

# 114 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void * /*AntiTheftRootAppC.AlertsForwarder.AMQueueEntryP*/AMQueueEntryP__4__Send__getPayload(message_t * msg, uint8_t len){
#line 114
  void *result;
#line 114

#line 114
  result = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__getPayload(0U, msg, len);
#line 114

#line 114
  return result;
#line 114
}
#line 114
# 65 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void */*AntiTheftRootAppC.AlertsForwarder.AMQueueEntryP*/AMQueueEntryP__4__AMSend__getPayload(message_t *m, uint8_t len)
#line 65
{
  return /*AntiTheftRootAppC.AlertsForwarder.AMQueueEntryP*/AMQueueEntryP__4__Send__getPayload(m, len);
}

# 124 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void * AntiTheftRootC__AlertsForward__getPayload(message_t * msg, uint8_t len){
#line 124
  void *result;
#line 124

#line 124
  result = /*AntiTheftRootAppC.AlertsForwarder.AMQueueEntryP*/AMQueueEntryP__4__AMSend__getPayload(msg, len);
#line 124

#line 124
  return result;
#line 124
}
#line 124
# 116 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(message_t *msg, uint8_t len)
#line 116
{
  __nesc_hton_uint8(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg)->length.data, len);
}

# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__setPayloadLength(message_t * msg, uint8_t len){
#line 83
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(msg, len);
#line 83
}
#line 83
# 82 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 83
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[clientId].msg = msg;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__setPayloadLength(msg, len);

  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current >= 1) {
      error_t err;
      am_id_t amId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__type(msg);
      am_addr_t dest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__destination(msg);

      ;
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = clientId;

      err = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = 1;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*AntiTheftRootAppC.AlertsForwarder.AMQueueEntryP*/AMQueueEntryP__4__Send__send(message_t * msg, uint8_t len){
#line 64
  unsigned char result;
#line 64

#line 64
  result = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__send(0U, msg, len);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 166 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(message_t *amsg, am_id_t type)
#line 166
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 168
  __nesc_hton_uint8(header->type.data, type);
}

# 151 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*AntiTheftRootAppC.AlertsForwarder.AMQueueEntryP*/AMQueueEntryP__4__AMPacket__setType(message_t * amsg, am_id_t t){
#line 151
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(amsg, t);
#line 151
}
#line 151
# 147 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(message_t *amsg, am_addr_t addr)
#line 147
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 149
  __nesc_hton_uint16(header->dest.data, addr);
}

# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*AntiTheftRootAppC.AlertsForwarder.AMQueueEntryP*/AMQueueEntryP__4__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 92
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(amsg, addr);
#line 92
}
#line 92
# 45 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*AntiTheftRootAppC.AlertsForwarder.AMQueueEntryP*/AMQueueEntryP__4__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*AntiTheftRootAppC.AlertsForwarder.AMQueueEntryP*/AMQueueEntryP__4__AMPacket__setDestination(msg, dest);
  /*AntiTheftRootAppC.AlertsForwarder.AMQueueEntryP*/AMQueueEntryP__4__AMPacket__setType(msg, 22);
  return /*AntiTheftRootAppC.AlertsForwarder.AMQueueEntryP*/AMQueueEntryP__4__Send__send(msg, len);
}

# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t AntiTheftRootC__AlertsForward__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*AntiTheftRootAppC.AlertsForwarder.AMQueueEntryP*/AMQueueEntryP__4__AMSend__send(addr, msg, len);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 78 "/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 78
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Random__rand16(void ){
#line 41
  unsigned short result;
#line 41

#line 41
  result = RandomMlcgC__Random__rand16();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 257 "/usr/lib/ncc/nesc_nx.h"
static __inline  int8_t __nesc_ntoh_int8(const void * source)
#line 257
{
#line 257
  return __nesc_ntoh_uint8(source);
}

# 75 "/opt/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline bool CC2420PacketP__Acks__wasAcked(message_t *p_msg)
#line 75
{
  return __nesc_ntoh_int8(CC2420PacketP__CC2420PacketBody__getMetadata(p_msg)->ack.data);
}

# 74 "/opt/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__PacketAcknowledgements__wasAcked(message_t * msg){
#line 74
  unsigned char result;
#line 74

#line 74
  result = CC2420PacketP__Acks__wasAcked(msg);
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 525 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP__LinkEstimator__txNoAck(am_addr_t neighbor)
#line 525
{
  neighbor_table_entry_t *ne;
  uint8_t nidx = LinkEstimatorP__findIdx(neighbor);

#line 528
  if (nidx == LinkEstimatorP__INVALID_RVAL) {
      return FAIL;
    }

  ne = &LinkEstimatorP__NeighborTable[nidx];
  ne->data_total++;
  if (ne->data_total >= LinkEstimatorP__DLQ_PKT_WINDOW) {
      LinkEstimatorP__updateDEETX(ne);
    }
  return SUCCESS;
}

# 55 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__txNoAck(am_addr_t neighbor){
#line 55
  unsigned char result;
#line 55

#line 55
  result = LinkEstimatorP__LinkEstimator__txNoAck(neighbor);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(/*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 552 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__recomputeRoutes(void )
#line 552
{
  /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__postTask();
}

# 71 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpInfo.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__recomputeRoutes(void ){
#line 71
  /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__recomputeRoutes();
#line 71
}
#line 71
# 856 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline 
#line 855
void 
/*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__default__sendDone(uint8_t client, message_t *msg, error_t error)
#line 856
{
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__sendDone(uint8_t arg_0x40f91b40, message_t * msg, error_t error){
#line 89
    /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__default__sendDone(arg_0x40f91b40, msg, error);
#line 89
}
#line 89
# 66 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpPacket.nc"
inline static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getType(message_t *msg){
#line 66
  unsigned char result;
#line 66

#line 66
  result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getType(msg);
#line 66

#line 66
  return result;
#line 66
}
#line 66
#line 54
inline static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getThl(message_t *msg){
#line 54
  unsigned char result;
#line 54

#line 54
  result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getThl(msg);
#line 54

#line 54
  return result;
#line 54
}
#line 54









inline static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getSequenceNumber(message_t *msg){
#line 63
  unsigned char result;
#line 63

#line 63
  result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getSequenceNumber(msg);
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 807 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getOrigin(message_t *msg)
#line 807
{
#line 807
  return __nesc_ntoh_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->origin.data);
}

# 60 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpPacket.nc"
inline static am_addr_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getOrigin(message_t *msg){
#line 60
  unsigned short result;
#line 60

#line 60
  result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getOrigin(msg);
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 100 "/opt/tinyos-2.x/tos/lib/net/ctp/LruCtpMsgCacheP.nc"
static inline void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__remove(uint8_t i)
#line 100
{
  uint8_t j;

#line 102
  if (i >= /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count) {
    return;
    }
#line 104
  if (i == 0) {

      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first = (/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first + 1) % 4;
    }
  else 
#line 107
    {

      for (j = i; j < /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count; j++) {
          memcpy(&/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[(j + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first) % 4], &/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[(j + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first + 1) % 4], sizeof(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__ctp_packet_sig_t ));
        }
    }
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count--;
}

static inline void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__insert(message_t *m)
#line 116
{
  uint8_t i;

#line 118
  if (/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count == 4) {





      i = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__lookup(m);
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__remove(i % /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count);
    }

  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count) % 4].origin = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getOrigin(m);
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count) % 4].seqno = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getSequenceNumber(m);
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count) % 4].thl = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getThl(m);
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count) % 4].type = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getType(m);
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count++;
}

# 40 "/opt/tinyos-2.x/tos/interfaces/Cache.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__insert(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__t item){
#line 40
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__insert(item);
#line 40
}
#line 40
# 508 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP__LinkEstimator__txAck(am_addr_t neighbor)
#line 508
{
  neighbor_table_entry_t *ne;
  uint8_t nidx = LinkEstimatorP__findIdx(neighbor);

#line 511
  if (nidx == LinkEstimatorP__INVALID_RVAL) {
      return FAIL;
    }
  ne = &LinkEstimatorP__NeighborTable[nidx];
  ne->data_success++;
  ne->data_total++;
  if (ne->data_total >= LinkEstimatorP__DLQ_PKT_WINDOW) {
      LinkEstimatorP__updateDEETX(ne);
    }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__txAck(am_addr_t neighbor){
#line 51
  unsigned char result;
#line 51

#line 51
  result = LinkEstimatorP__LinkEstimator__txAck(neighbor);
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask__postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 110 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline void DisseminationEngineImplP__TrickleTimer__fired(uint16_t key)
#line 110
{

  if (!DisseminationEngineImplP__m_running || DisseminationEngineImplP__m_bufBusy) {
#line 112
      return;
    }
  DisseminationEngineImplP__sendObject(key);
}

# 270 "/opt/tinyos-2.x/tos/lib/net/TrickleTimerImplP.nc"
static inline void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__default__fired(uint8_t id)
#line 270
{
  return;
}

# 82 "/opt/tinyos-2.x/tos/lib/net/TrickleTimer.nc"
inline static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__fired(uint8_t arg_0x40ee3148){
#line 82
  switch (arg_0x40ee3148) {
#line 82
    case /*AntiTheftRootAppC.DisseminatorC*/DisseminatorC__0__TIMER_ID:
#line 82
      DisseminationEngineImplP__TrickleTimer__fired(42);
#line 82
      break;
#line 82
    default:
#line 82
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__default__fired(arg_0x40ee3148);
#line 82
      break;
#line 82
    }
#line 82
}
#line 82
# 55 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline uint16_t /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getMask(uint16_t bitnum)
{
  return 1 << bitnum % /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__ELEMENT_SIZE;
}

#line 50
static inline uint16_t /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getIndex(uint16_t bitnum)
{
  return bitnum / /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__ELEMENT_SIZE;
}

#line 86
static inline void /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__clear(uint16_t bitnum)
{
  /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__m_bits[/*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getIndex(bitnum)] &= ~/*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getMask(bitnum);
}

# 58 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__clear(uint16_t bitnum){
#line 58
  /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__clear(bitnum);
#line 58
}
#line 58
# 76 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline bool /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__get(uint16_t bitnum)
{
  return /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__m_bits[/*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getIndex(bitnum)] & /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getMask(bitnum) ? TRUE : FALSE;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static bool /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__get(uint16_t bitnum){
#line 46
  unsigned char result;
#line 46

#line 46
  result = /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__get(bitnum);
#line 46

#line 46
  return result;
#line 46
}
#line 46
# 146 "/opt/tinyos-2.x/tos/lib/net/TrickleTimerImplP.nc"
static inline void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask__runTask(void )
#line 146
{
  uint8_t i;

#line 148
  for (i = 0; i < 1U; i++) {
      bool fire = FALSE;

#line 150
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 150
        {
          if (/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__get(i)) {
              /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__clear(i);
              fire = TRUE;
            }
        }
#line 155
        __nesc_atomic_end(__nesc_atomic); }
      if (fire) {
          ;
          /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__fired(i);
          /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask__postTask();
          return;
        }
    }
}

# 124 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void * /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__getPayload(am_id_t arg_0x40e83650, message_t * msg, uint8_t len){
#line 124
  void *result;
#line 124

#line 124
  result = CC2420ActiveMessageP__AMSend__getPayload(arg_0x40e83650, msg, len);
#line 124

#line 124
  return result;
#line 124
}
#line 124
# 203 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void */*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(uint8_t id, message_t *m, uint8_t len)
#line 203
{
  return /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__getPayload(0, m, len);
}

# 114 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void * /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__getPayload(message_t * msg, uint8_t len){
#line 114
  void *result;
#line 114

#line 114
  result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(0U, msg, len);
#line 114

#line 114
  return result;
#line 114
}
#line 114
# 65 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void */*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__getPayload(message_t *m, uint8_t len)
#line 65
{
  return /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__getPayload(m, len);
}

# 124 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void * DisseminationEngineImplP__AMSend__getPayload(message_t * msg, uint8_t len){
#line 124
  void *result;
#line 124

#line 124
  result = /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__getPayload(msg, len);
#line 124

#line 124
  return result;
#line 124
}
#line 124
# 101 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminatorP.nc"
static inline void */*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__requestData(uint8_t *size)
#line 101
{
  *size = sizeof(/*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__t );
  return &/*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__valueCache;
}

# 236 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline void *
DisseminationEngineImplP__DisseminationCache__default__requestData(uint16_t key, uint8_t *size)
#line 237
{
#line 237
  return (void *)0;
}

# 47 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationCache.nc"
inline static void *DisseminationEngineImplP__DisseminationCache__requestData(uint16_t arg_0x40e33320, uint8_t *size){
#line 47
  void *result;
#line 47

#line 47
  switch (arg_0x40e33320) {
#line 47
    case 42:
#line 47
      result = /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__requestData(size);
#line 47
      break;
#line 47
    default:
#line 47
      result = DisseminationEngineImplP__DisseminationCache__default__requestData(arg_0x40e33320, size);
#line 47
      break;
#line 47
    }
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 112 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__maxPayloadLength(am_id_t arg_0x40e83650){
#line 112
  unsigned char result;
#line 112

#line 112
  result = CC2420ActiveMessageP__AMSend__maxPayloadLength(arg_0x40e83650);
#line 112

#line 112
  return result;
#line 112
}
#line 112
# 199 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__maxPayloadLength(uint8_t id)
#line 199
{
  return /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__maxPayloadLength(0);
}

# 101 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static uint8_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__maxPayloadLength(void ){
#line 101
  unsigned char result;
#line 101

#line 101
  result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__maxPayloadLength(0U);
#line 101

#line 101
  return result;
#line 101
}
#line 101
# 61 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline uint8_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__maxPayloadLength(void )
#line 61
{
  return /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__maxPayloadLength();
}

# 112 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static uint8_t DisseminationEngineImplP__AMSend__maxPayloadLength(void ){
#line 112
  unsigned char result;
#line 112

#line 112
  result = /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__maxPayloadLength();
#line 112

#line 112
  return result;
#line 112
}
#line 112
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(message_t * msg, uint8_t len){
#line 64
  unsigned char result;
#line 64

#line 64
  result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(0U, msg, len);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 151 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(message_t * amsg, am_id_t t){
#line 151
  CC2420ActiveMessageP__AMPacket__setType(amsg, t);
#line 151
}
#line 151
#line 92
inline static void /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 92
  CC2420ActiveMessageP__AMPacket__setDestination(amsg, addr);
#line 92
}
#line 92
# 45 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(msg, dest);
  /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(msg, 96);
  return /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(msg, len);
}

# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t DisseminationEngineImplP__AMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(addr, msg, len);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 121 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminatorP.nc"
static inline void /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationValue__default__changed(void )
#line 121
{
}

# 61 "/opt/tinyos-2.x/tos/lib/net/DisseminationValue.nc"
inline static void /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationValue__changed(void ){
#line 61
  /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationValue__default__changed();
#line 61
}
#line 61
# 62 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminatorP.nc"
static inline void /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__changedTask__runTask(void )
#line 62
{
  /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationValue__changed();
}

# 118 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void )
#line 118
{
  uint8_t i;
#line 119
  uint8_t j;
#line 119
  uint8_t mask;
#line 119
  uint8_t last;
  message_t *msg;

#line 121
  for (i = 0; i < 4 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

# 423 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__sendDone(message_t *msg, error_t error)
#line 423
{
  if (msg != &/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsgBuffer || !/*CtpP.Router*/CtpRoutingEngineP__0__sending) {

      return;
    }
  /*CtpP.Router*/CtpRoutingEngineP__0__sending = FALSE;
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void LinkEstimatorP__Send__sendDone(message_t * msg, error_t error){
#line 99
  /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__sendDone(msg, error);
#line 99
}
#line 99
# 567 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void LinkEstimatorP__AMSend__sendDone(message_t *msg, error_t error)
#line 567
{
  LinkEstimatorP__Send__sendDone(msg, error);
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__sendDone(message_t * msg, error_t error){
#line 99
  LinkEstimatorP__AMSend__sendDone(msg, error);
#line 99
}
#line 99
# 57 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__Send__sendDone(message_t *m, error_t err)
#line 57
{
  /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__sendDone(m, err);
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__sendDone(message_t * msg, error_t error){
#line 99
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__sendDone(msg, error);
#line 99
}
#line 99
# 57 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__sendDone(message_t *m, error_t err)
#line 57
{
  /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__sendDone(m, err);
}

# 155 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline void DisseminationEngineImplP__ProbeAMSend__sendDone(message_t *msg, error_t error)
#line 155
{
  DisseminationEngineImplP__m_bufBusy = FALSE;
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*DisseminationEngineP.DisseminationProbeSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(message_t * msg, error_t error){
#line 99
  DisseminationEngineImplP__ProbeAMSend__sendDone(msg, error);
#line 99
}
#line 99
# 57 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*DisseminationEngineP.DisseminationProbeSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(message_t *m, error_t err)
#line 57
{
  /*DisseminationEngineP.DisseminationProbeSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(m, err);
}

# 159 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline void DisseminationEngineImplP__AMSend__sendDone(message_t *msg, error_t error)
#line 159
{
  DisseminationEngineImplP__m_bufBusy = FALSE;
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(message_t * msg, error_t error){
#line 99
  DisseminationEngineImplP__AMSend__sendDone(msg, error);
#line 99
}
#line 99
# 57 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err)
#line 57
{
  /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(m, err);
}

# 155 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err)
#line 155
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, err);
}

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void )
#line 161
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current, /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg, FAIL);
}

#line 57
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void )
#line 57
{
  uint8_t i;

#line 59
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 4;
  for (i = 0; i < 4; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 4;
        }
      else {
          break;
        }
    }
  if (i >= 4) {
#line 70
    /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 4;
    }
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(message_t * msg){
#line 67
  unsigned char result;
#line 67

#line 67
  result = CC2420ActiveMessageP__Packet__payloadLength(msg);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 181 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
#line 181
{





  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current >= 1) {
      return;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg == msg) {
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current, msg, err);
    }
  else {
      ;
    }
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(am_id_t arg_0x40c18200, message_t * msg, error_t error){
#line 99
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(arg_0x40c18200, msg, error);
#line 99
}
#line 99
# 90 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result)
#line 90
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, result);
}

# 365 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 365
{
  return;
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0x40c9d560, message_t * msg, error_t error){
#line 89
  switch (arg_0x40c9d560) {
#line 89
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 89
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0x40c9d560, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 147 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void )
#line 147
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError;
#line 151
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled) {
#line 153
    error = ECANCEL;
    }
#line 154
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer, error);
}

#line 201
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which)
#line 201
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 0;
    }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__changedTask__postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(/*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__changedTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 251 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline void DisseminationEngineImplP__TrickleTimer__default__reset(uint16_t key)
#line 251
{
}

# 72 "/opt/tinyos-2.x/tos/lib/net/TrickleTimer.nc"
inline static void DisseminationEngineImplP__TrickleTimer__reset(uint16_t arg_0x40e33e10){
#line 72
  switch (arg_0x40e33e10) {
#line 72
    case 42:
#line 72
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__reset(/*AntiTheftRootAppC.DisseminatorC*/DisseminatorC__0__TIMER_ID);
#line 72
      break;
#line 72
    default:
#line 72
      DisseminationEngineImplP__TrickleTimer__default__reset(arg_0x40e33e10);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
# 102 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline void DisseminationEngineImplP__DisseminationCache__newData(uint16_t key)
#line 102
{

  if (!DisseminationEngineImplP__m_running || DisseminationEngineImplP__m_bufBusy) {
#line 104
      return;
    }
  DisseminationEngineImplP__sendObject(key);
  DisseminationEngineImplP__TrickleTimer__reset(key);
}

# 50 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationCache.nc"
inline static void /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__newData(void ){
#line 50
  DisseminationEngineImplP__DisseminationCache__newData(42);
#line 50
}
#line 50
# 88 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminatorP.nc"
static inline void /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationUpdate__change(/*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__t *newVal)
#line 88
{
  if (!/*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__m_running) {
#line 89
      return;
    }
#line 90
  memcpy(&/*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__valueCache, newVal, sizeof(/*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__t ));

  /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__seqno = /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__seqno >> 16;
  /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__seqno++;
  if (/*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__seqno == DISSEMINATION_SEQNO_UNKNOWN) {
#line 94
      /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__seqno++;
    }
#line 95
  /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__seqno = /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__seqno << 16;
  /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__seqno += TOS_NODE_ID;
  /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__newData();
  /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__changedTask__postTask();
}

# 52 "/opt/tinyos-2.x/tos/lib/net/DisseminationUpdate.nc"
inline static void AntiTheftRootC__SettingsUpdate__change(AntiTheftRootC__SettingsUpdate__t * newVal){
#line 52
  /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationUpdate__change(newVal);
#line 52
}
#line 52
# 48 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )59U ^= 1 << 0;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 31 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__toggle(void ){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle();
#line 31
}
#line 31
# 103 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP__Leds__led2Toggle(void )
#line 103
{
  LedsP__Led2__toggle();
  ;
#line 105
  ;
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void AntiTheftRootC__Leds__led2Toggle(void ){
#line 89
  LedsP__Leds__led2Toggle();
#line 89
}
#line 89
# 68 "AntiTheftRootC.nc"
static inline message_t *AntiTheftRootC__SettingsReceive__receive(message_t *msg, void *payload, uint8_t len)
{
  settings_t *newSettings = payload;

  if (len == sizeof  (*newSettings)) 
    {
      AntiTheftRootC__Leds__led2Toggle();
      AntiTheftRootC__SettingsUpdate__change(newSettings);
    }
  return msg;
}

# 98 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
#line 98
{
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(am_id_t arg_0x40c18bc0, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x40c18bc0) {
#line 67
    case 54:
#line 67
      result = AntiTheftRootC__SettingsReceive__receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(arg_0x40c18bc0, msg, payload, len);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 102 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 102
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, msg->data, len);
}

# 360 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 362
{
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0x40ca0e50, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x40ca0e50) {
#line 67
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 67
      result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0x40ca0e50, msg, payload, len);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 46 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen)
#line 46
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 354 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 355
{
  return 0;
}

# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0x40cca088, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char result;
#line 31

#line 31
  switch (arg_0x40cca088) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      result = SerialPacketInfoActiveMessageP__Info__upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0x40cca088, msg, dataLinkLen);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return result;
#line 31
}
#line 31
# 264 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void )
#line 264
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

#line 269
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 269
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 278
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
    }
#line 282
    __nesc_atomic_end(__nesc_atomic); }
}

# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Random__rand16(void ){
#line 41
  unsigned short result;
#line 41

#line 41
  result = RandomMlcgC__Random__rand16();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 222 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void )
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get();
}

# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 98
  unsigned long result;
#line 98

#line 98
  result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow();
#line 98

#line 98
  return result;
#line 98
}
#line 98
# 85 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 86
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 125
  unsigned long result;
#line 125

#line 125
  result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 125

#line 125
  return result;
#line 125
}
#line 125
# 178 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
}

# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static uint32_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__getNow(void ){
#line 125
  unsigned long result;
#line 125

#line 125
  result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(1U);
#line 125

#line 125
  return result;
#line 125
}
#line 125
# 183 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__gett0(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].t0;
}

# 133 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static uint32_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__gett0(void ){
#line 133
  unsigned long result;
#line 133

#line 133
  result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__gett0(1U);
#line 133

#line 133
  return result;
#line 133
}
#line 133
# 55 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline uint16_t /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getMask(uint16_t bitnum)
{
  return 1 << bitnum % /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__ELEMENT_SIZE;
}

#line 50
static inline uint16_t /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getIndex(uint16_t bitnum)
{
  return bitnum / /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__ELEMENT_SIZE;
}

#line 76
static inline bool /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__get(uint16_t bitnum)
{
  return /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__m_bits[/*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getIndex(bitnum)] & /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getMask(bitnum) ? TRUE : FALSE;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static bool /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__get(uint16_t bitnum){
#line 46
  unsigned char result;
#line 46

#line 46
  result = /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__get(bitnum);
#line 46

#line 46
  return result;
#line 46
}
#line 46
# 86 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline void /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__clear(uint16_t bitnum)
{
  /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__m_bits[/*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getIndex(bitnum)] &= ~/*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getMask(bitnum);
}

# 58 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__clear(uint16_t bitnum){
#line 58
  /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__clear(bitnum);
#line 58
}
#line 58
# 148 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(1U, dt);
#line 62
}
#line 62





inline static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__stop(void ){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(1U);
#line 67
}
#line 67
# 50 "AntiTheftRootC.nc"
static inline void AntiTheftRootC__SerialControl__stopDone(error_t error)
#line 50
{
}

# 117 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__stopDone(error_t error){
#line 117
  AntiTheftRootC__SerialControl__stopDone(error);
#line 117
}
#line 117
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128UartP__McuPowerState__update(void ){
#line 44
  McuSleepC__McuPowerState__update();
#line 44
}
#line 44
# 125 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__stop(void )
#line 125
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 4);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 84 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void ){
#line 84
  unsigned char result;
#line 84

#line 84
  result = HplAtm128UartP__Uart0RxControl__stop();
#line 84

#line 84
  return result;
#line 84
}
#line 84
# 113 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__stop(void )
#line 113
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 3);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 84 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void ){
#line 84
  unsigned char result;
#line 84

#line 84
  result = HplAtm128UartP__Uart0TxControl__stop();
#line 84

#line 84
  return result;
#line 84
}
#line 84
# 93 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void )
#line 93
{
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop();
  return SUCCESS;
}

# 84 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__stop(void ){
#line 84
  unsigned char result;
#line 84

#line 84
  result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop();
#line 84

#line 84
  return result;
#line 84
}
#line 84
# 330 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__flushDone(void )
#line 330
{
  SerialP__SerialControl__stop();
  SerialP__SplitControl__stopDone(SUCCESS);
}

static inline void SerialP__defaultSerialFlushTask__runTask(void )
#line 335
{
  SerialP__SerialFlush__flushDone();
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__defaultSerialFlushTask__postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(SerialP__defaultSerialFlushTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 338 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__default__flush(void )
#line 338
{
  SerialP__defaultSerialFlushTask__postTask();
}

# 38 "/opt/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
inline static void SerialP__SerialFlush__flush(void ){
#line 38
  SerialP__SerialFlush__default__flush();
#line 38
}
#line 38
# 326 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__stopDoneTask__runTask(void )
#line 326
{
  SerialP__SerialFlush__flush();
}

# 49 "AntiTheftRootC.nc"
static inline void AntiTheftRootC__SerialControl__startDone(error_t error)
#line 49
{
}

# 92 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__startDone(error_t error){
#line 92
  AntiTheftRootC__SerialControl__startDone(error);
#line 92
}
#line 92
# 142 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void )
#line 142
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 7;
  return SUCCESS;
}

# 42 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void ){
#line 42
  unsigned char result;
#line 42

#line 42
  result = HplAtm128UartP__HplUart0__enableRxIntr();
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 119 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__start(void )
#line 119
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 4;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void ){
#line 74
  unsigned char result;
#line 74

#line 74
  result = HplAtm128UartP__Uart0RxControl__start();
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 107 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__start(void )
#line 107
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 3;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void ){
#line 74
  unsigned char result;
#line 74

#line 74
  result = HplAtm128UartP__Uart0TxControl__start();
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 147 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void )
#line 147
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 7);
  return SUCCESS;
}

# 43 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void ){
#line 43
  unsigned char result;
#line 43

#line 43
  result = HplAtm128UartP__HplUart0__disableRxIntr();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 137 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void )
#line 137
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 6);
  return SUCCESS;
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void ){
#line 41
  unsigned char result;
#line 41

#line 41
  result = HplAtm128UartP__HplUart0__disableTxIntr();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 77 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void )
#line 77
{

  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start();


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr();
  return SUCCESS;
}

# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__start(void ){
#line 74
  unsigned char result;
#line 74

#line 74
  result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start();
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 320 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__startDoneTask__runTask(void )
#line 320
{
  SerialP__SerialControl__start();
  SerialP__SplitControl__startDone(SUCCESS);
}

# 45 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putDelimiter(void ){
#line 45
  unsigned char result;
#line 45

#line 45
  result = HdlcTranslateC__SerialFrameComm__putDelimiter();
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 183 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error)
#line 183
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 184
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = error;
#line 184
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask();
}

# 80 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static void SerialP__SendBytePacket__sendCompleted(error_t error){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error);
#line 80
}
#line 80
# 242 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_empty(void )
#line 242
{
  bool ret;

#line 244
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 244
    ret = SerialP__ackQ.writePtr == SerialP__ackQ.readPtr;
#line 244
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t SerialP__ack_queue_top(void )
#line 258
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
#line 260
  {
    if (!SerialP__ack_queue_is_empty()) {
        tmp = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t SerialP__ack_queue_pop(void )
#line 268
{
  uint8_t retval = 0;

#line 270
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 270
    {
      if (SerialP__ackQ.writePtr != SerialP__ackQ.readPtr) {
          retval = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
          if (++ SerialP__ackQ.readPtr > SerialP__ACK_QUEUE_SIZE) {
#line 273
            SerialP__ackQ.readPtr = 0;
            }
        }
    }
#line 276
    __nesc_atomic_end(__nesc_atomic); }
#line 276
  return retval;
}

#line 539
static inline void SerialP__RunTx__runTask(void )
#line 539
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 556
    {
      SerialP__txPending = 0;
      idle = SerialP__txState == SerialP__TXSTATE_IDLE;
      done = SerialP__txState == SerialP__TXSTATE_FINISH;
      fail = SerialP__txState == SerialP__TXSTATE_ERROR;
      if (done || fail) {
          SerialP__txState = SerialP__TXSTATE_IDLE;
          SerialP__txBuf[SerialP__txIndex].state = SerialP__BUFFER_AVAILABLE;
        }
    }
#line 565
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      SerialP__txSeqno++;
      if (SerialP__txProto == SERIAL_PROTO_ACK) {
          SerialP__ack_queue_pop();
        }
      else {
          result = done ? SUCCESS : FAIL;
          send_completed = TRUE;
        }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

#line 583
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 583
        goInactive = SerialP__offPending;
#line 583
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 585
            SerialP__txState = SerialP__TXSTATE_INACTIVE;
#line 585
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

#line 591
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 591
            {
              myAckState = SerialP__txBuf[SerialP__TX_ACK_INDEX].state;
              myDataState = SerialP__txBuf[SerialP__TX_DATA_INDEX].state;
            }
#line 594
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP__ack_queue_is_empty() && myAckState == SerialP__BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 596
                {
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].state = SerialP__BUFFER_COMPLETE;
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].buf = SerialP__ack_queue_top();
                }
#line 599
                __nesc_atomic_end(__nesc_atomic); }
              SerialP__txProto = SERIAL_PROTO_ACK;
              SerialP__txIndex = SerialP__TX_ACK_INDEX;
              start_it = TRUE;
            }
          else {
#line 604
            if (myDataState == SerialP__BUFFER_FILLING || myDataState == SerialP__BUFFER_COMPLETE) {
                SerialP__txProto = SERIAL_PROTO_PACKET_NOACK;
                SerialP__txIndex = SerialP__TX_DATA_INDEX;
                start_it = TRUE;
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP__SendBytePacket__sendCompleted(result);
    }

  if (SerialP__txState == SerialP__TXSTATE_INACTIVE) {
      SerialP__testOff();
      return;
    }

  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 629
        {
          SerialP__txCRC = 0;
          SerialP__txByteCnt = 0;
          SerialP__txState = SerialP__TXSTATE_PROTO;
        }
#line 633
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP__SerialFrameComm__putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 635
            SerialP__txState = SerialP__TXSTATE_ERROR;
#line 635
            __nesc_atomic_end(__nesc_atomic); }
          SerialP__MaybeScheduleTx();
        }
    }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__stopDoneTask__postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(SerialP__stopDoneTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 131 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void )
#line 131
{
  * (volatile uint8_t *)(0x0B + 0x20) |= 1 << 6;
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 6;
  return SUCCESS;
}

# 40 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void ){
#line 40
  unsigned char result;
#line 40

#line 40
  result = HplAtm128UartP__HplUart0__enableTxIntr();
#line 40

#line 40
  return result;
#line 40
}
#line 40
# 196 "/opt/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP__Resource__release(uint8_t id)
#line 196
{
  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      CC2420TinyosNetworkP__grantTask__postTask();
    }
  CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__OWNER_NONE;
  return SUCCESS;
}

#line 220
static inline void CC2420TinyosNetworkP__Resource__default__granted(uint8_t client)
#line 220
{
  CC2420TinyosNetworkP__Resource__release(client);
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void CC2420TinyosNetworkP__Resource__granted(uint8_t arg_0x40b71628){
#line 92
  switch (arg_0x40b71628) {
#line 92
    case CC2420ActiveMessageC__CC2420_AM_SEND_ID:
#line 92
      CC2420ActiveMessageP__RadioResource__granted();
#line 92
      break;
#line 92
    default:
#line 92
      CC2420TinyosNetworkP__Resource__default__granted(arg_0x40b71628);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 58 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 58
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 59
    {
      if (/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead != /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY) {
          uint8_t id = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead;

#line 62
          /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead];
          if (/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead == /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY) {
            /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;
            }
#line 65
          /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[id] = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;
          {
            unsigned char __nesc_temp = 
#line 66
            id;

            {
#line 66
              __nesc_atomic_end(__nesc_atomic); 
#line 66
              return __nesc_temp;
            }
          }
        }
#line 68
      {
        unsigned char __nesc_temp = 
#line 68
        /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;

        {
#line 68
          __nesc_atomic_end(__nesc_atomic); 
#line 68
          return __nesc_temp;
        }
      }
    }
#line 71
    __nesc_atomic_end(__nesc_atomic); }
}

# 60 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t CC2420TinyosNetworkP__Queue__dequeue(void ){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 147 "/opt/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP__grantTask__runTask(void )
#line 147
{


  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      if (CC2420TinyosNetworkP__resource_owner == CC2420TinyosNetworkP__OWNER_NONE && !CC2420TinyosNetworkP__Queue__isEmpty()) {
          CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__Queue__dequeue();

          if (CC2420TinyosNetworkP__resource_owner != CC2420TinyosNetworkP__OWNER_NONE) {
              CC2420TinyosNetworkP__Resource__granted(CC2420TinyosNetworkP__resource_owner);
            }
        }
    }
  else 
#line 158
    {
      if (CC2420TinyosNetworkP__next_owner != CC2420TinyosNetworkP__resource_owner) {
          CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__next_owner;
          CC2420TinyosNetworkP__Resource__granted(CC2420TinyosNetworkP__resource_owner);
        }
    }
}

# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 92
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(t0, dt);
#line 92
}
#line 92
# 47 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 82
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 83
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 118 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 118
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 118
}
#line 118
# 204 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 62
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop();
#line 62
}
#line 62
# 60 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 61
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 67
}
#line 67
# 89 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint8_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 124
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 81 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline void /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__set(uint16_t bitnum)
{
  /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__m_bits[/*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getIndex(bitnum)] |= /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getMask(bitnum);
}

# 52 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__set(uint16_t bitnum){
#line 52
  /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__set(bitnum);
#line 52
}
#line 52
# 188 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getdt(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].dt;
}

# 140 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static uint32_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__getdt(void ){
#line 140
  unsigned long result;
#line 140

#line 140
  result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getdt(1U);
#line 140

#line 140
  return result;
#line 140
}
#line 140
# 168 "/opt/tinyos-2.x/tos/lib/net/TrickleTimerImplP.nc"
static inline void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__fired(void )
#line 168
{
  uint8_t i;
  uint32_t dt = /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__getdt();

  for (i = 0; i < 1U; i++) {
      uint32_t remaining = /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].time;

#line 174
      if (remaining != 0) {
          remaining -= dt;
          if (remaining == 0) {
              if (/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].count < 1) {
                  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 178
                    {
                      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__set(i);
                    }
#line 180
                    __nesc_atomic_end(__nesc_atomic); }
                  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask__postTask();
                }

              /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__generateTime(i);







              /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].count = 0;
            }
          else {
              /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].time = remaining;
            }
        }
    }
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__adjustTimer();
}

# 178 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__decayInterval(void )
#line 178
{
  /*CtpP.Router*/CtpRoutingEngineP__0__currentInterval *= 2;
  if (/*CtpP.Router*/CtpRoutingEngineP__0__currentInterval > 512000L) {
      /*CtpP.Router*/CtpRoutingEngineP__0__currentInterval = 512000L;
    }
  /*CtpP.Router*/CtpRoutingEngineP__0__chooseAdvertiseTime();
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(2U, dt);
#line 62
}
#line 62
# 186 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__remainingInterval(void )
#line 186
{
  uint32_t remaining = /*CtpP.Router*/CtpRoutingEngineP__0__currentInterval;

#line 188
  remaining -= /*CtpP.Router*/CtpRoutingEngineP__0__t;
  /*CtpP.Router*/CtpRoutingEngineP__0__tHasPassed = TRUE;
  /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__startOneShot(remaining);
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask__postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(/*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 437 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__fired(void )
#line 437
{
  if (/*CtpP.Router*/CtpRoutingEngineP__0__radioOn && /*CtpP.Router*/CtpRoutingEngineP__0__running) {
      if (!/*CtpP.Router*/CtpRoutingEngineP__0__tHasPassed) {
          /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__postTask();
          /*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask__postTask();
          ;
          /*CtpP.Router*/CtpRoutingEngineP__0__remainingInterval();
        }
      else {
          /*CtpP.Router*/CtpRoutingEngineP__0__decayInterval();
        }
    }
}

#line 431
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__RouteTimer__fired(void )
#line 431
{
  if (/*CtpP.Router*/CtpRoutingEngineP__0__radioOn && /*CtpP.Router*/CtpRoutingEngineP__0__running) {
      /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__postTask();
    }
}

# 754 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__fired(void )
#line 754
{
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__clearState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SENDING);
  ;
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__postTask();
}

# 193 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x40ad5548){
#line 72
  switch (arg_0x40ad5548) {
#line 72
    case 1U:
#line 72
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__fired();
#line 72
      break;
#line 72
    case 2U:
#line 72
      /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__fired();
#line 72
      break;
#line 72
    case 3U:
#line 72
      /*CtpP.Router*/CtpRoutingEngineP__0__RouteTimer__fired();
#line 72
      break;
#line 72
    case 4U:
#line 72
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x40ad5548);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
# 135 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__Compare__set(uint8_t t)
#line 135
{
  * (volatile uint8_t *)(0x31 + 0x20) = t;
}

# 45 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type t){
#line 45
  HplAtm128Timer0AsyncP__Compare__set(t);
#line 45
}
#line 45
# 50 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP__Timer__get(void )
#line 50
{
#line 50
  return * (volatile uint8_t *)(0x32 + 0x20);
}

# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get(void ){
#line 52
  unsigned char result;
#line 52

#line 52
  result = HplAtm128Timer0AsyncP__Timer__get();
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 206 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void )
#line 206
{
  return (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 1)) != 0;
}

# 44 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy(void ){
#line 44
  int result;
#line 44

#line 44
  result = HplAtm128Timer0AsyncP__TimerAsync__compareBusy();
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 74 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(uint8_t n)
#line 74
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(n);
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 70 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 71
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 67
}
#line 67
# 128 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 72
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 72
}
#line 72
# 226 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void )
#line 226
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      unsigned long __nesc_temp = 
#line 227
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt;

      {
#line 227
        __nesc_atomic_end(__nesc_atomic); 
#line 227
        return __nesc_temp;
      }
    }
#line 229
    __nesc_atomic_end(__nesc_atomic); }
}

# 105 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 105
  unsigned long result;
#line 105

#line 105
  result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm();
#line 105

#line 105
  return result;
#line 105
}
#line 105
# 63 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 208 "/opt/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline message_t *CC2420TinyosNetworkP__BareReceive__default__receive(message_t *msg, void *payload, uint8_t len)
#line 208
{
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * CC2420TinyosNetworkP__BareReceive__receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = CC2420TinyosNetworkP__BareReceive__default__receive(msg, payload, len);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420TinyosNetworkP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 871 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP__0__Snoop__default__receive(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len)
#line 873
{
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*CtpP.Forwarder*/CtpForwardingEngineP__0__Snoop__receive(collection_id_t arg_0x40f90c80, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
    result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Snoop__default__receive(arg_0x40f90c80, msg, payload, len);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 76 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpInfo.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__setNeighborCongested(am_addr_t n, bool congested){
#line 76
  /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__setNeighborCongested(n, congested);
#line 76
}
#line 76
#line 59
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__triggerRouteUpdate(void ){
#line 59
  /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__triggerRouteUpdate();
#line 59
}
#line 59
# 77 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__source(message_t * amsg){
#line 77
  unsigned short result;
#line 77

#line 77
  result = CC2420ActiveMessageP__AMPacket__source(amsg);
#line 77

#line 77
  return result;
#line 77
}
#line 77
# 737 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSnoop__receive(message_t *msg, void *payload, uint8_t len)
#line 738
{

  am_addr_t proximalSrc = /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__source(msg);



  if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__option(msg, CTP_OPT_PULL)) {
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__triggerRouteUpdate();
    }

  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__setNeighborCongested(proximalSrc, /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__option(msg, CTP_OPT_ECN));
  return /*CtpP.Forwarder*/CtpForwardingEngineP__0__Snoop__receive(/*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getType(msg), 
  msg, payload + sizeof(ctp_data_header_t ), 
  len - sizeof(ctp_data_header_t ));
}

# 270 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline message_t *CC2420ActiveMessageP__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 270
{
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * CC2420ActiveMessageP__Snoop__receive(am_id_t arg_0x40ba1490, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x40ba1490) {
#line 67
    case 113:
#line 67
      result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSnoop__receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      result = CC2420ActiveMessageP__Snoop__default__receive(arg_0x40ba1490, msg, payload, len);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 294 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 294
{
  const uint8_t *base = source;

#line 296
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

# 142 "/opt/tinyos-2.x/tos/lib/net/TrickleTimerImplP.nc"
static inline void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__incrementCounter(uint8_t id)
#line 142
{
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].count++;
}

# 253 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline void DisseminationEngineImplP__TrickleTimer__default__incrementCounter(uint16_t key)
#line 253
{
}

# 77 "/opt/tinyos-2.x/tos/lib/net/TrickleTimer.nc"
inline static void DisseminationEngineImplP__TrickleTimer__incrementCounter(uint16_t arg_0x40e33e10){
#line 77
  switch (arg_0x40e33e10) {
#line 77
    case 42:
#line 77
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__incrementCounter(/*AntiTheftRootAppC.DisseminatorC*/DisseminatorC__0__TIMER_ID);
#line 77
      break;
#line 77
    default:
#line 77
      DisseminationEngineImplP__TrickleTimer__default__incrementCounter(arg_0x40e33e10);
#line 77
      break;
#line 77
    }
#line 77
}
#line 77
# 240 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline 
#line 239
void 
DisseminationEngineImplP__DisseminationCache__default__storeData(uint16_t key, void *data, 
uint8_t size, 
uint32_t seqno)
#line 242
{
}

# 48 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationCache.nc"
inline static void DisseminationEngineImplP__DisseminationCache__storeData(uint16_t arg_0x40e33320, void * data, uint8_t size, uint32_t seqno){
#line 48
  switch (arg_0x40e33320) {
#line 48
    case 42:
#line 48
      /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__storeData(data, size, seqno);
#line 48
      break;
#line 48
    default:
#line 48
      DisseminationEngineImplP__DisseminationCache__default__storeData(arg_0x40e33320, data, size, seqno);
#line 48
      break;
#line 48
    }
#line 48
}
#line 48
# 117 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminatorP.nc"
static inline uint32_t /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__requestSeqno(void )
#line 117
{
  return /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__seqno;
}

# 245 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline 
#line 244
uint32_t 
DisseminationEngineImplP__DisseminationCache__default__requestSeqno(uint16_t key)
#line 245
{
#line 245
  return DISSEMINATION_SEQNO_UNKNOWN;
}

# 49 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationCache.nc"
inline static uint32_t DisseminationEngineImplP__DisseminationCache__requestSeqno(uint16_t arg_0x40e33320){
#line 49
  unsigned long result;
#line 49

#line 49
  switch (arg_0x40e33320) {
#line 49
    case 42:
#line 49
      result = /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__requestSeqno();
#line 49
      break;
#line 49
    default:
#line 49
      result = DisseminationEngineImplP__DisseminationCache__default__requestSeqno(arg_0x40e33320);
#line 49
      break;
#line 49
    }
#line 49

#line 49
  return result;
#line 49
}
#line 49
# 163 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline message_t *DisseminationEngineImplP__Receive__receive(message_t *msg, 
void *payload, 
uint8_t len)
#line 165
{

  dissemination_message_t *dMsg = 
  (dissemination_message_t *)payload;

  uint16_t key = __nesc_ntoh_uint16(dMsg->key.data);
  uint32_t incomingSeqno = __nesc_ntoh_uint32(dMsg->seqno.data);
  uint32_t currentSeqno = DisseminationEngineImplP__DisseminationCache__requestSeqno(key);

  if (!DisseminationEngineImplP__m_running) {
#line 174
      return msg;
    }
  if (currentSeqno == DISSEMINATION_SEQNO_UNKNOWN && 
  incomingSeqno != DISSEMINATION_SEQNO_UNKNOWN) {

      DisseminationEngineImplP__DisseminationCache__storeData(key, 
      dMsg->data, 
      len - sizeof(dissemination_message_t ), 
      incomingSeqno);

      DisseminationEngineImplP__TrickleTimer__reset(key);
      return msg;
    }

  if (incomingSeqno == DISSEMINATION_SEQNO_UNKNOWN && 
  currentSeqno != DISSEMINATION_SEQNO_UNKNOWN) {

      DisseminationEngineImplP__TrickleTimer__reset(key);
      return msg;
    }

  if ((int32_t )(incomingSeqno - currentSeqno) > 0) {

      DisseminationEngineImplP__DisseminationCache__storeData(key, 
      dMsg->data, 
      len - sizeof(dissemination_message_t ), 
      incomingSeqno);
      ;
      DisseminationEngineImplP__TrickleTimer__reset(key);
    }
  else {
#line 204
    if ((int32_t )(incomingSeqno - currentSeqno) == 0) {

        DisseminationEngineImplP__TrickleTimer__incrementCounter(key);
      }
    else {


        DisseminationEngineImplP__sendObject(key);
      }
    }


  return msg;
}

static inline message_t *DisseminationEngineImplP__ProbeReceive__receive(message_t *msg, 
void *payload, 
uint8_t len)
#line 221
{

  dissemination_probe_message_t *dpMsg = 
  (dissemination_probe_message_t *)payload;

  if (!DisseminationEngineImplP__m_running) {
#line 226
      return msg;
    }
  if (DisseminationEngineImplP__DisseminationCache__requestSeqno(__nesc_ntoh_uint16(dpMsg->key.data)) != 
  DISSEMINATION_SEQNO_UNKNOWN) {
      DisseminationEngineImplP__sendObject(__nesc_ntoh_uint16(dpMsg->key.data));
    }

  return msg;
}

# 158 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning;
}

# 81 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__isRunning(void ){
#line 81
  unsigned char result;
#line 81

#line 81
  result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(4U);
#line 81

#line 81
  return result;
#line 81
}
#line 81
# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(message_t * amsg){
#line 67
  unsigned short result;
#line 67

#line 67
  result = CC2420ActiveMessageP__AMPacket__destination(amsg);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 894 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__default__logEventMsg(uint8_t type, uint16_t msg, am_addr_t origin, am_addr_t node)
#line 894
{
  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/lib/net/CollectionDebug.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(uint8_t type, uint16_t msg, am_addr_t origin, am_addr_t node){
#line 62
  unsigned char result;
#line 62

#line 62
  result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__default__logEventMsg(type, msg, origin, node);
#line 62

#line 62
  return result;
#line 62
}
#line 62
# 560 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__triggerImmediateRouteUpdate(void )
#line 560
{
  /*CtpP.Router*/CtpRoutingEngineP__0__resetInterval();
}

# 66 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpInfo.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__triggerImmediateRouteUpdate(void ){
#line 66
  /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__triggerImmediateRouteUpdate();
#line 66
}
#line 66
# 808 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getEtx(message_t *msg)
#line 808
{
#line 808
  return __nesc_ntoh_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->etx.data);
}

# 69 "/opt/tinyos-2.x/tos/system/QueueC.nc"
static inline void /*CtpP.SendQueueP*/QueueC__0__printQueue(void )
#line 69
{
}

#line 61
static inline uint8_t /*CtpP.SendQueueP*/QueueC__0__Queue__maxSize(void )
#line 61
{
  return 12;
}

#line 57
static inline uint8_t /*CtpP.SendQueueP*/QueueC__0__Queue__size(void )
#line 57
{
  return /*CtpP.SendQueueP*/QueueC__0__size;
}

#line 97
static inline error_t /*CtpP.SendQueueP*/QueueC__0__Queue__enqueue(/*CtpP.SendQueueP*/QueueC__0__queue_t newVal)
#line 97
{
  if (/*CtpP.SendQueueP*/QueueC__0__Queue__size() < /*CtpP.SendQueueP*/QueueC__0__Queue__maxSize()) {
      ;
      /*CtpP.SendQueueP*/QueueC__0__queue[/*CtpP.SendQueueP*/QueueC__0__tail] = newVal;
      /*CtpP.SendQueueP*/QueueC__0__tail++;
      if (/*CtpP.SendQueueP*/QueueC__0__tail == 12) {
#line 102
        /*CtpP.SendQueueP*/QueueC__0__tail = 0;
        }
#line 103
      /*CtpP.SendQueueP*/QueueC__0__size++;
      /*CtpP.SendQueueP*/QueueC__0__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/opt/tinyos-2.x/tos/interfaces/Queue.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__enqueue(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__t  newVal){
#line 90
  unsigned char result;
#line 90

#line 90
  result = /*CtpP.SendQueueP*/QueueC__0__Queue__enqueue(newVal);
#line 90

#line 90
  return result;
#line 90
}
#line 90
# 88 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static inline /*CtpP.MessagePoolP.PoolP*/PoolP__0__pool_t */*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__get(void )
#line 88
{
  if (/*CtpP.MessagePoolP.PoolP*/PoolP__0__free) {
      /*CtpP.MessagePoolP.PoolP*/PoolP__0__pool_t *rval = /*CtpP.MessagePoolP.PoolP*/PoolP__0__queue[/*CtpP.MessagePoolP.PoolP*/PoolP__0__index];

#line 91
      /*CtpP.MessagePoolP.PoolP*/PoolP__0__queue[/*CtpP.MessagePoolP.PoolP*/PoolP__0__index] = (void *)0;
      /*CtpP.MessagePoolP.PoolP*/PoolP__0__free--;
      /*CtpP.MessagePoolP.PoolP*/PoolP__0__index++;
      if (/*CtpP.MessagePoolP.PoolP*/PoolP__0__index == 12) {
          /*CtpP.MessagePoolP.PoolP*/PoolP__0__index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 97 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__t * /*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__get(void ){
#line 97
  nx_struct message_t *result;
#line 97

#line 97
  result = /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__get();
#line 97

#line 97
  return result;
#line 97
}
#line 97
# 88 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static inline /*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool_t */*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__get(void )
#line 88
{
  if (/*CtpP.QEntryPoolP.PoolP*/PoolP__1__free) {
      /*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool_t *rval = /*CtpP.QEntryPoolP.PoolP*/PoolP__1__queue[/*CtpP.QEntryPoolP.PoolP*/PoolP__1__index];

#line 91
      /*CtpP.QEntryPoolP.PoolP*/PoolP__1__queue[/*CtpP.QEntryPoolP.PoolP*/PoolP__1__index] = (void *)0;
      /*CtpP.QEntryPoolP.PoolP*/PoolP__1__free--;
      /*CtpP.QEntryPoolP.PoolP*/PoolP__1__index++;
      if (/*CtpP.QEntryPoolP.PoolP*/PoolP__1__index == 12) {
          /*CtpP.QEntryPoolP.PoolP*/PoolP__1__index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 97 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__t * /*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__get(void ){
#line 97
  struct __nesc_unnamed4329 *result;
#line 97

#line 97
  result = /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__get();
#line 97

#line 97
  return result;
#line 97
}
#line 97
# 75 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static inline bool /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__empty(void )
#line 75
{
  ;
  return /*CtpP.QEntryPoolP.PoolP*/PoolP__1__free == 0;
}

# 61 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__empty(void ){
#line 61
  unsigned char result;
#line 61

#line 61
  result = /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__empty();
#line 61

#line 61
  return result;
#line 61
}
#line 61
# 75 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static inline bool /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__empty(void )
#line 75
{
  ;
  return /*CtpP.MessagePoolP.PoolP*/PoolP__0__free == 0;
}

# 61 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__empty(void ){
#line 61
  unsigned char result;
#line 61

#line 61
  result = /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__empty();
#line 61

#line 61
  return result;
#line 61
}
#line 61
# 584 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline message_t * /*CtpP.Forwarder*/CtpForwardingEngineP__0__forward(message_t * m)
#line 584
{
  if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__empty()) {
      ;

      /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_MSG_POOL_EMPTY);
    }
  else {
#line 590
    if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__empty()) {
        ;


        /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_QENTRY_POOL_EMPTY);
      }
    else {
        message_t *newMsg;
        fe_queue_entry_t *qe;
        uint16_t gradient;

        qe = /*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__get();
        if (qe == (void *)0) {
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_GET_MSGPOOL_ERR);
            return m;
          }

        newMsg = /*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__get();
        if (newMsg == (void *)0) {
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_GET_QEPOOL_ERR);
            return m;
          }

        memset(newMsg, 0, sizeof(message_t ));
        memset(m->metadata, 0, sizeof(message_metadata_t ));

        qe->msg = m;
        qe->client = 0xff;
        qe->retries = MAX_RETRIES;


        if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__enqueue(qe) == SUCCESS) {
            ;

            if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__getEtx(&gradient) == SUCCESS) {

                if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getEtx(m) <= gradient) {




                    /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__triggerImmediateRouteUpdate();
                    /*CtpP.Forwarder*/CtpForwardingEngineP__0__startRetxmitTimer(LOOPY_WINDOW, LOOPY_OFFSET);
                    /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(NET_C_FE_LOOP_DETECTED, 
                    /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(m), 
                    /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(m), 
                    /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(m));
                  }
              }

            if (!/*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__isRunning()) {


                ;
                /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__postTask();
              }


            return newMsg;
          }
        else 
#line 649
          {

            if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__put(newMsg) != SUCCESS) {
              /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_PUT_MSGPOOL_ERR);
              }
#line 653
            if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__put(qe) != SUCCESS) {
              /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_PUT_QEPOOL_ERR);
              }
          }
      }
    }



  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_SEND_QUEUE_FULL);
  return m;
}

#line 860
static inline 
#line 859
bool 
/*CtpP.Forwarder*/CtpForwardingEngineP__0__Intercept__default__forward(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len)
#line 861
{
  return TRUE;
}

# 31 "/opt/tinyos-2.x/tos/interfaces/Intercept.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__Intercept__forward(collection_id_t arg_0x40f8f3f0, message_t * msg, void * payload, uint8_t len){
#line 31
  unsigned char result;
#line 31

#line 31
    result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Intercept__default__forward(arg_0x40f8f3f0, msg, payload, len);
#line 31

#line 31
  return result;
#line 31
}
#line 31
# 829 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__matchInstance(message_t *m1, message_t *m2)
#line 829
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getOrigin(m1) == /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getOrigin(m2) && 
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getSequenceNumber(m1) == /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getSequenceNumber(m2) && 
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getThl(m1) == /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getThl(m2) && 
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getType(m1) == /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getType(m2);
}

# 112 "/opt/tinyos-2.x/tos/system/QueueC.nc"
static inline /*CtpP.SendQueueP*/QueueC__0__queue_t /*CtpP.SendQueueP*/QueueC__0__Queue__element(uint8_t idx)
#line 112
{
  idx += /*CtpP.SendQueueP*/QueueC__0__head;
  if (idx >= 12) {
      idx -= 12;
    }
  return /*CtpP.SendQueueP*/QueueC__0__queue[idx];
}

# 101 "/opt/tinyos-2.x/tos/interfaces/Queue.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__t  /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__element(uint8_t idx){
#line 101
  struct __nesc_unnamed4329 *result;
#line 101

#line 101
  result = /*CtpP.SendQueueP*/QueueC__0__Queue__element(idx);
#line 101

#line 101
  return result;
#line 101
}
#line 101
#line 58
inline static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__size(void ){
#line 58
  unsigned char result;
#line 58

#line 58
  result = /*CtpP.SendQueueP*/QueueC__0__Queue__size();
#line 58

#line 58
  return result;
#line 58
}
#line 58
# 101 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static uint8_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__maxPayloadLength(void ){
#line 101
  unsigned char result;
#line 101

#line 101
  result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__maxPayloadLength(2U);
#line 101

#line 101
  return result;
#line 101
}
#line 101
# 61 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline uint8_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__maxPayloadLength(void )
#line 61
{
  return /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__maxPayloadLength();
}

# 112 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__maxPayloadLength(void ){
#line 112
  unsigned char result;
#line 112

#line 112
  result = /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__maxPayloadLength();
#line 112

#line 112
  return result;
#line 112
}
#line 112
# 811 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setThl(message_t *msg, uint8_t thl)
#line 811
{
#line 811
  __nesc_hton_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->thl.data, thl);
}

#line 674
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 675
{
  collection_id_t collectid;
  bool duplicate = FALSE;
  fe_queue_entry_t *qe;
  uint8_t i;
#line 679
  uint8_t thl;


  collectid = /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getType(msg);



  thl = /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getThl(msg);
  thl++;
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setThl(msg, thl);

  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(NET_C_FE_RCV_MSG, 
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(msg), 
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(msg), 
  thl--);
  if (len > /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__maxPayloadLength()) {
      return msg;
    }



  if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__lookup(msg)) {
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_DUPLICATE_CACHE);
      return msg;
    }

  if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__size() > 0) {
      for (i = /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__size(); --i; ) {
          qe = /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__element(i);
          if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__matchInstance(qe->msg, msg)) {
              duplicate = TRUE;
              break;
            }
        }
    }

  if (duplicate) {
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_DUPLICATE_QUEUE);
      return msg;
    }
  else {

    if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__RootControl__isRoot()) {
      return /*CtpP.Forwarder*/CtpForwardingEngineP__0__Receive__receive(collectid, msg, 
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__getPayload(msg, /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__payloadLength(msg)), 
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__payloadLength(msg));
      }
    else {
      if (!/*CtpP.Forwarder*/CtpForwardingEngineP__0__Intercept__forward(collectid, msg, 
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__getPayload(msg, /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__payloadLength(msg)), 
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__payloadLength(msg))) {
        return msg;
        }
      else 
#line 731
        {
          ;
          return /*CtpP.Forwarder*/CtpForwardingEngineP__0__forward(msg);
        }
      }
    }
}

# 708 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableUpdateEntry(am_addr_t from, am_addr_t parent, uint16_t etx)
#line 708
{
  uint8_t idx;
  uint16_t linkEtx;

#line 711
  linkEtx = /*CtpP.Router*/CtpRoutingEngineP__0__evaluateEtx(/*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__getLinkQuality(from));

  idx = /*CtpP.Router*/CtpRoutingEngineP__0__routingTableFind(from);
  if (idx == 10) {




      ;
      return FAIL;
    }
  else {
#line 722
    if (idx == /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive) {

        if (/*CtpP.Router*/CtpRoutingEngineP__0__passLinkEtxThreshold(linkEtx)) {
            { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 725
              {
                /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].neighbor = from;
                /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].info.parent = parent;
                /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].info.etx = etx;
                /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].info.haveHeard = 1;
                /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].info.congested = FALSE;
                /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive++;
              }
#line 732
              __nesc_atomic_end(__nesc_atomic); }
            ;
          }
        else 
#line 734
          {
            ;
          }
      }
    else 
#line 737
      {

        { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 739
          {
            /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].neighbor = from;
            /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].info.parent = parent;
            /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].info.etx = etx;
            /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].info.haveHeard = 1;
          }
#line 744
          __nesc_atomic_end(__nesc_atomic); }
        ;
      }
    }
#line 747
  return SUCCESS;
}

# 769 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__evicted(am_addr_t neighbor)
#line 769
{
}

# 61 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
inline static void LinkEstimatorP__LinkEstimator__evicted(am_addr_t neighbor){
#line 61
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__evicted(neighbor);
#line 61
  /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__evicted(neighbor);
#line 61
}
#line 61
# 458 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP__LinkEstimator__insertNeighbor(am_addr_t neighbor)
#line 458
{
  uint8_t nidx;

  nidx = LinkEstimatorP__findIdx(neighbor);
  if (nidx != LinkEstimatorP__INVALID_RVAL) {
      ;
      return SUCCESS;
    }

  nidx = LinkEstimatorP__findEmptyNeighborIdx();
  if (nidx != LinkEstimatorP__INVALID_RVAL) {
      ;
      LinkEstimatorP__initNeighborIdx(nidx, neighbor);
      return SUCCESS;
    }
  else 
#line 472
    {
      nidx = LinkEstimatorP__findWorstNeighborIdx(LinkEstimatorP__BEST_EETX);
      if (nidx != LinkEstimatorP__INVALID_RVAL) {
          ;

          LinkEstimatorP__LinkEstimator__evicted(LinkEstimatorP__NeighborTable[nidx].ll_addr);
          LinkEstimatorP__initNeighborIdx(nidx, neighbor);
          return SUCCESS;
        }
    }
  return FAIL;
}

# 41 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__insertNeighbor(am_addr_t neighbor){
#line 41
  unsigned char result;
#line 41

#line 41
  result = LinkEstimatorP__LinkEstimator__insertNeighbor(neighbor);
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 77 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*CtpP.Router*/CtpRoutingEngineP__0__AMPacket__source(message_t * amsg){
#line 77
  unsigned short result;
#line 77

#line 77
  result = CC2420ActiveMessageP__AMPacket__source(amsg);
#line 77

#line 77
  return result;
#line 77
}
#line 77
# 459 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline message_t */*CtpP.Router*/CtpRoutingEngineP__0__BeaconReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 459
{
  am_addr_t from;
  ctp_routing_header_t *rcvBeacon;
  bool congested;


  if (len != sizeof(ctp_routing_header_t )) {
      ;




      return msg;
    }


  from = /*CtpP.Router*/CtpRoutingEngineP__0__AMPacket__source(msg);
  rcvBeacon = (ctp_routing_header_t *)payload;

  congested = /*CtpP.Router*/CtpRoutingEngineP__0__CtpRoutingPacket__getOption(msg, CTP_OPT_ECN);

  ;




  if (__nesc_ntoh_uint16(rcvBeacon->parent.data) != INVALID_ADDR) {



      if (__nesc_ntoh_uint16(rcvBeacon->etx.data) == 0) {
          ;
          /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__insertNeighbor(from);
          /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__pinNeighbor(from);
        }


      /*CtpP.Router*/CtpRoutingEngineP__0__routingTableUpdateEntry(from, __nesc_ntoh_uint16(rcvBeacon->parent.data), __nesc_ntoh_uint16(rcvBeacon->etx.data));
      /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__setNeighborCongested(from, congested);
    }

  if (/*CtpP.Router*/CtpRoutingEngineP__0__CtpRoutingPacket__getOption(msg, CTP_OPT_PULL)) {
      /*CtpP.Router*/CtpRoutingEngineP__0__resetInterval();
    }
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * LinkEstimatorP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = /*CtpP.Router*/CtpRoutingEngineP__0__BeaconReceive__receive(msg, payload, len);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t LinkEstimatorP__Random__rand16(void ){
#line 41
  unsigned short result;
#line 41

#line 41
  result = RandomMlcgC__Random__rand16();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 237 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline uint8_t LinkEstimatorP__findRandomNeighborIdx(void )
#line 237
{
  uint8_t i;
  uint8_t cnt;
  uint8_t num_eligible_eviction;

  num_eligible_eviction = 0;
  for (i = 0; i < 10; i++) {
      if (LinkEstimatorP__NeighborTable[i].flags & VALID_ENTRY) {
          if (LinkEstimatorP__NeighborTable[i].flags & PINNED_ENTRY || 
          LinkEstimatorP__NeighborTable[i].flags & MATURE_ENTRY) {
            }
          else 
#line 247
            {
              num_eligible_eviction++;
            }
        }
    }

  if (num_eligible_eviction == 0) {
      return LinkEstimatorP__INVALID_RVAL;
    }

  cnt = LinkEstimatorP__Random__rand16() % num_eligible_eviction;

  for (i = 0; i < 10; i++) {
      if (! LinkEstimatorP__NeighborTable[i].flags & VALID_ENTRY) {
        continue;
        }
#line 262
      if (LinkEstimatorP__NeighborTable[i].flags & PINNED_ENTRY || 
      LinkEstimatorP__NeighborTable[i].flags & MATURE_ENTRY) {
        continue;
        }
#line 265
      if (cnt-- == 0) {
        return i;
        }
    }
#line 268
  return LinkEstimatorP__INVALID_RVAL;
}

# 136 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_id_t /*CtpP.Router*/CtpRoutingEngineP__0__AMPacket__type(message_t * amsg){
#line 136
  unsigned char result;
#line 136

#line 136
  result = CC2420ActiveMessageP__AMPacket__type(amsg);
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 640 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline bool /*CtpP.Router*/CtpRoutingEngineP__0__CompareBit__shouldInsert(message_t *msg, void *payload, uint8_t len)
#line 640
{

  bool found = FALSE;
  uint16_t pathEtx;
  uint16_t neighEtx;
  int i;
  routing_table_entry *entry;
  ctp_routing_header_t *rcvBeacon;

  if (/*CtpP.Router*/CtpRoutingEngineP__0__AMPacket__type(msg) != AM_CTP_ROUTING || 
  len != sizeof(ctp_routing_header_t )) {
    return FALSE;
    }

  rcvBeacon = (ctp_routing_header_t *)payload;

  if (__nesc_ntoh_uint16(rcvBeacon->parent.data) == INVALID_ADDR) {
    return FALSE;
    }
  if (__nesc_ntoh_uint16(rcvBeacon->etx.data) == 0) {
      return TRUE;
    }

  pathEtx = __nesc_ntoh_uint16(rcvBeacon->etx.data);


  for (i = 0; i < /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive && !found; i++) {
      entry = &/*CtpP.Router*/CtpRoutingEngineP__0__routingTable[i];

      if (entry->neighbor == /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent) {
        continue;
        }
#line 671
      neighEtx = entry->info.etx;

      found |= pathEtx < neighEtx;
    }
  return found;
}

# 43 "/opt/tinyos-2.x/tos/lib/net/ctp/CompareBit.nc"
inline static bool LinkEstimatorP__CompareBit__shouldInsert(message_t * msg, void * payload, uint8_t len){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*CtpP.Router*/CtpRoutingEngineP__0__CompareBit__shouldInsert(msg, payload, len);
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 94 "/opt/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline uint8_t CC2420PacketP__CC2420Packet__getLqi(message_t *p_msg)
#line 94
{
  return __nesc_ntoh_uint8(CC2420PacketP__CC2420PacketBody__getMetadata(p_msg)->lqi.data);
}

#line 122
static inline bool CC2420PacketP__LinkPacketMetadata__highChannelQuality(message_t *msg)
#line 122
{
  return CC2420PacketP__CC2420Packet__getLqi(msg) > 105;
}

# 47 "/opt/tinyos-2.x/tos/interfaces/LinkPacketMetadata.nc"
inline static bool LinkEstimatorP__LinkPacketMetadata__highChannelQuality(message_t * msg){
#line 47
  unsigned char result;
#line 47

#line 47
  result = CC2420PacketP__LinkPacketMetadata__highChannelQuality(msg);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 392 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void LinkEstimatorP__print_neighbor_table(void )
#line 392
{
  uint8_t i;
  neighbor_table_entry_t *ne;

#line 395
  for (i = 0; i < 10; i++) {
      ne = &LinkEstimatorP__NeighborTable[i];
      if (ne->flags & VALID_ENTRY) {
          ;
        }
    }
}

# 77 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t LinkEstimatorP__SubAMPacket__source(message_t * amsg){
#line 77
  unsigned short result;
#line 77

#line 77
  result = CC2420ActiveMessageP__AMPacket__source(amsg);
#line 77

#line 77
  return result;
#line 77
}
#line 77
#line 67
inline static am_addr_t LinkEstimatorP__SubAMPacket__destination(message_t * amsg){
#line 67
  unsigned short result;
#line 67

#line 67
  result = CC2420ActiveMessageP__AMPacket__destination(amsg);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 587 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void LinkEstimatorP__processReceivedMessage(message_t * msg, void * payload, uint8_t len)
#line 587
{
  uint8_t nidx;
  uint8_t num_entries;

  ;
  LinkEstimatorP__print_packet(msg, len);

  if (LinkEstimatorP__SubAMPacket__destination(msg) == AM_BROADCAST_ADDR) {
      linkest_header_t *hdr = LinkEstimatorP__getHeader(msg);
      am_addr_t ll_addr;

      ll_addr = LinkEstimatorP__SubAMPacket__source(msg);

      ;

      num_entries = __nesc_ntoh_uint8(hdr->flags.data) & NUM_ENTRIES_FLAG;
      LinkEstimatorP__print_neighbor_table();
#line 619
      nidx = LinkEstimatorP__findIdx(ll_addr);
      if (nidx != LinkEstimatorP__INVALID_RVAL) {
          ;
          LinkEstimatorP__updateNeighborEntryIdx(nidx, __nesc_ntoh_uint8(hdr->seq.data));
        }
      else 
#line 623
        {
          nidx = LinkEstimatorP__findEmptyNeighborIdx();
          if (nidx != LinkEstimatorP__INVALID_RVAL) {
              ;
              LinkEstimatorP__initNeighborIdx(nidx, ll_addr);
              LinkEstimatorP__updateNeighborEntryIdx(nidx, __nesc_ntoh_uint8(hdr->seq.data));
            }
          else 
#line 629
            {
              nidx = LinkEstimatorP__findWorstNeighborIdx(LinkEstimatorP__EVICT_EETX_THRESHOLD);
              if (nidx != LinkEstimatorP__INVALID_RVAL) {
                  ;

                  LinkEstimatorP__LinkEstimator__evicted(LinkEstimatorP__NeighborTable[nidx].ll_addr);
                  LinkEstimatorP__initNeighborIdx(nidx, ll_addr);
                }
              else 
#line 636
                {
                  ;





                  if (LinkEstimatorP__LinkPacketMetadata__highChannelQuality(msg)) {
                      if (LinkEstimatorP__CompareBit__shouldInsert(msg, 
                      LinkEstimatorP__Packet__getPayload(msg, LinkEstimatorP__Packet__payloadLength(msg)), 
                      LinkEstimatorP__Packet__payloadLength(msg))) {
                          nidx = LinkEstimatorP__findRandomNeighborIdx();
                          if (nidx != LinkEstimatorP__INVALID_RVAL) {
                              LinkEstimatorP__LinkEstimator__evicted(LinkEstimatorP__NeighborTable[nidx].ll_addr);
                              LinkEstimatorP__initNeighborIdx(nidx, ll_addr);
                            }
                        }
                    }
                }
            }
        }
    }
}





static inline message_t *LinkEstimatorP__SubReceive__receive(message_t *msg, 
void *payload, 
uint8_t len)
#line 666
{
  ;
  LinkEstimatorP__processReceivedMessage(msg, payload, len);
  return LinkEstimatorP__Receive__receive(msg, 
  LinkEstimatorP__Packet__getPayload(msg, LinkEstimatorP__Packet__payloadLength(msg)), 
  LinkEstimatorP__Packet__payloadLength(msg));
}

# 266 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline message_t *CC2420ActiveMessageP__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 266
{
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * CC2420ActiveMessageP__Receive__receive(am_id_t arg_0x40ba3db8, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x40ba3db8) {
#line 67
    case 96:
#line 67
      result = DisseminationEngineImplP__Receive__receive(msg, payload, len);
#line 67
      break;
#line 67
    case 97:
#line 67
      result = DisseminationEngineImplP__ProbeReceive__receive(msg, payload, len);
#line 67
      break;
#line 67
    case 112:
#line 67
      result = LinkEstimatorP__SubReceive__receive(msg, payload, len);
#line 67
      break;
#line 67
    case 113:
#line 67
      result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubReceive__receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      result = CC2420ActiveMessageP__Receive__default__receive(arg_0x40ba3db8, msg, payload, len);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 61 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void )
#line 61
{
  return ActiveMessageAddressC__amAddress();
}

# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t CC2420ActiveMessageP__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short result;
#line 50

#line 50
  result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 122 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline am_addr_t CC2420ActiveMessageP__AMPacket__address(void )
#line 122
{
  return CC2420ActiveMessageP__ActiveMessageAddress__amAddress();
}

#line 146
static inline bool CC2420ActiveMessageP__AMPacket__isForMe(message_t *amsg)
#line 146
{
  return CC2420ActiveMessageP__AMPacket__destination(amsg) == CC2420ActiveMessageP__AMPacket__address() || 
  CC2420ActiveMessageP__AMPacket__destination(amsg) == AM_BROADCAST_ADDR;
}

#line 206
static inline message_t *CC2420ActiveMessageP__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 206
{

  if (CC2420ActiveMessageP__AMPacket__isForMe(msg)) {
      return CC2420ActiveMessageP__Receive__receive(CC2420ActiveMessageP__AMPacket__type(msg), msg, payload, len);
    }
  else {
      return CC2420ActiveMessageP__Snoop__receive(CC2420ActiveMessageP__AMPacket__type(msg), msg, payload, len);
    }
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * CC2420TinyosNetworkP__ActiveReceive__receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = CC2420ActiveMessageP__SubReceive__receive(msg, payload, len);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 75 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Packet.nc"
inline static uint8_t CC2420TinyosNetworkP__CC2420Packet__getNetwork(message_t *p_msg){
#line 75
  unsigned char result;
#line 75

#line 75
  result = CC2420PacketP__CC2420Packet__getNetwork(p_msg);
#line 75

#line 75
  return result;
#line 75
}
#line 75
# 47 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420TinyosNetworkP__CC2420PacketBody__getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *result;
#line 47

#line 47
  result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 126 "/opt/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline message_t *CC2420TinyosNetworkP__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 126
{

  if (! __nesc_ntoh_int8(CC2420TinyosNetworkP__CC2420PacketBody__getMetadata(msg)->crc.data)) {
      return msg;
    }

  if (CC2420TinyosNetworkP__CC2420Packet__getNetwork(msg) == 0x3f) {
      return CC2420TinyosNetworkP__ActiveReceive__receive(msg, payload, len);
    }
  else 
#line 134
    {
      cc2420_header_t *hdr = CC2420TinyosNetworkP__CC2420PacketBody__getHeader(msg);

#line 136
      return CC2420TinyosNetworkP__BareReceive__receive(msg, & hdr->network, len + AM_OVERHEAD);
    }
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * UniqueReceiveP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = CC2420TinyosNetworkP__SubReceive__receive(msg, payload, len);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 137 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn)
#line 137
{
  uint8_t element = UniqueReceiveP__recycleSourceElement;
  bool increment = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 141
    {
      if (element == UniqueReceiveP__INVALID_ELEMENT || UniqueReceiveP__writeIndex == element) {

          element = UniqueReceiveP__writeIndex;
          increment = TRUE;
        }

      UniqueReceiveP__receivedMessages[element].source = msgSource;
      UniqueReceiveP__receivedMessages[element].dsn = msgDsn;
      if (increment) {
          UniqueReceiveP__writeIndex++;
          UniqueReceiveP__writeIndex %= 4;
        }
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}


static inline message_t *UniqueReceiveP__DuplicateReceive__default__receive(message_t *msg, void *payload, uint8_t len)
#line 158
{
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * UniqueReceiveP__DuplicateReceive__receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = UniqueReceiveP__DuplicateReceive__default__receive(msg, payload, len);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 111 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn)
#line 111
{
  int i;

#line 113
  UniqueReceiveP__recycleSourceElement = UniqueReceiveP__INVALID_ELEMENT;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 115
    {
      for (i = 0; i < 4; i++) {
          if (UniqueReceiveP__receivedMessages[i].source == msgSource) {
              if (UniqueReceiveP__receivedMessages[i].dsn == msgDsn) {

                  {
                    unsigned char __nesc_temp = 
#line 120
                    TRUE;

                    {
#line 120
                      __nesc_atomic_end(__nesc_atomic); 
#line 120
                      return __nesc_temp;
                    }
                  }
                }
#line 123
              UniqueReceiveP__recycleSourceElement = i;
            }
        }
    }
#line 126
    __nesc_atomic_end(__nesc_atomic); }

  return FALSE;
}

# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * UniqueReceiveP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 85 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline message_t *UniqueReceiveP__SubReceive__receive(message_t *msg, void *payload, 
uint8_t len)
#line 86
{
  uint16_t msgSource = __nesc_ntoh_leuint16(UniqueReceiveP__CC2420PacketBody__getHeader(msg)->src.data);
  uint8_t msgDsn = __nesc_ntoh_leuint8(UniqueReceiveP__CC2420PacketBody__getHeader(msg)->dsn.data);

  if (UniqueReceiveP__hasSeen(msgSource, msgDsn)) {
      return UniqueReceiveP__DuplicateReceive__receive(msg, payload, len);
    }
  else {
      UniqueReceiveP__insert(msgSource, msgDsn);
      return UniqueReceiveP__Receive__receive(msg, payload, len);
    }
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * CC2420ReceiveP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = UniqueReceiveP__SubReceive__receive(msg, payload, len);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 64 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static uint16_t CC2420ReceiveP__CC2420Config__getShortAddr(void ){
#line 64
  unsigned short result;
#line 64

#line 64
  result = CC2420ControlP__CC2420Config__getShortAddr();
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 332 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isAddressRecognitionEnabled(void )
#line 332
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 333
    {
      unsigned char __nesc_temp = 
#line 333
      CC2420ControlP__addressRecognition;

      {
#line 333
        __nesc_atomic_end(__nesc_atomic); 
#line 333
        return __nesc_temp;
      }
    }
#line 335
    __nesc_atomic_end(__nesc_atomic); }
}

# 86 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP__CC2420Config__isAddressRecognitionEnabled(void ){
#line 86
  unsigned char result;
#line 86

#line 86
  result = CC2420ControlP__CC2420Config__isAddressRecognitionEnabled();
#line 86

#line 86
  return result;
#line 86
}
#line 86
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420ReceiveP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 819 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline bool CC2420ReceiveP__passesAddressCheck(message_t *msg)
#line 819
{
  cc2420_header_t *header = CC2420ReceiveP__CC2420PacketBody__getHeader(msg);

  if (!CC2420ReceiveP__CC2420Config__isAddressRecognitionEnabled()) {
      return TRUE;
    }

  return __nesc_ntoh_leuint16(header->dest.data) == CC2420ReceiveP__CC2420Config__getShortAddr()
   || __nesc_ntoh_leuint16(header->dest.data) == AM_BROADCAST_ADDR;
}

# 47 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420ReceiveP__CC2420PacketBody__getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *result;
#line 47

#line 47
  result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 671 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__receiveDone_task__runTask(void )
#line 671
{
  cc2420_metadata_t *metadata = CC2420ReceiveP__CC2420PacketBody__getMetadata(CC2420ReceiveP__m_p_rx_buf);
  cc2420_header_t *header = CC2420ReceiveP__CC2420PacketBody__getHeader(CC2420ReceiveP__m_p_rx_buf);
  uint8_t length = __nesc_ntoh_leuint8(header->length.data);
  uint8_t tmpLen __attribute((unused))  = sizeof(message_t ) - ((unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t * buf = (uint8_t * )header;

  __nesc_hton_int8(metadata->crc.data, buf[length] >> 7);
  __nesc_hton_uint8(metadata->lqi.data, buf[length] & 0x7f);
  __nesc_hton_uint8(metadata->rssi.data, buf[length - 1]);

  if (CC2420ReceiveP__passesAddressCheck(CC2420ReceiveP__m_p_rx_buf) && length >= CC2420_SIZE) {
#line 696
      CC2420ReceiveP__m_p_rx_buf = CC2420ReceiveP__Receive__receive(CC2420ReceiveP__m_p_rx_buf, CC2420ReceiveP__m_p_rx_buf->data, 
      length - CC2420_SIZE);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 699
    CC2420ReceiveP__receivingPacket = FALSE;
#line 699
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ReceiveP__waitForNextPacket();
}

# 301 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline uint8_t LinkEstimatorP__computeEETX(uint8_t q1)
#line 301
{
  uint16_t q;

#line 303
  if (q1 > 0) {
      q = 2550 / q1 - 10;
      if (q > 255) {
          q = LinkEstimatorP__VERY_LARGE_EETX_VALUE;
        }
      return (uint8_t )q;
    }
  else 
#line 309
    {
      return LinkEstimatorP__VERY_LARGE_EETX_VALUE;
    }
}



static inline void LinkEstimatorP__updateNeighborTableEst(am_addr_t n)
#line 316
{
  uint8_t i;
#line 317
  uint8_t totalPkt;
  neighbor_table_entry_t *ne;
  uint8_t newEst;
  uint8_t minPkt;

  minPkt = LinkEstimatorP__BLQ_PKT_WINDOW;
  ;
  for (i = 0; i < 10; i++) {
      ne = &LinkEstimatorP__NeighborTable[i];
      if (ne->ll_addr == n) {
          if (ne->flags & VALID_ENTRY) {
              ;
              ne->flags |= MATURE_ENTRY;
              totalPkt = ne->rcvcnt + ne->failcnt;
              ;
              if (totalPkt < minPkt) {
                  totalPkt = minPkt;
                }
              if (totalPkt == 0) {
                  ne->inquality = LinkEstimatorP__ALPHA * ne->inquality / 10;
                }
              else 
#line 337
                {
                  newEst = 255UL * ne->rcvcnt / totalPkt;
                  ;
                  ne->inquality = (LinkEstimatorP__ALPHA * ne->inquality + (10 - LinkEstimatorP__ALPHA) * newEst + 5) / 10;
                }
              ne->rcvcnt = 0;
              ne->failcnt = 0;
              LinkEstimatorP__updateEETX(ne, LinkEstimatorP__computeEETX(ne->inquality));
            }
          else 
#line 345
            {
              ;
            }
        }
    }
}

# 751 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableEvict(am_addr_t neighbor)
#line 751
{
  uint8_t idx;
#line 752
  uint8_t i;

#line 753
  idx = /*CtpP.Router*/CtpRoutingEngineP__0__routingTableFind(neighbor);
  if (idx == /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive) {
    return FAIL;
    }
#line 756
  /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive--;
  for (i = idx; i < /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive; i++) {
      /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[i] = /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[i + 1];
    }
  return SUCCESS;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t LinkEstimatorP__SubPacket__payloadLength(message_t * msg){
#line 67
  unsigned char result;
#line 67

#line 67
  result = CC2420ActiveMessageP__Packet__payloadLength(msg);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 576 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline uint8_t LinkEstimatorP__Send__maxPayloadLength(void )
#line 576
{
  return LinkEstimatorP__Packet__maxPayloadLength();
}

# 112 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static uint8_t /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__maxPayloadLength(void ){
#line 112
  unsigned char result;
#line 112

#line 112
  result = LinkEstimatorP__Send__maxPayloadLength();
#line 112

#line 112
  return result;
#line 112
}
#line 112
# 580 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void *LinkEstimatorP__Send__getPayload(message_t *msg, uint8_t len)
#line 580
{
  return LinkEstimatorP__Packet__getPayload(msg, len);
}

# 124 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void * /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__getPayload(message_t * msg, uint8_t len){
#line 124
  void *result;
#line 124

#line 124
  result = LinkEstimatorP__Send__getPayload(msg, len);
#line 124

#line 124
  return result;
#line 124
}
#line 124
# 452 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline ctp_routing_header_t */*CtpP.Router*/CtpRoutingEngineP__0__getHeader(message_t * m)
#line 452
{
  return (ctp_routing_header_t *)/*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__getPayload(m, /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__maxPayloadLength());
}

# 95 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__ChipSpiResource__abortRelease(void )
#line 95
{
  /* atomic removed: atomic calls only */
#line 96
  CC2420SpiP__release = FALSE;
}

# 31 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420TransmitP__ChipSpiResource__abortRelease(void ){
#line 31
  CC2420SpiP__ChipSpiResource__abortRelease();
#line 31
}
#line 31
# 375 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__ChipSpiResource__releasing(void )
#line 375
{
  if (CC2420TransmitP__abortSpiRelease) {
      CC2420TransmitP__ChipSpiResource__abortRelease();
    }
}

# 24 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420SpiP__ChipSpiResource__releasing(void ){
#line 24
  CC2420TransmitP__ChipSpiResource__releasing();
#line 24
}
#line 24
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void Atm128SpiP__McuPowerState__update(void ){
#line 44
  McuSleepC__McuPowerState__update();
#line 44
}
#line 44
# 94 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__sleep(void )
#line 94
{
}

# 72 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__sleep(void ){
#line 72
  HplAtm128SpiP__SPI__sleep();
#line 72
}
#line 72
#line 99
inline static void Atm128SpiP__Spi__enableSpi(bool busOn){
#line 99
  HplAtm128SpiP__SPI__enableSpi(busOn);
#line 99
}
#line 99
# 120 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__stopSpi(void )
#line 120
{
  Atm128SpiP__Spi__enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 122
  {
    Atm128SpiP__Spi__sleep();
  }
  Atm128SpiP__McuPowerState__update();
}

# 173 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 173
{
}

# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x408b9c60){
#line 55
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x408b9c60);
#line 55
}
#line 55
# 58 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void )
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
        uint8_t id = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead;

#line 62
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead];
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
          }
#line 65
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[id] = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 66
          id;

#line 66
          return __nesc_temp;
        }
      }
#line 68
    {
      unsigned char __nesc_temp = 
#line 68
      /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 68
      return __nesc_temp;
    }
  }
}

# 60 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void ){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 50 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void )
#line 50
{
  /* atomic removed: atomic calls only */
#line 51
  {
    unsigned char __nesc_temp = 
#line 51
    /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 51
    return __nesc_temp;
  }
}

# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void ){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 97 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id)
#line 97
{
  bool released = FALSE;

  /* atomic removed: atomic calls only */
#line 99
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId == id) {
        if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty() == FALSE) {
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue();
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
          }
        else {
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE;
          }
        released = TRUE;
      }
  }
  if (released == TRUE) {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
}

# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP__ResourceArbiter__release(uint8_t arg_0x40824068){
#line 110
  unsigned char result;
#line 110

#line 110
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(arg_0x40824068);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 356 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP__Resource__release(uint8_t id)
#line 356
{
  error_t error = Atm128SpiP__ResourceArbiter__release(id);

  /* atomic removed: atomic calls only */
#line 358
  {
    if (!Atm128SpiP__ArbiterInfo__inUse()) {
        Atm128SpiP__stopSpi();
      }
  }
  return error;
}

# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t HplCC2420SpiP__SubResource__release(void ){
#line 110
  unsigned char result;
#line 110

#line 110
  result = Atm128SpiP__Resource__release(0U);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )56U |= 1 << 0;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplCC2420SpiP__SS__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set();
#line 29
}
#line 29
# 75 "/opt/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP__Resource__release(void )
{
  if (HplCC2420SpiP__SubResource__isOwner()) {
    HplCC2420SpiP__SS__set();
    }
  return HplCC2420SpiP__SubResource__release();
}

# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__release(void ){
#line 110
  unsigned char result;
#line 110

#line 110
  result = HplCC2420SpiP__Resource__release();
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 178 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline uint8_t CC2420SpiP__Resource__isOwner(uint8_t id)
#line 178
{
  /* atomic removed: atomic calls only */
#line 179
  {
    unsigned char __nesc_temp = 
#line 179
    CC2420SpiP__m_holder == id;

#line 179
    return __nesc_temp;
  }
}

# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static bool CC2420ReceiveP__SpiResource__isOwner(void ){
#line 118
  unsigned char result;
#line 118

#line 118
  result = CC2420SpiP__Resource__isOwner(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 118

#line 118
  return result;
#line 118
}
#line 118
#line 87
inline static error_t CC2420ReceiveP__SpiResource__immediateRequest(void ){
#line 87
  unsigned char result;
#line 87

#line 87
  result = CC2420SpiP__Resource__immediateRequest(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 87

#line 87
  return result;
#line 87
}
#line 87
#line 78
inline static error_t CC2420ReceiveP__SpiResource__request(void ){
#line 78
  unsigned char result;
#line 78

#line 78
  result = CC2420SpiP__Resource__request(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420SpiP__grant__postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(CC2420SpiP__grant);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 184 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__SpiResource__granted(void )
#line 184
{
  CC2420SpiP__grant__postTask();
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void HplCC2420SpiP__Resource__granted(void ){
#line 92
  CC2420SpiP__SpiResource__granted();
#line 92
}
#line 92
# 67 "/opt/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline void HplCC2420SpiP__SubResource__granted(void )
{
  HplCC2420SpiP__SS__makeOutput();
  HplCC2420SpiP__SS__clr();

  HplCC2420SpiP__Resource__granted();
}

# 374 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__Resource__default__granted(uint8_t id)
#line 374
{
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void Atm128SpiP__Resource__granted(uint8_t arg_0x40827398){
#line 92
  switch (arg_0x40827398) {
#line 92
    case 0U:
#line 92
      HplCC2420SpiP__SubResource__granted();
#line 92
      break;
#line 92
    default:
#line 92
      Atm128SpiP__Resource__default__granted(arg_0x40827398);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 370 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__ResourceArbiter__granted(uint8_t id)
#line 370
{
  Atm128SpiP__Resource__granted(id);
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(uint8_t arg_0x408ba5d8){
#line 92
  Atm128SpiP__ResourceArbiter__granted(arg_0x408ba5d8);
#line 92
}
#line 92
# 155 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void )
#line 155
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 156
    {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId;
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY;
    }
#line 159
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
}

# 71 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
inline static void Atm128SpiP__SpiPacket__sendDone(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 71
  CC2420SpiP__SpiPacket__sendDone(txBuf, rxBuf, len, error);
#line 71
}
#line 71
# 241 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__zeroTask__runTask(void )
#line 241
{
  uint16_t myLen;
  uint8_t * rx;
  uint8_t * tx;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 246
    {
      myLen = Atm128SpiP__len;
      rx = Atm128SpiP__rxBuffer;
      tx = Atm128SpiP__txBuffer;
      Atm128SpiP__rxBuffer = (void *)0;
      Atm128SpiP__txBuffer = (void *)0;
      Atm128SpiP__len = 0;
      Atm128SpiP__pos = 0;
      Atm128SpiP__SpiPacket__sendDone(tx, rx, myLen, SUCCESS);
    }
#line 255
    __nesc_atomic_end(__nesc_atomic); }
}

# 484 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__TXFIFO__readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 485
{
}

# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ReceiveP__SpiResource__release(void ){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420SpiP__Resource__release(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP__CSN__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set();
#line 29
}
#line 29
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ReceiveP__receiveDone_task__postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(CC2420ReceiveP__receiveDone_task);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 47 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420TransmitP__CC2420PacketBody__getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *result;
#line 47

#line 47
  result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 139 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareA__stop(void )
#line 139
{
#line 139
  * (volatile uint8_t *)(0x37 + 0x20) &= ~(1 << 4);
}

# 59 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop(void ){
#line 59
  HplAtm128Timer1P__CompareA__stop();
#line 59
}
#line 59
# 65 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__stop(void )
#line 65
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop();
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__stop(void ){
#line 62
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__stop();
#line 62
}
#line 62
# 91 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__stop(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__stop();
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP__BackoffTimer__stop(void ){
#line 62
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__stop();
#line 62
}
#line 62
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420TransmitP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 387 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t *ack_msg)
#line 387
{
  cc2420_header_t *ack_header;
  cc2420_header_t *msg_header;
  cc2420_metadata_t *msg_metadata;
  uint8_t *ack_buf;
  uint8_t length;

  if (type == IEEE154_TYPE_ACK && CC2420TransmitP__m_msg) {
      ack_header = CC2420TransmitP__CC2420PacketBody__getHeader(ack_msg);
      msg_header = CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg);

      if (CC2420TransmitP__m_state == CC2420TransmitP__S_ACK_WAIT && __nesc_ntoh_leuint8(msg_header->dsn.data) == __nesc_ntoh_leuint8(ack_header->dsn.data)) {
          CC2420TransmitP__BackoffTimer__stop();

          msg_metadata = CC2420TransmitP__CC2420PacketBody__getMetadata(CC2420TransmitP__m_msg);
          ack_buf = (uint8_t *)ack_header;
          length = __nesc_ntoh_leuint8(ack_header->length.data);

          __nesc_hton_int8(msg_metadata->ack.data, TRUE);
          __nesc_hton_uint8(msg_metadata->rssi.data, ack_buf[length - 1]);
          __nesc_hton_uint8(msg_metadata->lqi.data, ack_buf[length] & 0x7f);
          CC2420TransmitP__signalDone(SUCCESS);
        }
    }
}

# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420ReceiveP__CC2420Receive__receive(uint8_t type, message_t * message){
#line 63
  CC2420TransmitP__CC2420Receive__receive(type, message);
#line 63
}
#line 63
# 59 "/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420ReceiveP__PacketTimeStamp__clear(message_t * msg){
#line 59
  CC2420PacketP__PacketTimeStamp32khz__clear(msg);
#line 59
}
#line 59
# 143 "/opt/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline void CC2420PacketP__PacketTimeStamp32khz__set(message_t *msg, uint32_t value)
{
  __nesc_hton_uint32(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timestamp.data, value);
}

# 67 "/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420ReceiveP__PacketTimeStamp__set(message_t * msg, CC2420ReceiveP__PacketTimeStamp__size_type value){
#line 67
  CC2420PacketP__PacketTimeStamp32khz__set(msg, value);
#line 67
}
#line 67
# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__get(void )
#line 45
{
#line 45
  return (* (volatile uint8_t * )33U & (1 << 6)) != 0;
}

# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP__FIFOP__get(void ){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__get(void )
#line 45
{
#line 45
  return (* (volatile uint8_t * )54U & (1 << 7)) != 0;
}

# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP__FIFO__get(void ){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 209 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP__Fifo__continueRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 210
{
  return CC2420SpiP__SpiPacket__send((void *)0, data, len);
}

# 62 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static error_t CC2420ReceiveP__RXFIFO__continueRead(uint8_t * data, uint8_t length){
#line 62
  unsigned char result;
#line 62

#line 62
  result = CC2420SpiP__Fifo__continueRead(CC2420_RXFIFO, data, length);
#line 62

#line 62
  return result;
#line 62
}
#line 62
#line 51
inline static cc2420_status_t CC2420ReceiveP__RXFIFO__beginRead(uint8_t * data, uint8_t length){
#line 51
  unsigned char result;
#line 51

#line 51
  result = CC2420SpiP__Fifo__beginRead(CC2420_RXFIFO, data, length);
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP__CSN__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr();
#line 30
}
#line 30
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP__SACK__strobe(void ){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP__Strobe__strobe(CC2420_SACK);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 359 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isHwAutoAckDefault(void )
#line 359
{
  /* atomic removed: atomic calls only */
#line 360
  {
    unsigned char __nesc_temp = 
#line 360
    CC2420ControlP__hwAutoAckDefault;

#line 360
    return __nesc_temp;
  }
}

# 105 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP__CC2420Config__isHwAutoAckDefault(void ){
#line 105
  unsigned char result;
#line 105

#line 105
  result = CC2420ControlP__CC2420Config__isHwAutoAckDefault();
#line 105

#line 105
  return result;
#line 105
}
#line 105
# 366 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void )
#line 366
{
  /* atomic removed: atomic calls only */
#line 367
  {
    unsigned char __nesc_temp = 
#line 367
    CC2420ControlP__autoAckEnabled;

#line 367
    return __nesc_temp;
  }
}

# 110 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP__CC2420Config__isAutoAckEnabled(void ){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420ControlP__CC2420Config__isAutoAckEnabled();
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 525 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__RXFIFO__readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error)
#line 526
{
  cc2420_header_t *header = CC2420ReceiveP__CC2420PacketBody__getHeader(CC2420ReceiveP__m_p_rx_buf);
  uint8_t tmpLen __attribute((unused))  = sizeof(message_t ) - ((unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t * buf = (uint8_t * )header;

#line 530
  CC2420ReceiveP__rxFrameLength = buf[0];

  switch (CC2420ReceiveP__m_state) {

      case CC2420ReceiveP__S_RX_LENGTH: 
        CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_FCF;



      if (CC2420ReceiveP__rxFrameLength + 1 > CC2420ReceiveP__m_bytes_left) 



        {

          CC2420ReceiveP__flush();
        }
      else {
          if (!CC2420ReceiveP__FIFO__get() && !CC2420ReceiveP__FIFOP__get()) {
              CC2420ReceiveP__m_bytes_left -= CC2420ReceiveP__rxFrameLength + 1;
            }

          if (CC2420ReceiveP__rxFrameLength <= MAC_PACKET_SIZE) {
              if (CC2420ReceiveP__rxFrameLength > 0) {
                  if (CC2420ReceiveP__rxFrameLength > CC2420ReceiveP__SACK_HEADER_LENGTH) {

                      CC2420ReceiveP__RXFIFO__continueRead(buf + 1, CC2420ReceiveP__SACK_HEADER_LENGTH);
                    }
                  else {

                      CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_PAYLOAD;
                      CC2420ReceiveP__RXFIFO__continueRead(buf + 1, CC2420ReceiveP__rxFrameLength);
                    }
                }
              else {
                  /* atomic removed: atomic calls only */
                  CC2420ReceiveP__receivingPacket = FALSE;
                  CC2420ReceiveP__CSN__set();
                  CC2420ReceiveP__SpiResource__release();
                  CC2420ReceiveP__waitForNextPacket();
                }
            }
          else {

              CC2420ReceiveP__flush();
            }
        }
      break;

      case CC2420ReceiveP__S_RX_FCF: 
        CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_PAYLOAD;










      if (CC2420ReceiveP__CC2420Config__isAutoAckEnabled() && !CC2420ReceiveP__CC2420Config__isHwAutoAckDefault()) {



          if (((__nesc_ntoh_leuint16(
#line 592
          header->fcf.data) >> IEEE154_FCF_ACK_REQ) & 0x01) == 1
           && (__nesc_ntoh_leuint16(header->dest.data) == CC2420ReceiveP__CC2420Config__getShortAddr()
           || __nesc_ntoh_leuint16(header->dest.data) == AM_BROADCAST_ADDR)
           && ((__nesc_ntoh_leuint16(header->fcf.data) >> IEEE154_FCF_FRAME_TYPE) & 7) == IEEE154_TYPE_DATA) {

              CC2420ReceiveP__CSN__set();
              CC2420ReceiveP__CSN__clr();
              CC2420ReceiveP__SACK__strobe();
              CC2420ReceiveP__CSN__set();
              CC2420ReceiveP__CSN__clr();
              CC2420ReceiveP__RXFIFO__beginRead(buf + 1 + CC2420ReceiveP__SACK_HEADER_LENGTH, 
              CC2420ReceiveP__rxFrameLength - CC2420ReceiveP__SACK_HEADER_LENGTH);
              return;
            }
        }

      CC2420ReceiveP__RXFIFO__continueRead(buf + 1 + CC2420ReceiveP__SACK_HEADER_LENGTH, 
      CC2420ReceiveP__rxFrameLength - CC2420ReceiveP__SACK_HEADER_LENGTH);
      break;

      case CC2420ReceiveP__S_RX_PAYLOAD: 

        CC2420ReceiveP__CSN__set();
      if (!CC2420ReceiveP__m_missed_packets) {

          CC2420ReceiveP__SpiResource__release();
        }




      if ((((
#line 621
      CC2420ReceiveP__m_missed_packets && CC2420ReceiveP__FIFO__get()) || !CC2420ReceiveP__FIFOP__get())
       || !CC2420ReceiveP__m_timestamp_size)
       || CC2420ReceiveP__rxFrameLength <= 10) {
          CC2420ReceiveP__PacketTimeStamp__clear(CC2420ReceiveP__m_p_rx_buf);
        }
      else {
          if (CC2420ReceiveP__m_timestamp_size == 1) {
            CC2420ReceiveP__PacketTimeStamp__set(CC2420ReceiveP__m_p_rx_buf, CC2420ReceiveP__m_timestamp_queue[CC2420ReceiveP__m_timestamp_head]);
            }
#line 629
          CC2420ReceiveP__m_timestamp_head = (CC2420ReceiveP__m_timestamp_head + 1) % CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE;
          CC2420ReceiveP__m_timestamp_size--;

          if (CC2420ReceiveP__m_timestamp_size > 0) {
              CC2420ReceiveP__PacketTimeStamp__clear(CC2420ReceiveP__m_p_rx_buf);
              CC2420ReceiveP__m_timestamp_head = 0;
              CC2420ReceiveP__m_timestamp_size = 0;
            }
        }



      if (buf[CC2420ReceiveP__rxFrameLength] >> 7 && rx_buf) {
          uint8_t type = (__nesc_ntoh_leuint16(header->fcf.data) >> IEEE154_FCF_FRAME_TYPE) & 7;

#line 643
          CC2420ReceiveP__CC2420Receive__receive(type, CC2420ReceiveP__m_p_rx_buf);
          if (type == IEEE154_TYPE_DATA) {
              CC2420ReceiveP__receiveDone_task__postTask();
              return;
            }
        }

      CC2420ReceiveP__waitForNextPacket();
      break;

      default: /* atomic removed: atomic calls only */
        CC2420ReceiveP__receivingPacket = FALSE;
      CC2420ReceiveP__CSN__set();
      CC2420ReceiveP__SpiResource__release();
      break;
    }
}

# 370 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Fifo__default__readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error)
#line 370
{
}

# 71 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP__Fifo__readDone(uint8_t arg_0x407ceb38, uint8_t * data, uint8_t length, error_t error){
#line 71
  switch (arg_0x407ceb38) {
#line 71
    case CC2420_TXFIFO:
#line 71
      CC2420TransmitP__TXFIFO__readDone(data, length, error);
#line 71
      break;
#line 71
    case CC2420_RXFIFO:
#line 71
      CC2420ReceiveP__RXFIFO__readDone(data, length, error);
#line 71
      break;
#line 71
    default:
#line 71
      CC2420SpiP__Fifo__default__readDone(arg_0x407ceb38, data, length, error);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP__SFLUSHRX__strobe(void ){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHRX);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 102 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP__ChipSpiResource__attemptRelease(void )
#line 102
{
  return CC2420SpiP__attemptRelease();
}

# 39 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static error_t CC2420TransmitP__ChipSpiResource__attemptRelease(void ){
#line 39
  unsigned char result;
#line 39

#line 39
  result = CC2420SpiP__ChipSpiResource__attemptRelease();
#line 39

#line 39
  return result;
#line 39
}
#line 39
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__get(void ){
#line 53
  unsigned long result;
#line 53

#line 53
  result = /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 75 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow(void )
{
  return /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__get();
}

#line 146
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type dt)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow(), dt);
}

# 55 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__BackoffTimer__size_type dt){
#line 55
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(dt);
#line 55
}
#line 55
# 280 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(am_id_t id, 
message_t *msg)
#line 281
{
}

# 81 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP__RadioBackoff__requestInitialBackoff(am_id_t arg_0x40b9f4b8, message_t * msg){
#line 81
    CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(arg_0x40b9f4b8, msg);
#line 81
}
#line 81
# 228 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(message_t *msg)
#line 228
{
  CC2420ActiveMessageP__RadioBackoff__requestInitialBackoff(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.data), msg);
}

# 81 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__RadioBackoff__requestInitialBackoff(message_t * msg){
#line 81
  CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(msg);
#line 81
}
#line 81
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t CC2420CsmaP__Random__rand16(void ){
#line 41
  unsigned short result;
#line 41

#line 41
  result = RandomMlcgC__Random__rand16();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 243 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__RadioBackoff__setInitialBackoff(uint16_t backoffTime)
#line 243
{
  CC2420TransmitP__myInitialBackoff = backoffTime + 1;
}

# 60 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__SubBackoff__setInitialBackoff(uint16_t backoffTime){
#line 60
  CC2420TransmitP__RadioBackoff__setInitialBackoff(backoffTime);
#line 60
}
#line 60
# 220 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__SubBackoff__requestInitialBackoff(message_t *msg)
#line 220
{
  CC2420CsmaP__SubBackoff__setInitialBackoff(CC2420CsmaP__Random__rand16()
   % (0x1F * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP__RadioBackoff__requestInitialBackoff(msg);
}

# 81 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420TransmitP__RadioBackoff__requestInitialBackoff(message_t * msg){
#line 81
  CC2420CsmaP__SubBackoff__requestInitialBackoff(msg);
#line 81
}
#line 81
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP__SpiResource__release(void ){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420SpiP__Resource__release(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 795 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__releaseSpiResource(void )
#line 795
{
  CC2420TransmitP__SpiResource__release();
  return SUCCESS;
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP__sendDone_task__postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(CC2420CsmaP__sendDone_task);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 202 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__CC2420Transmit__sendDone(message_t *p_msg, error_t err)
#line 202
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 203
    CC2420CsmaP__sendErr = err;
#line 203
    __nesc_atomic_end(__nesc_atomic); }
  CC2420CsmaP__sendDone_task__postTask();
}

# 73 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static void CC2420TransmitP__Send__sendDone(message_t * p_msg, error_t error){
#line 73
  CC2420CsmaP__CC2420Transmit__sendDone(p_msg, error);
#line 73
}
#line 73
# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CSN__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set();
#line 29
}
#line 29
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP__SFLUSHTX__strobe(void ){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHTX);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CSN__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr();
#line 30
}
#line 30
# 452 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__TXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 453
{

  CC2420TransmitP__CSN__set();
  if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
      /* atomic removed: atomic calls only */
#line 457
      {
        CC2420TransmitP__CSN__clr();
        CC2420TransmitP__SFLUSHTX__strobe();
        CC2420TransmitP__CSN__set();
      }
      CC2420TransmitP__releaseSpiResource();
      CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
      CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, ECANCEL);
    }
  else {
#line 466
    if (!CC2420TransmitP__m_cca) {
        /* atomic removed: atomic calls only */
#line 467
        {
          CC2420TransmitP__m_state = CC2420TransmitP__S_BEGIN_TRANSMIT;
        }
        CC2420TransmitP__attemptSend();
      }
    else {
        CC2420TransmitP__releaseSpiResource();
        /* atomic removed: atomic calls only */
#line 474
        {
          CC2420TransmitP__m_state = CC2420TransmitP__S_SAMPLE_CCA;
        }

        CC2420TransmitP__RadioBackoff__requestInitialBackoff(CC2420TransmitP__m_msg);
        CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__myInitialBackoff);
      }
    }
}

# 663 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__RXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 663
{
}

# 373 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Fifo__default__writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 373
{
}

# 91 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP__Fifo__writeDone(uint8_t arg_0x407ceb38, uint8_t * data, uint8_t length, error_t error){
#line 91
  switch (arg_0x407ceb38) {
#line 91
    case CC2420_TXFIFO:
#line 91
      CC2420TransmitP__TXFIFO__writeDone(data, length, error);
#line 91
      break;
#line 91
    case CC2420_RXFIFO:
#line 91
      CC2420ReceiveP__RXFIFO__writeDone(data, length, error);
#line 91
      break;
#line 91
    default:
#line 91
      CC2420SpiP__Fifo__default__writeDone(arg_0x407ceb38, data, length, error);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP__STXONCCA__strobe(void ){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP__Strobe__strobe(CC2420_STXONCCA);
#line 45

#line 45
  return result;
#line 45
}
#line 45
inline static cc2420_status_t CC2420TransmitP__STXON__strobe(void ){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP__Strobe__strobe(CC2420_STXON);
#line 45

#line 45
  return result;
#line 45
}
#line 45
inline static cc2420_status_t CC2420TransmitP__SNOP__strobe(void ){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP__Strobe__strobe(CC2420_SNOP);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 284 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(am_id_t id, 
message_t *msg)
#line 285
{
}

# 88 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP__RadioBackoff__requestCongestionBackoff(am_id_t arg_0x40b9f4b8, message_t * msg){
#line 88
    CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(arg_0x40b9f4b8, msg);
#line 88
}
#line 88
# 233 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(message_t *msg)
#line 233
{
  CC2420ActiveMessageP__RadioBackoff__requestCongestionBackoff(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.data), msg);
}

# 88 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__RadioBackoff__requestCongestionBackoff(message_t * msg){
#line 88
  CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(msg);
#line 88
}
#line 88
# 251 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime)
#line 251
{
  CC2420TransmitP__myCongestionBackoff = backoffTime + 1;
}

# 66 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__SubBackoff__setCongestionBackoff(uint16_t backoffTime){
#line 66
  CC2420TransmitP__RadioBackoff__setCongestionBackoff(backoffTime);
#line 66
}
#line 66
# 227 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__SubBackoff__requestCongestionBackoff(message_t *msg)
#line 227
{
  CC2420CsmaP__SubBackoff__setCongestionBackoff(CC2420CsmaP__Random__rand16()
   % (0x7 * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP__RadioBackoff__requestCongestionBackoff(msg);
}

# 88 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420TransmitP__RadioBackoff__requestCongestionBackoff(message_t * msg){
#line 88
  CC2420CsmaP__SubBackoff__requestCongestionBackoff(msg);
#line 88
}
#line 88
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P__Timer__get(void )
#line 49
{
#line 49
  return * (volatile uint16_t *)(0x2C + 0x20);
}

# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get(void ){
#line 52
  unsigned short result;
#line 52

#line 52
  result = HplAtm128Timer1P__Timer__get();
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 41 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get();
}

# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get(void ){
#line 53
  unsigned short result;
#line 53

#line 53
  result = /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 44 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t HplAtm128Timer1P__Timer0Ctrl__getInterruptFlag(void ){
#line 44
  union __nesc_unnamed4273 result;
#line 44

#line 44
  result = HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag();
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 144 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline bool HplAtm128Timer1P__Timer__test(void )
#line 144
{
  return HplAtm128Timer1P__Timer0Ctrl__getInterruptFlag().bits.tov1;
}

# 78 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test(void ){
#line 78
  unsigned char result;
#line 78

#line 78
  result = HplAtm128Timer1P__Timer__test();
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 46 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test();
}

# 60 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static bool /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 133 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareA__start(void )
#line 133
{
#line 133
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 4;
}

# 56 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start(void ){
#line 56
  HplAtm128Timer1P__CompareA__start();
#line 56
}
#line 56
# 127 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareA__reset(void )
#line 127
{
#line 127
  * (volatile uint8_t *)(0x36 + 0x20) = 1 << 4;
}

# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset(void ){
#line 53
  HplAtm128Timer1P__CompareA__reset();
#line 53
}
#line 53
# 183 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareA__set(uint16_t t)
#line 183
{
#line 183
  * (volatile uint16_t *)(0x2A + 0x20) = t;
}

# 45 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type t){
#line 45
  HplAtm128Timer1P__CompareA__set(t);
#line 45
}
#line 45
# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get(void ){
#line 52
  unsigned short result;
#line 52

#line 52
  result = HplAtm128Timer1P__Timer__get();
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 74 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size dt)
#line 74
{
  /* atomic removed: atomic calls only */






  {
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size now;
#line 83
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size elapsed;
#line 83
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size expires;

    ;


    now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get();
    elapsed = now + 3 - t0;
    if (elapsed >= dt) {
      expires = now + 3;
      }
    else {
#line 93
      expires = t0 + dt;
      }



    if (expires == 0) {
      expires = 1;
      }



    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(expires - 1);
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset();
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start();
  }
}

# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type dt){
#line 92
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__startAt(t0, dt);
#line 92
}
#line 92
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__RXCTRL1__write(uint16_t data){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP__Reg__write(CC2420_RXCTRL1, data);
#line 55

#line 55
  return result;
#line 55
}
#line 55
inline static cc2420_status_t CC2420ControlP__IOCFG0__write(uint16_t data){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP__Reg__write(CC2420_IOCFG0, data);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SXOSCON__strobe(void ){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP__Strobe__strobe(CC2420_SXOSCON);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t HplCC2420InterruptsP__CCATask__postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(HplCC2420InterruptsP__CCATask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__get(void )
#line 45
{
#line 45
  return (* (volatile uint8_t * )48U & (1 << 6)) != 0;
}

# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool HplCC2420InterruptsP__CC_CCA__get(void ){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 89 "/opt/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline error_t HplCC2420InterruptsP__CCA__enableRisingEdge(void )
#line 89
{
  /* atomic removed: atomic calls only */
#line 90
  HplCC2420InterruptsP__ccaWaitForState = TRUE;
  /* atomic removed: atomic calls only */
#line 91
  HplCC2420InterruptsP__ccaCheckDisabled = FALSE;
  HplCC2420InterruptsP__ccaLastState = HplCC2420InterruptsP__CC_CCA__get();
  HplCC2420InterruptsP__CCATask__postTask();
  return SUCCESS;
}

# 42 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP__InterruptCCA__enableRisingEdge(void ){
#line 42
  unsigned char result;
#line 42

#line 42
  result = HplCC2420InterruptsP__CCA__enableRisingEdge();
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__IOCFG1__write(uint16_t data){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP__Reg__write(CC2420_IOCFG1, data);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 207 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__startOscillator(void )
#line 207
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 208
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_VREG_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 210
            FAIL;

            {
#line 210
              __nesc_atomic_end(__nesc_atomic); 
#line 210
              return __nesc_temp;
            }
          }
        }
#line 213
      CC2420ControlP__m_state = CC2420ControlP__S_XOSC_STARTING;
      CC2420ControlP__IOCFG1__write(CC2420_SFDMUX_XOSC16M_STABLE << 
      CC2420_IOCFG1_CCAMUX);

      CC2420ControlP__InterruptCCA__enableRisingEdge();
      CC2420ControlP__SXOSCON__strobe();

      CC2420ControlP__IOCFG0__write((1 << CC2420_IOCFG0_FIFOP_POLARITY) | (
      127 << CC2420_IOCFG0_FIFOP_THR));

      CC2420ControlP__writeFsctrl();
      CC2420ControlP__writeMdmctrl0();

      CC2420ControlP__RXCTRL1__write(((((((1 << CC2420_RXCTRL1_RXBPF_LOCUR) | (
      1 << CC2420_RXCTRL1_LOW_LOWGAIN)) | (
      1 << CC2420_RXCTRL1_HIGH_HGM)) | (
      1 << CC2420_RXCTRL1_LNA_CAP_ARRAY)) | (
      1 << CC2420_RXCTRL1_RXMIX_TAIL)) | (
      1 << CC2420_RXCTRL1_RXMIX_VCM)) | (
      2 << CC2420_RXCTRL1_RXMIX_CURRENT));
    }
#line 233
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 71 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__startOscillator(void ){
#line 71
  unsigned char result;
#line 71

#line 71
  result = CC2420ControlP__CC2420Power__startOscillator();
#line 71

#line 71
  return result;
#line 71
}
#line 71
# 211 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__Resource__granted(void )
#line 211
{
  CC2420CsmaP__CC2420Power__startOscillator();
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void CC2420ControlP__Resource__granted(void ){
#line 92
  CC2420CsmaP__Resource__granted();
#line 92
}
#line 92
# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr();
#line 30
}
#line 30
# 390 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__SpiResource__granted(void )
#line 390
{
  CC2420ControlP__CSN__clr();
  CC2420ControlP__Resource__granted();
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ControlP__syncDone__postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(CC2420ControlP__syncDone);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SyncResource__release(void ){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420SpiP__Resource__release(/*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set();
#line 29
}
#line 29
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SRXON__strobe(void ){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP__Strobe__strobe(CC2420_SRXON);
#line 45

#line 45
  return result;
#line 45
}
#line 45
inline static cc2420_status_t CC2420ControlP__SRFOFF__strobe(void ){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP__Strobe__strobe(CC2420_SRFOFF);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 376 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__SyncResource__granted(void )
#line 376
{
  CC2420ControlP__CSN__clr();
  CC2420ControlP__SRFOFF__strobe();
  CC2420ControlP__writeFsctrl();
  CC2420ControlP__writeMdmctrl0();
  CC2420ControlP__writeId();
  CC2420ControlP__CSN__set();
  CC2420ControlP__CSN__clr();
  CC2420ControlP__SRXON__strobe();
  CC2420ControlP__CSN__set();
  CC2420ControlP__SyncResource__release();
  CC2420ControlP__syncDone__postTask();
}

#line 509
static inline void CC2420ControlP__ReadRssi__default__readDone(error_t error, uint16_t data)
#line 509
{
}

# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static void CC2420ControlP__ReadRssi__readDone(error_t result, CC2420ControlP__ReadRssi__val_t val){
#line 63
  CC2420ControlP__ReadRssi__default__readDone(result, val);
#line 63
}
#line 63
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__RssiResource__release(void ){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420SpiP__Resource__release(/*CC2420ControlC.RssiResource*/CC2420SpiC__2__CLIENT_ID);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 287 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP__Reg__read(uint8_t addr, uint16_t *data)
#line 287
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 291
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 293
            status;

            {
#line 293
              __nesc_atomic_end(__nesc_atomic); 
#line 293
              return __nesc_temp;
            }
          }
        }
    }
#line 297
    __nesc_atomic_end(__nesc_atomic); }
#line 297
  status = CC2420SpiP__SpiByte__write(addr | 0x40);
  *data = (uint16_t )CC2420SpiP__SpiByte__write(0) << 8;
  *data |= CC2420SpiP__SpiByte__write(0);

  return status;
}

# 47 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__RSSI__read(uint16_t *data){
#line 47
  unsigned char result;
#line 47

#line 47
  result = CC2420SpiP__Reg__read(CC2420_RSSI, data);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 395 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__RssiResource__granted(void )
#line 395
{
  uint16_t data = 0;

#line 397
  CC2420ControlP__CSN__clr();
  CC2420ControlP__RSSI__read(&data);
  CC2420ControlP__CSN__set();

  CC2420ControlP__RssiResource__release();
  data += 0x7f;
  data &= 0x00ff;
  CC2420ControlP__ReadRssi__readDone(SUCCESS, data);
}

# 414 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__SpiResource__granted(void )
#line 414
{
  uint8_t cur_state;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 417
    {
      cur_state = CC2420TransmitP__m_state;
    }
#line 419
    __nesc_atomic_end(__nesc_atomic); }

  switch (cur_state) {
      case CC2420TransmitP__S_LOAD: 
        CC2420TransmitP__loadTXFIFO();
      break;

      case CC2420TransmitP__S_BEGIN_TRANSMIT: 
        CC2420TransmitP__attemptSend();
      break;

      case CC2420TransmitP__S_CANCEL: 
        CC2420TransmitP__CSN__clr();
      CC2420TransmitP__SFLUSHTX__strobe();
      CC2420TransmitP__CSN__set();
      CC2420TransmitP__releaseSpiResource();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 435
        {
          CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
        }
#line 437
        __nesc_atomic_end(__nesc_atomic); }
      CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, ECANCEL);
      break;

      default: 
        CC2420TransmitP__releaseSpiResource();
      break;
    }
}

# 508 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__SpiResource__granted(void )
#line 508
{







  CC2420ReceiveP__receive();
}

# 367 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Resource__default__granted(uint8_t id)
#line 367
{
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void CC2420SpiP__Resource__granted(uint8_t arg_0x407ce108){
#line 92
  switch (arg_0x407ce108) {
#line 92
    case /*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID:
#line 92
      CC2420ControlP__SpiResource__granted();
#line 92
      break;
#line 92
    case /*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID:
#line 92
      CC2420ControlP__SyncResource__granted();
#line 92
      break;
#line 92
    case /*CC2420ControlC.RssiResource*/CC2420SpiC__2__CLIENT_ID:
#line 92
      CC2420ControlP__RssiResource__granted();
#line 92
      break;
#line 92
    case /*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID:
#line 92
      CC2420TransmitP__SpiResource__granted();
#line 92
      break;
#line 92
    case /*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID:
#line 92
      CC2420ReceiveP__SpiResource__granted();
#line 92
      break;
#line 92
    default:
#line 92
      CC2420SpiP__Resource__default__granted(arg_0x407ce108);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 358 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__grant__runTask(void )
#line 358
{
  uint8_t holder;

#line 360
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 360
    {
      holder = CC2420SpiP__m_holder;
    }
#line 362
    __nesc_atomic_end(__nesc_atomic); }
  CC2420SpiP__Resource__granted(holder);
}

# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__FSCTRL__write(uint16_t data){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP__Reg__write(CC2420_FSCTRL, data);
#line 55

#line 55
  return result;
#line 55
}
#line 55
inline static cc2420_status_t CC2420ControlP__MDMCTRL0__write(uint16_t data){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP__Reg__write(CC2420_MDMCTRL0, data);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420ControlP__PANID__write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char result;
#line 63

#line 63
  result = CC2420SpiP__Ram__write(CC2420_RAM_PANID, offset, data, length);
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP__startDone_task__postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(CC2420CsmaP__startDone_task);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 215 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__CC2420Power__startOscillatorDone(void )
#line 215
{
  CC2420CsmaP__startDone_task__postTask();
}

# 76 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static void CC2420ControlP__CC2420Power__startOscillatorDone(void ){
#line 76
  CC2420CsmaP__CC2420Power__startOscillatorDone();
#line 76
}
#line 76
# 105 "/opt/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline error_t HplCC2420InterruptsP__CCA__disable(void )
#line 105
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 106
    HplCC2420InterruptsP__ccaCheckDisabled = TRUE;
#line 106
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 50 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP__InterruptCCA__disable(void ){
#line 50
  unsigned char result;
#line 50

#line 50
  result = HplCC2420InterruptsP__CCA__disable();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 418 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__InterruptCCA__fired(void )
#line 418
{
  CC2420ControlP__m_state = CC2420ControlP__S_XOSC_STARTED;
  CC2420ControlP__InterruptCCA__disable();
  CC2420ControlP__IOCFG1__write(0);
  CC2420ControlP__writeId();
  CC2420ControlP__CSN__set();
  CC2420ControlP__CSN__clr();
  CC2420ControlP__CC2420Power__startOscillatorDone();
}

# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static void HplCC2420InterruptsP__CCA__fired(void ){
#line 57
  CC2420ControlP__InterruptCCA__fired();
#line 57
}
#line 57
# 69 "/opt/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline void HplCC2420InterruptsP__CCATask__runTask(void )
#line 69
{
  uint8_t CCAState;

#line 71
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 71
    {
      if (HplCC2420InterruptsP__ccaCheckDisabled) {
          {
#line 73
            __nesc_atomic_end(__nesc_atomic); 
#line 73
            return;
          }
        }
    }
#line 76
    __nesc_atomic_end(__nesc_atomic); }

  CCAState = HplCC2420InterruptsP__CC_CCA__get();
  if (HplCC2420InterruptsP__ccaLastState != HplCC2420InterruptsP__ccaWaitForState && CCAState == HplCC2420InterruptsP__ccaWaitForState) {
      HplCC2420InterruptsP__CCA__fired();
    }



  HplCC2420InterruptsP__ccaLastState = CCAState;
  HplCC2420InterruptsP__CCATask__postTask();
}

# 222 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__CC2420Config__syncDone(error_t error)
#line 222
{
}

# 704 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Config__syncDone(error_t error)
#line 704
{
}

# 53 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static void CC2420ControlP__CC2420Config__syncDone(error_t error){
#line 53
  CC2420ReceiveP__CC2420Config__syncDone(error);
#line 53
  CC2420ActiveMessageP__CC2420Config__syncDone(error);
#line 53
}
#line 53
# 446 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__syncDone__runTask(void )
#line 446
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 447
    CC2420ControlP__m_sync_busy = FALSE;
#line 447
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP__CC2420Config__syncDone(SUCCESS);
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SyncResource__request(void ){
#line 78
  unsigned char result;
#line 78

#line 78
  result = CC2420SpiP__Resource__request(/*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 300 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Config__sync(void )
#line 300
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 301
    {
      if (CC2420ControlP__m_sync_busy) {
          {
            unsigned char __nesc_temp = 
#line 303
            FAIL;

            {
#line 303
              __nesc_atomic_end(__nesc_atomic); 
#line 303
              return __nesc_temp;
            }
          }
        }
#line 306
      CC2420ControlP__m_sync_busy = TRUE;
      if (CC2420ControlP__m_state == CC2420ControlP__S_XOSC_STARTED) {
          CC2420ControlP__SyncResource__request();
        }
      else 
#line 309
        {
          CC2420ControlP__syncDone__postTask();
        }
    }
#line 312
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

#line 442
static inline void CC2420ControlP__sync__runTask(void )
#line 442
{
  CC2420ControlP__CC2420Config__sync();
}

# 211 "/opt/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP__BareSend__default__sendDone(message_t *msg, error_t error)
#line 211
{
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void CC2420TinyosNetworkP__BareSend__sendDone(message_t * msg, error_t error){
#line 89
  CC2420TinyosNetworkP__BareSend__default__sendDone(msg, error);
#line 89
}
#line 89
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void CC2420ActiveMessageP__AMSend__sendDone(am_id_t arg_0x40ba33f8, message_t * msg, error_t error){
#line 99
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(arg_0x40ba33f8, msg, error);
#line 99
}
#line 99
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ActiveMessageP__RadioResource__release(void ){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420TinyosNetworkP__Resource__release(CC2420ActiveMessageC__CC2420_AM_SEND_ID);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 199 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SubSend__sendDone(message_t *msg, error_t result)
#line 199
{
  CC2420ActiveMessageP__RadioResource__release();
  CC2420ActiveMessageP__AMSend__sendDone(CC2420ActiveMessageP__AMPacket__type(msg), msg, result);
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void CC2420TinyosNetworkP__ActiveSend__sendDone(message_t * msg, error_t error){
#line 89
  CC2420ActiveMessageP__SubSend__sendDone(msg, error);
#line 89
}
#line 89
# 117 "/opt/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP__SubSend__sendDone(message_t *msg, error_t error)
#line 117
{
  if (CC2420TinyosNetworkP__CC2420Packet__getNetwork(msg) == 0x3f) {
      CC2420TinyosNetworkP__ActiveSend__sendDone(msg, error);
    }
  else 
#line 120
    {
      CC2420TinyosNetworkP__BareSend__sendDone(msg, error);
    }
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void UniqueSendP__Send__sendDone(message_t * msg, error_t error){
#line 89
  CC2420TinyosNetworkP__SubSend__sendDone(msg, error);
#line 89
}
#line 89
# 104 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline void UniqueSendP__SubSend__sendDone(message_t *msg, error_t error)
#line 104
{
  UniqueSendP__State__toIdle();
  UniqueSendP__Send__sendDone(msg, error);
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void CC2420CsmaP__Send__sendDone(message_t * msg, error_t error){
#line 89
  UniqueSendP__SubSend__sendDone(msg, error);
#line 89
}
#line 89
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP__stopDone_task__postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(CC2420CsmaP__stopDone_task);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 6;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set();
#line 29
}
#line 29
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )59U &= ~(1 << 5);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__clr();
#line 30
}
#line 30
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )59U &= ~(1 << 6);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr();
#line 30
}
#line 30
# 199 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__stopVReg(void )
#line 199
{
  CC2420ControlP__m_state = CC2420ControlP__S_VREG_STOPPED;
  CC2420ControlP__RSTN__clr();
  CC2420ControlP__VREN__clr();
  CC2420ControlP__RSTN__set();
  return SUCCESS;
}

# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__stopVReg(void ){
#line 63
  unsigned char result;
#line 63

#line 63
  result = CC2420ControlP__CC2420Power__stopVReg();
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 43 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__disable(void )
#line 43
{
#line 43
  * (volatile uint8_t *)(0x39 + 0x20) &= ~(1 << 6);
}

# 40 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__disable(void ){
#line 40
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__disable();
#line 40
}
#line 40
# 33 "/opt/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__disable(void )
#line 33
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__disable();
  return SUCCESS;
}

# 50 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP__InterruptFIFOP__disable(void ){
#line 50
  unsigned char result;
#line 50

#line 50
  result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__disable();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 171 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP__StdControl__stop(void )
#line 171
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
      CC2420ReceiveP__m_state = CC2420ReceiveP__S_STOPPED;
      CC2420ReceiveP__reset_state();
      CC2420ReceiveP__CSN__set();
      CC2420ReceiveP__InterruptFIFOP__disable();
    }
#line 177
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 138 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Capture__stop(void )
#line 138
{
#line 138
  * (volatile uint8_t *)(0x37 + 0x20) &= ~(1 << 5);
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__stop(void ){
#line 61
  HplAtm128Timer1P__Capture__stop();
#line 61
}
#line 61
# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__disable(void )
#line 60
{
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__stop();
}

# 55 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static void CC2420TransmitP__CaptureSFD__disable(void ){
#line 55
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__disable();
#line 55
}
#line 55
# 179 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__StdControl__stop(void )
#line 179
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 180
    {
      CC2420TransmitP__m_state = CC2420TransmitP__S_STOPPED;
      CC2420TransmitP__BackoffTimer__stop();
      CC2420TransmitP__CaptureSFD__disable();
      CC2420TransmitP__SpiResource__release();
      CC2420TransmitP__CSN__set();
    }
#line 186
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 84 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t CC2420CsmaP__SubControl__stop(void ){
#line 84
  unsigned char result;
#line 84

#line 84
  result = CC2420TransmitP__StdControl__stop();
#line 84
  result = ecombine(result, CC2420ReceiveP__StdControl__stop());
#line 84

#line 84
  return result;
#line 84
}
#line 84
# 272 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__shutdown(void )
#line 272
{
  CC2420CsmaP__SubControl__stop();
  CC2420CsmaP__CC2420Power__stopVReg();
  CC2420CsmaP__stopDone_task__postTask();
}

#line 241
static inline void CC2420CsmaP__sendDone_task__runTask(void )
#line 241
{
  error_t packetErr;

#line 243
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 243
    packetErr = CC2420CsmaP__sendErr;
#line 243
    __nesc_atomic_end(__nesc_atomic); }
  if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STOPPING)) {
      CC2420CsmaP__shutdown();
    }
  else {
      CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STARTED);
    }

  CC2420CsmaP__Send__sendDone(CC2420CsmaP__m_msg, packetErr);
}

# 64 "AntiTheftRootC.nc"
static inline void AntiTheftRootC__RadioControl__stopDone(error_t error)
#line 64
{
}

# 279 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RadioControl__stopDone(error_t err)
#line 279
{
  if (err == SUCCESS) {
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__clearState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__RADIO_ON);
    }
}

# 237 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__RadioControl__stopDone(error_t error)
#line 237
{
  /*CtpP.Router*/CtpRoutingEngineP__0__radioOn = FALSE;
  ;
}

# 117 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void CC2420CsmaP__SplitControl__stopDone(error_t error){
#line 117
  /*CtpP.Router*/CtpRoutingEngineP__0__RadioControl__stopDone(error);
#line 117
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__RadioControl__stopDone(error);
#line 117
  AntiTheftRootC__RadioControl__stopDone(error);
#line 117
}
#line 117
# 262 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__stopDone_task__runTask(void )
#line 262
{
  CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STOPPED);
  CC2420CsmaP__SplitControl__stopDone(SUCCESS);
}

# 594 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__setRoot(void )
#line 594
{
  bool route_found = FALSE;

#line 596
  route_found = /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent == INVALID_ADDR;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 597
    {
      /*CtpP.Router*/CtpRoutingEngineP__0__state_is_root = 1;
      /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent = /*CtpP.Router*/CtpRoutingEngineP__0__my_ll_addr;
      /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.etx = 0;
    }
#line 601
    __nesc_atomic_end(__nesc_atomic); }
  if (route_found) {
    /*CtpP.Router*/CtpRoutingEngineP__0__Routing__routeFound();
    }
#line 604
  ;
  /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__logEventRoute(NET_C_TREE_NEW_PARENT, /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent, 0, /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.etx);
  return SUCCESS;
}

# 41 "/opt/tinyos-2.x/tos/lib/net/RootControl.nc"
inline static error_t AntiTheftRootC__RootControl__setRoot(void ){
#line 41
  unsigned char result;
#line 41

#line 41
  result = /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__setRoot();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 425 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP__StdControl__start(void )
#line 425
{
  ;
  return SUCCESS;
}

# 143 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*CtpP.Router*/CtpRoutingEngineP__0__RouteTimer__startPeriodic(uint32_t dt){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(3U, dt);
#line 53
}
#line 53
# 209 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__StdControl__start(void )
#line 209
{

  if (!/*CtpP.Router*/CtpRoutingEngineP__0__running) {
      /*CtpP.Router*/CtpRoutingEngineP__0__running = TRUE;
      /*CtpP.Router*/CtpRoutingEngineP__0__resetInterval();
      /*CtpP.Router*/CtpRoutingEngineP__0__RouteTimer__startPeriodic(BEACON_INTERVAL);
      ;
    }
  return SUCCESS;
}

# 228 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__StdControl__start(void )
#line 228
{
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__setState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__ROUTING_ON);
  return SUCCESS;
}

# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t AntiTheftRootC__CollectionControl__start(void ){
#line 74
  unsigned char result;
#line 74

#line 74
  result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__StdControl__start();
#line 74
  result = ecombine(result, /*CtpP.Router*/CtpRoutingEngineP__0__StdControl__start());
#line 74
  result = ecombine(result, LinkEstimatorP__StdControl__start());
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 81 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline void /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__set(uint16_t bitnum)
{
  /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__m_bits[/*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getIndex(bitnum)] |= /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getMask(bitnum);
}

# 52 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__set(uint16_t bitnum){
#line 52
  /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__set(bitnum);
#line 52
}
#line 52
# 92 "/opt/tinyos-2.x/tos/lib/net/TrickleTimerImplP.nc"
static inline error_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__start(uint8_t id)
#line 92
{
  if (/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].time != 0) {
      return EBUSY;
    }
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].time = 0;
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].remainder = 0;
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].count = 0;
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__generateTime(id);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 100
    {
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__set(id);
    }
#line 102
    __nesc_atomic_end(__nesc_atomic); }
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__adjustTimer();
  ;
  return SUCCESS;
}

# 247 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline error_t DisseminationEngineImplP__TrickleTimer__default__start(uint16_t key)
#line 247
{
#line 247
  return FAIL;
}

# 60 "/opt/tinyos-2.x/tos/lib/net/TrickleTimer.nc"
inline static error_t DisseminationEngineImplP__TrickleTimer__start(uint16_t arg_0x40e33e10){
#line 60
  unsigned char result;
#line 60

#line 60
  switch (arg_0x40e33e10) {
#line 60
    case 42:
#line 60
      result = /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__start(/*AntiTheftRootAppC.DisseminatorC*/DisseminatorC__0__TIMER_ID);
#line 60
      break;
#line 60
    default:
#line 60
      result = DisseminationEngineImplP__TrickleTimer__default__start(arg_0x40e33e10);
#line 60
      break;
#line 60
    }
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 91 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline error_t DisseminationEngineImplP__DisseminationCache__start(uint16_t key)
#line 91
{
  error_t result = DisseminationEngineImplP__TrickleTimer__start(key);

#line 93
  DisseminationEngineImplP__TrickleTimer__reset(key);
  return result;
}

# 45 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationCache.nc"
inline static error_t /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__start(void ){
#line 45
  unsigned char result;
#line 45

#line 45
  result = DisseminationEngineImplP__DisseminationCache__start(42);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 66 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminatorP.nc"
static inline error_t /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__StdControl__start(void )
#line 66
{
  error_t result = /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__start();

#line 68
  if (result == SUCCESS) {
#line 68
      /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__m_running = TRUE;
    }
#line 69
  return result;
}

# 255 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline error_t DisseminationEngineImplP__DisseminatorControl__default__start(uint16_t id)
#line 255
{
#line 255
  return FAIL;
}

# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t DisseminationEngineImplP__DisseminatorControl__start(uint16_t arg_0x40e318f8){
#line 74
  unsigned char result;
#line 74

#line 74
  switch (arg_0x40e318f8) {
#line 74
    case /*AntiTheftRootAppC.DisseminatorC*/DisseminatorC__0__TIMER_ID:
#line 74
      result = /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__StdControl__start();
#line 74
      break;
#line 74
    default:
#line 74
      result = DisseminationEngineImplP__DisseminatorControl__default__start(arg_0x40e318f8);
#line 74
      break;
#line 74
    }
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 73 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline error_t DisseminationEngineImplP__StdControl__start(void )
#line 73
{
  uint8_t i;

#line 75
  for (i = 0; i < DisseminationEngineImplP__NUM_DISSEMINATORS; i++) {
      DisseminationEngineImplP__DisseminatorControl__start(i);
    }
  DisseminationEngineImplP__m_running = TRUE;
  return SUCCESS;
}

# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t AntiTheftRootC__DisseminationControl__start(void ){
#line 74
  unsigned char result;
#line 74

#line 74
  result = DisseminationEngineImplP__StdControl__start();
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 47 "/opt/tinyos-2.x/tos/chips/cc2420/lpl/DummyLplP.nc"
static inline void DummyLplP__LowPowerListening__setLocalWakeupInterval(uint16_t intervalMs)
#line 47
{
}

# 52 "/opt/tinyos-2.x/tos/interfaces/LowPowerListening.nc"
inline static void AntiTheftRootC__LowPowerListening__setLocalWakeupInterval(uint16_t intervalMs){
#line 52
  DummyLplP__LowPowerListening__setLocalWakeupInterval(intervalMs);
#line 52
}
#line 52
# 51 "AntiTheftRootC.nc"
static inline void AntiTheftRootC__RadioControl__startDone(error_t error)
#line 51
{




  if (error == SUCCESS) 
    {
      AntiTheftRootC__LowPowerListening__setLocalWakeupInterval(512);
      AntiTheftRootC__DisseminationControl__start();
      AntiTheftRootC__CollectionControl__start();
      AntiTheftRootC__RootControl__setRoot();
    }
}

# 245 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RadioControl__startDone(error_t err)
#line 245
{
  if (err == SUCCESS) {
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__setState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__RADIO_ON);
      if (!/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__empty()) {
          ;
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__postTask();
        }
    }
}

# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t /*CtpP.Router*/CtpRoutingEngineP__0__Random__rand16(void ){
#line 41
  unsigned short result;
#line 41

#line 41
  result = RandomMlcgC__Random__rand16();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 226 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__RadioControl__startDone(error_t error)
#line 226
{
  /*CtpP.Router*/CtpRoutingEngineP__0__radioOn = TRUE;
  ;
  if (/*CtpP.Router*/CtpRoutingEngineP__0__running) {
      uint16_t nextInt;

#line 231
      nextInt = /*CtpP.Router*/CtpRoutingEngineP__0__Random__rand16() % BEACON_INTERVAL;
      nextInt += BEACON_INTERVAL >> 1;
      /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__startOneShot(nextInt);
    }
}

# 92 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void CC2420CsmaP__SplitControl__startDone(error_t error){
#line 92
  /*CtpP.Router*/CtpRoutingEngineP__0__RadioControl__startDone(error);
#line 92
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__RadioControl__startDone(error);
#line 92
  AntiTheftRootC__RadioControl__startDone(error);
#line 92
}
#line 92
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SpiResource__release(void ){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420SpiP__Resource__release(/*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 179 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Resource__release(void )
#line 179
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 180
    {
      CC2420ControlP__CSN__set();
      {
        unsigned char __nesc_temp = 
#line 182
        CC2420ControlP__SpiResource__release();

        {
#line 182
          __nesc_atomic_end(__nesc_atomic); 
#line 182
          return __nesc_temp;
        }
      }
    }
#line 185
    __nesc_atomic_end(__nesc_atomic); }
}

# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420CsmaP__Resource__release(void ){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420ControlP__Resource__release();
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 249 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__rxOn(void )
#line 249
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 250
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_XOSC_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 252
            FAIL;

            {
#line 252
              __nesc_atomic_end(__nesc_atomic); 
#line 252
              return __nesc_temp;
            }
          }
        }
#line 254
      CC2420ControlP__SRXON__strobe();
    }
#line 255
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 90 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__rxOn(void ){
#line 90
  unsigned char result;
#line 90

#line 90
  result = CC2420ControlP__CC2420Power__rxOn();
#line 90

#line 90
  return result;
#line 90
}
#line 90
# 42 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__enable(void )
#line 42
{
#line 42
  * (volatile uint8_t *)(0x39 + 0x20) |= 1 << 6;
}

# 35 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__enable(void ){
#line 35
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__enable();
#line 35
}
#line 35
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__edge(bool low_to_high)
#line 47
{
  * (volatile uint8_t * )90U |= 1 << 5;

  if (low_to_high) {
    * (volatile uint8_t * )90U |= 1 << 4;
    }
  else {
#line 53
    * (volatile uint8_t * )90U &= ~(1 << 4);
    }
}

# 59 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__edge(bool low_to_high){
#line 59
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__edge(low_to_high);
#line 59
}
#line 59
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__clear(void )
#line 41
{
#line 41
  * (volatile uint8_t *)(0x38 + 0x20) = 1 << 6;
}

# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__clear(void ){
#line 45
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__clear();
#line 45
}
#line 45
# 15 "/opt/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__enable(bool rising)
#line 15
{
  /* atomic removed: atomic calls only */
#line 16
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__clear();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__edge(rising);
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__enable();
  }
  return SUCCESS;
}





static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__enableFallingEdge(void )
#line 29
{
  return /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__enable(FALSE);
}

# 43 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP__InterruptFIFOP__enableFallingEdge(void ){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__enableFallingEdge();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 157 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP__StdControl__start(void )
#line 157
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 158
    {
      CC2420ReceiveP__reset_state();
      CC2420ReceiveP__m_state = CC2420ReceiveP__S_STARTED;
      CC2420ReceiveP__receivingPacket = FALSE;




      CC2420ReceiveP__InterruptFIFOP__enableFallingEdge();
    }
#line 167
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureRisingEdge(void )
#line 52
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__enableCapture(TRUE);
}

# 42 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP__CaptureSFD__captureRisingEdge(void ){
#line 42
  unsigned char result;
#line 42

#line 42
  result = /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureRisingEdge();
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 168 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__StdControl__start(void )
#line 168
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 169
    {
      CC2420TransmitP__CaptureSFD__captureRisingEdge();
      CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
      CC2420TransmitP__m_receiving = FALSE;
      CC2420TransmitP__abortSpiRelease = FALSE;
      CC2420TransmitP__m_tx_power = 0;
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t CC2420CsmaP__SubControl__start(void ){
#line 74
  unsigned char result;
#line 74

#line 74
  result = CC2420TransmitP__StdControl__start();
#line 74
  result = ecombine(result, CC2420ReceiveP__StdControl__start());
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 254 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__startDone_task__runTask(void )
#line 254
{
  CC2420CsmaP__SubControl__start();
  CC2420CsmaP__CC2420Power__rxOn();
  CC2420CsmaP__Resource__release();
  CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STARTED);
  CC2420CsmaP__SplitControl__startDone(SUCCESS);
}

# 122 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Capture__setEdge(bool up)
#line 122
{
#line 122
  if (up) {
#line 122
    * (volatile uint8_t *)(0x2E + 0x20) |= 1 << 6;
    }
  else {
#line 122
    * (volatile uint8_t *)(0x2E + 0x20) &= ~(1 << 6);
    }
}

# 79 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__setEdge(bool up){
#line 79
  HplAtm128Timer1P__Capture__setEdge(up);
#line 79
}
#line 79
# 132 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Capture__start(void )
#line 132
{
#line 132
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 5;
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__start(void ){
#line 58
  HplAtm128Timer1P__Capture__start();
#line 58
}
#line 58
# 82 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void )
#line 82
{
  am_group_t myGroup;

  /* atomic removed: atomic calls only */
#line 84
  myGroup = ActiveMessageAddressC__group;
  return myGroup;
}

# 55 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t CC2420ControlP__ActiveMessageAddress__amGroup(void ){
#line 55
  unsigned char result;
#line 55

#line 55
  result = ActiveMessageAddressC__ActiveMessageAddress__amGroup();
#line 55

#line 55
  return result;
#line 55
}
#line 55
#line 50
inline static am_addr_t CC2420ControlP__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short result;
#line 50

#line 50
  result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 5;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 6;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput();
#line 35
}
#line 35
inline static void CC2420ControlP__CSN__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 35
}
#line 35
# 121 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Init__init(void )
#line 121
{
  CC2420ControlP__CSN__makeOutput();
  CC2420ControlP__RSTN__makeOutput();
  CC2420ControlP__VREN__makeOutput();

  CC2420ControlP__m_short_addr = CC2420ControlP__ActiveMessageAddress__amAddress();
  CC2420ControlP__m_pan = CC2420ControlP__ActiveMessageAddress__amGroup();
  CC2420ControlP__m_tx_power = 31;
  CC2420ControlP__m_channel = 26;





  CC2420ControlP__addressRecognition = TRUE;





  CC2420ControlP__hwAddressRecognition = FALSE;






  CC2420ControlP__autoAckEnabled = TRUE;






  CC2420ControlP__hwAutoAckDefault = FALSE;



  return SUCCESS;
}

# 81 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static inline error_t StateImplP__Init__init(void )
#line 81
{
  int i;

#line 83
  for (i = 0; i < 4U; i++) {
      StateImplP__state[i] = StateImplP__S_IDLE;
    }
  return SUCCESS;
}

# 45 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void )
#line 45
{
  memset(/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY, sizeof /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ);
  return SUCCESS;
}

# 22 "/opt/tinyos-2.x/tos/system/NoInitC.nc"
static inline error_t NoInitC__Init__init(void )
#line 22
{
  return SUCCESS;
}

# 50 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )49U &= ~(1 << 4);
}

# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__SFD__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput();
#line 33
}
#line 33


inline static void CC2420TransmitP__CSN__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 35
}
#line 35
# 50 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )49U &= ~(1 << 6);
}

# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CCA__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput();
#line 33
}
#line 33
# 160 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__Init__init(void )
#line 160
{
  CC2420TransmitP__CCA__makeInput();
  CC2420TransmitP__CSN__makeOutput();
  CC2420TransmitP__SFD__makeInput();
  return SUCCESS;
}

# 151 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP__Init__init(void )
#line 151
{
  CC2420ReceiveP__m_p_rx_buf = &CC2420ReceiveP__m_rx_buf;
  return SUCCESS;
}

# 122 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__Compare__start(void )
#line 122
{
#line 122
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 1;
}

# 56 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start(void ){
#line 56
  HplAtm128Timer0AsyncP__Compare__start();
#line 56
}
#line 56
# 76 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__TimerCtrl__setControl(Atm128TimerControl_t x)
#line 76
{
  * (volatile uint8_t *)(0x33 + 0x20) = x.flat;
}

# 37 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control){
#line 37
  HplAtm128Timer0AsyncP__TimerCtrl__setControl(control);
#line 37
}
#line 37
# 198 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void )
#line 198
{
  * (volatile uint8_t *)(0x30 + 0x20) |= 1 << 3;
}

# 32 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous(void ){
#line 32
  HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void )
#line 54
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
  return SUCCESS;
}

# 44 "/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 44
{
  /* atomic removed: atomic calls only */
#line 45
  RandomMlcgC__seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t UniqueSendP__Random__rand16(void ){
#line 41
  unsigned short result;
#line 41

#line 41
  result = RandomMlcgC__Random__rand16();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 62 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline error_t UniqueSendP__Init__init(void )
#line 62
{
  UniqueSendP__localSendId = UniqueSendP__Random__rand16();
  return SUCCESS;
}

# 71 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline error_t UniqueReceiveP__Init__init(void )
#line 71
{
  int i;

#line 73
  for (i = 0; i < 4; i++) {
      UniqueReceiveP__receivedMessages[i].source = (am_addr_t )0xFFFF;
      UniqueReceiveP__receivedMessages[i].dsn = 0;
    }
  return SUCCESS;
}

# 45 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init(void )
#line 45
{
  memset(/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ, /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 214 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline void SerialP__ackInit(void )
#line 214
{
  SerialP__ackQ.writePtr = SerialP__ackQ.readPtr = 0;
}

#line 205
static __inline void SerialP__rxInit(void )
#line 205
{
  SerialP__rxBuf.writePtr = SerialP__rxBuf.readPtr = 0;
  SerialP__rxState = SerialP__RXSTATE_NOSYNC;
  SerialP__rxByteCnt = 0;
  SerialP__rxProto = 0;
  SerialP__rxSeqno = 0;
  SerialP__rxCRC = 0;
}

#line 193
static __inline void SerialP__txInit(void )
#line 193
{
  uint8_t i;

  /* atomic removed: atomic calls only */
#line 195
  for (i = 0; i < SerialP__TX_BUFFER_COUNT; i++) SerialP__txBuf[i].state = SerialP__BUFFER_AVAILABLE;
  SerialP__txState = SerialP__TXSTATE_IDLE;
  SerialP__txByteCnt = 0;
  SerialP__txProto = 0;
  SerialP__txSeqno = 0;
  SerialP__txCRC = 0;
  SerialP__txPending = FALSE;
  SerialP__txIndex = 0;
}

#line 218
static inline error_t SerialP__Init__init(void )
#line 218
{

  SerialP__txInit();
  SerialP__rxInit();
  SerialP__ackInit();

  return SUCCESS;
}

# 69 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void )
#line 69
{
  if (PLATFORM_BAUDRATE == 19200UL) {
    /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 200;
    }
  else {
#line 72
    if (PLATFORM_BAUDRATE == 57600UL) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 68;
      }
    }
#line 74
  return SUCCESS;
}

# 120 "/opt/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate)
#line 120
{

  return ((uint32_t )MeasureClockC__cycles << 12) / baudrate - 1;
}

# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate){
#line 60
  unsigned short result;
#line 60

#line 60
  result = MeasureClockC__Atm128Calibrate__baudrateRegister(baudrate);
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 181 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart1Init__init(void )
#line 181
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr1;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr1 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)0x99 = ubrr1;
  * (volatile uint8_t *)0x98 = ubrr1 >> 8;
  * (volatile uint8_t *)0x9B = stts.flat;
  * (volatile uint8_t *)0x9D = mode.flat;
  * (volatile uint8_t *)0x9A = ctrl.flat;

  return SUCCESS;
}

#line 87
static inline error_t HplAtm128UartP__Uart0Init__init(void )
#line 87
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr0;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr0 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)(0x09 + 0x20) = ubrr0;
  * (volatile uint8_t *)0x90 = ubrr0 >> 8;
  * (volatile uint8_t *)(0x0B + 0x20) = stts.flat;
  * (volatile uint8_t *)0x95 = mode.flat;
  * (volatile uint8_t *)(0x0A + 0x20) = ctrl.flat;

  return SUCCESS;
}

# 66 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline void /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__clearAll(void )
{
  memset(/*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__m_bits, 0, sizeof /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__m_bits);
}

# 34 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__clearAll(void ){
#line 34
  /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__clearAll();
#line 34
}
#line 34
# 66 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline void /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__clearAll(void )
{
  memset(/*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__m_bits, 0, sizeof /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__m_bits);
}

# 34 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__clearAll(void ){
#line 34
  /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__clearAll();
#line 34
}
#line 34
# 74 "/opt/tinyos-2.x/tos/lib/net/TrickleTimerImplP.nc"
static inline error_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Init__init(void )
#line 74
{
  int i;

#line 76
  for (i = 0; i < 1U; i++) {
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].period = 1024;
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].count = 0;
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].time = 0;
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].remainder = 0;
    }
  /* atomic removed: atomic calls only */
#line 82
  {
    /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__clearAll();
    /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__clearAll();
  }
  return SUCCESS;
}

# 417 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void LinkEstimatorP__initNeighborTable(void )
#line 417
{
  uint8_t i;

  for (i = 0; i < 10; i++) {
      LinkEstimatorP__NeighborTable[i].flags = 0;
    }
}











static inline error_t LinkEstimatorP__Init__init(void )
#line 435
{
  ;
  LinkEstimatorP__initNeighborTable();
  return SUCCESS;
}

# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__address(void ){
#line 57
  unsigned short result;
#line 57

#line 57
  result = CC2420ActiveMessageP__AMPacket__address();
#line 57

#line 57
  return result;
#line 57
}
#line 57
# 216 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Init__init(void )
#line 216
{
  int i;

#line 218
  for (i = 0; i < /*CtpP.Forwarder*/CtpForwardingEngineP__0__CLIENT_COUNT; i++) {
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__clientPtrs[i] = /*CtpP.Forwarder*/CtpForwardingEngineP__0__clientEntries + i;
      ;
    }
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsgPtr = &/*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsg;
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__lastParent = /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__address();
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__seqno = 0;
  return SUCCESS;
}

# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*CtpP.Router*/CtpRoutingEngineP__0__AMPacket__address(void ){
#line 57
  unsigned short result;
#line 57

#line 57
  result = CC2420ActiveMessageP__AMPacket__address();
#line 57

#line 57
  return result;
#line 57
}
#line 57
# 690 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__routingTableInit(void )
#line 690
{
  /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive = 0;
}

# 26 "/opt/tinyos-2.x/tos/lib/net/ctp/TreeRouting.h"
static __inline void routeInfoInit(route_info_t *ri)
#line 26
{
  ri->parent = INVALID_ADDR;
  ri->etx = 0;
  ri->haveHeard = 0;
  ri->congested = FALSE;
}

# 193 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__Init__init(void )
#line 193
{
  uint8_t maxLength;

#line 195
  /*CtpP.Router*/CtpRoutingEngineP__0__radioOn = FALSE;
  /*CtpP.Router*/CtpRoutingEngineP__0__running = FALSE;
  /*CtpP.Router*/CtpRoutingEngineP__0__parentChanges = 0;
  /*CtpP.Router*/CtpRoutingEngineP__0__state_is_root = 0;
  routeInfoInit(&/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo);
  /*CtpP.Router*/CtpRoutingEngineP__0__routingTableInit();
  /*CtpP.Router*/CtpRoutingEngineP__0__my_ll_addr = /*CtpP.Router*/CtpRoutingEngineP__0__AMPacket__address();
  /*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg = /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__getPayload(&/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsgBuffer, /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__maxPayloadLength());
  maxLength = /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__maxPayloadLength();
  ;

  return SUCCESS;
}

# 65 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static inline error_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 12; i++) {
      /*CtpP.MessagePoolP.PoolP*/PoolP__0__queue[i] = &/*CtpP.MessagePoolP.PoolP*/PoolP__0__pool[i];
    }
  /*CtpP.MessagePoolP.PoolP*/PoolP__0__free = 12;
  /*CtpP.MessagePoolP.PoolP*/PoolP__0__index = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 12; i++) {
      /*CtpP.QEntryPoolP.PoolP*/PoolP__1__queue[i] = &/*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool[i];
    }
  /*CtpP.QEntryPoolP.PoolP*/PoolP__1__free = 12;
  /*CtpP.QEntryPoolP.PoolP*/PoolP__1__index = 0;
  return SUCCESS;
}

# 64 "/opt/tinyos-2.x/tos/lib/net/ctp/LruCtpMsgCacheP.nc"
static inline error_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Init__init(void )
#line 64
{
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first = 0;
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count = 0;
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Init__init();
#line 51
  result = ecombine(result, /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Init__init());
#line 51
  result = ecombine(result, /*CtpP.MessagePoolP.PoolP*/PoolP__0__Init__init());
#line 51
  result = ecombine(result, /*CtpP.Router*/CtpRoutingEngineP__0__Init__init());
#line 51
  result = ecombine(result, /*CtpP.Forwarder*/CtpForwardingEngineP__0__Init__init());
#line 51
  result = ecombine(result, LinkEstimatorP__Init__init());
#line 51
  result = ecombine(result, /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Init__init());
#line 51
  result = ecombine(result, HplAtm128UartP__Uart0Init__init());
#line 51
  result = ecombine(result, HplAtm128UartP__Uart1Init__init());
#line 51
  result = ecombine(result, /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init());
#line 51
  result = ecombine(result, SerialP__Init__init());
#line 51
  result = ecombine(result, /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init());
#line 51
  result = ecombine(result, UniqueReceiveP__Init__init());
#line 51
  result = ecombine(result, UniqueSendP__Init__init());
#line 51
  result = ecombine(result, RandomMlcgC__Init__init());
#line 51
  result = ecombine(result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init());
#line 51
  result = ecombine(result, CC2420ReceiveP__Init__init());
#line 51
  result = ecombine(result, CC2420TransmitP__Init__init());
#line 51
  result = ecombine(result, NoInitC__Init__init());
#line 51
  result = ecombine(result, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init());
#line 51
  result = ecombine(result, StateImplP__Init__init());
#line 51
  result = ecombine(result, CC2420ControlP__Init__init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 55 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void CC2420ControlP__StartupTimer__start(CC2420ControlP__StartupTimer__size_type dt){
#line 55
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(dt);
#line 55
}
#line 55
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 5;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__set();
#line 29
}
#line 29
# 187 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__startVReg(void )
#line 187
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 188
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_VREG_STOPPED) {
          {
            unsigned char __nesc_temp = 
#line 190
            FAIL;

            {
#line 190
              __nesc_atomic_end(__nesc_atomic); 
#line 190
              return __nesc_temp;
            }
          }
        }
#line 192
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTING;
    }
#line 193
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP__VREN__set();
  CC2420ControlP__StartupTimer__start(CC2420_TIME_VREN);
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__startVReg(void ){
#line 51
  unsigned char result;
#line 51

#line 51
  result = CC2420ControlP__CC2420Power__startVReg();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 45 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static error_t CC2420CsmaP__SplitControlState__requestState(uint8_t reqState){
#line 45
  unsigned char result;
#line 45

#line 45
  result = StateImplP__State__requestState(1U, reqState);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 81 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline error_t CC2420CsmaP__SplitControl__start(void )
#line 81
{
  if (CC2420CsmaP__SplitControlState__requestState(CC2420CsmaP__S_STARTING) == SUCCESS) {
      CC2420CsmaP__CC2420Power__startVReg();
      return SUCCESS;
    }
  else {
#line 86
    if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTED)) {
        return EALREADY;
      }
    else {
#line 89
      if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTING)) {
          return SUCCESS;
        }
      }
    }
#line 93
  return EBUSY;
}

# 83 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t AntiTheftRootC__RadioControl__start(void ){
#line 83
  unsigned char result;
#line 83

#line 83
  result = CC2420CsmaP__SplitControl__start();
#line 83

#line 83
  return result;
#line 83
}
#line 83
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__startDoneTask__postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(SerialP__startDoneTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 342 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SplitControl__start(void )
#line 342
{
  SerialP__startDoneTask__postTask();
  return SUCCESS;
}

# 83 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t AntiTheftRootC__SerialControl__start(void ){
#line 83
  unsigned char result;
#line 83

#line 83
  result = SerialP__SplitControl__start();
#line 83

#line 83
  return result;
#line 83
}
#line 83
# 43 "AntiTheftRootC.nc"
static inline void AntiTheftRootC__Boot__booted(void )
{
  AntiTheftRootC__SerialControl__start();
  AntiTheftRootC__RadioControl__start();
}

# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 49
  AntiTheftRootC__Boot__booted();
#line 49
}
#line 49
# 155 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void )
#line 155
{
  uint8_t diff;


  if (* (volatile uint8_t *)(0x37 + 0x20) & ((1 << 1) | (1 << 0))) {




      while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
        ;
      diff = * (volatile uint8_t *)(0x31 + 0x20) - * (volatile uint8_t *)(0x32 + 0x20);
      if (diff < EXT_STANDBY_T0_THRESHOLD || 
      * (volatile uint8_t *)(0x32 + 0x20) > 256 - EXT_STANDBY_T0_THRESHOLD) {
        return ATM128_POWER_EXT_STANDBY;
        }
#line 170
      return ATM128_POWER_SAVE;
    }
  else {
      return ATM128_POWER_DOWN;
    }
}

# 54 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 54
  unsigned char result;
#line 54

#line 54
  result = HplAtm128Timer0AsyncP__McuPowerOverride__lowestState();
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 66 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
#line 66
{





  if (* (volatile uint8_t *)(0x37 + 0x20) & ~((((1 << 1) | (1 << 0)) | (1 << 2)) | (1 << 6)) || 
  * (volatile uint8_t *)0x7D & ~(1 << 2)) {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x0D + 0x20) & (1 << 6)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if ((* (volatile uint8_t *)(0x0A + 0x20) | * (volatile uint8_t *)0x9A) & ((1 << 6) | (1 << 7))) {
          return ATM128_POWER_IDLE;
        }
      else {
        if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x74 & (1 << 2)) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x06 + 0x20) & (1 << 7)) {
              return ATM128_POWER_ADC_NR;
            }
          else {
              return ATM128_POWER_DOWN;
            }
          }
        }
      }
    }
}

# 134 "/opt/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 134
{
  return m1 < m2 ? m1 : m2;
}

# 97 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC__McuSleep__sleep(void )
#line 97
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC__getPowerState(), McuSleepC__McuPowerOverride__lowestState());
  * (volatile uint8_t *)(0x35 + 0x20) = ((
  * (volatile uint8_t *)(0x35 + 0x20) & 0xe3) | (1 << 5)) | __extension__ ({
#line 102
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC__atm128PowerBits[powerState];
#line 102
    uint8_t __result;

#line 102
     __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
  }
  );
#line 104
   __asm volatile ("sei");

   __asm volatile ("sleep" :  :  : "memory");
   __asm volatile ("cli");}

# 59 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 59
  McuSleepC__McuSleep__sleep();
#line 59
}
#line 59
# 67 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 72
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 138
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 150
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 61 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 61
  SchedulerBasicP__Scheduler__taskLoop();
#line 61
}
#line 61
# 140 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static __inline void HplAtm128Timer0AsyncP__stabiliseTimer0(void )
#line 140
{
  * (volatile uint8_t *)(0x33 + 0x20) = * (volatile uint8_t *)(0x33 + 0x20);
  while (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 0)) 
    ;
}

# 47 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void )
{
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow(void ){
#line 71
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow();
#line 71
}
#line 71
# 82 "/opt/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 82
{
   __asm volatile ("sei");}

# 132 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP__Compare__get(void )
#line 132
{
#line 132
  return * (volatile uint8_t *)(0x31 + 0x20);
}

# 39 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get(void ){
#line 39
  unsigned char result;
#line 39

#line 39
  result = HplAtm128Timer0AsyncP__Compare__get();
#line 39

#line 39
  return result;
#line 39
}
#line 39
# 149 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void )
#line 149
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base;
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow();
    }
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer0AsyncP__Compare__fired(void ){
#line 49
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired();
#line 49
}
#line 49
# 230 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void )
#line 230
{
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer0AsyncP__Timer__overflow(void ){
#line 61
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow();
#line 61
}
#line 61
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SpiResource__request(void ){
#line 78
  unsigned char result;
#line 78

#line 78
  result = CC2420SpiP__Resource__request(/*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 171 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Resource__request(void )
#line 171
{
  return CC2420ControlP__SpiResource__request();
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420CsmaP__Resource__request(void ){
#line 78
  unsigned char result;
#line 78

#line 78
  result = CC2420ControlP__Resource__request();
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 207 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__CC2420Power__startVRegDone(void )
#line 207
{
  CC2420CsmaP__Resource__request();
}

# 56 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static void CC2420ControlP__CC2420Power__startVRegDone(void ){
#line 56
  CC2420CsmaP__CC2420Power__startVRegDone();
#line 56
}
#line 56
# 408 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__StartupTimer__fired(void )
#line 408
{
  if (CC2420ControlP__m_state == CC2420ControlP__S_VREG_STARTING) {
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTED;
      CC2420ControlP__RSTN__clr();
      CC2420ControlP__RSTN__set();
      CC2420ControlP__CC2420Power__startVRegDone();
    }
}

# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP__CCA__get(void ){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 496 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__BackoffTimer__fired(void )
#line 496
{
  /* atomic removed: atomic calls only */
#line 497
  {
    switch (CC2420TransmitP__m_state) {

        case CC2420TransmitP__S_SAMPLE_CCA: 


          if (CC2420TransmitP__CCA__get()) {
              CC2420TransmitP__m_state = CC2420TransmitP__S_BEGIN_TRANSMIT;
              CC2420TransmitP__BackoffTimer__start(CC2420_TIME_ACK_TURNAROUND);
            }
          else {
              CC2420TransmitP__congestionBackoff();
            }
        break;

        case CC2420TransmitP__S_BEGIN_TRANSMIT: 
          case CC2420TransmitP__S_CANCEL: 
            if (CC2420TransmitP__acquireSpiResource() == SUCCESS) {
                CC2420TransmitP__attemptSend();
              }
        break;

        case CC2420TransmitP__S_ACK_WAIT: 
          CC2420TransmitP__signalDone(SUCCESS);
        break;

        case CC2420TransmitP__S_SFD: 


          CC2420TransmitP__SFLUSHTX__strobe();
        CC2420TransmitP__CaptureSFD__captureRisingEdge();
        CC2420TransmitP__releaseSpiResource();
        CC2420TransmitP__signalDone(ERETRY);
        break;

        default: 
          break;
      }
  }
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__fired(void ){
#line 67
  CC2420TransmitP__BackoffTimer__fired();
#line 67
  CC2420ControlP__StartupTimer__fired();
#line 67
}
#line 67
# 151 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__fired(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt == 0) 
        {
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__fired();
        }
      else 
        {
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__set_alarm();
        }
    }
#line 163
    __nesc_atomic_end(__nesc_atomic); }
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__fired(void ){
#line 67
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__fired();
#line 67
}
#line 67
# 110 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void )
#line 110
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop();
  ;
  __nesc_enable_interrupt();
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__fired();
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P__CompareA__fired(void ){
#line 49
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired();
#line 49
}
#line 49
# 198 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareB__default__fired(void )
#line 198
{
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P__CompareB__fired(void ){
#line 49
  HplAtm128Timer1P__CompareB__default__fired();
#line 49
}
#line 49
# 202 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareC__default__fired(void )
#line 202
{
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P__CompareC__fired(void ){
#line 49
  HplAtm128Timer1P__CompareC__default__fired();
#line 49
}
#line 49
# 59 "/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420TransmitP__PacketTimeStamp__clear(message_t * msg){
#line 59
  CC2420PacketP__PacketTimeStamp32khz__clear(msg);
#line 59
}
#line 59
# 195 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Receive__sfd_dropped(void )
#line 195
{
  if (CC2420ReceiveP__m_timestamp_size) {
      CC2420ReceiveP__m_timestamp_size--;
    }
}

# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP__CC2420Receive__sfd_dropped(void ){
#line 55
  CC2420ReceiveP__CC2420Receive__sfd_dropped();
#line 55
}
#line 55
# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__get(void )
#line 45
{
#line 45
  return (* (volatile uint8_t * )48U & (1 << 4)) != 0;
}

# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP__SFD__get(void ){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 186 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time)
#line 186
{
  if (CC2420ReceiveP__m_timestamp_size < CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE) {
      uint8_t tail = (CC2420ReceiveP__m_timestamp_head + CC2420ReceiveP__m_timestamp_size) % 
      CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE;

#line 190
      CC2420ReceiveP__m_timestamp_queue[tail] = time;
      CC2420ReceiveP__m_timestamp_size++;
    }
}

# 49 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP__CC2420Receive__sfd(uint32_t time){
#line 49
  CC2420ReceiveP__CC2420Receive__sfd(time);
#line 49
}
#line 49
# 56 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureFallingEdge(void )
#line 56
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__enableCapture(FALSE);
}

# 43 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP__CaptureSFD__captureFallingEdge(void ){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureFallingEdge();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420TransmitP__TXFIFO_RAM__write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char result;
#line 63

#line 63
  result = CC2420SpiP__Ram__write(CC2420_RAM_TXFIFO, offset, data, length);
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 185 "/opt/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline uint8_t CC2420PacketP__PacketTimeSyncOffset__get(message_t *msg)
{
  return __nesc_ntoh_leuint8(CC2420PacketP__CC2420PacketBody__getHeader(msg)->length.data)
   + (sizeof(cc2420_header_t ) - MAC_HEADER_SIZE)
   - MAC_FOOTER_SIZE
   - sizeof(timesync_radio_t );
}

# 47 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
inline static uint8_t CC2420TransmitP__PacketTimeSyncOffset__get(message_t * msg){
#line 47
  unsigned char result;
#line 47

#line 47
  result = CC2420PacketP__PacketTimeSyncOffset__get(msg);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 176 "/opt/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline bool CC2420PacketP__PacketTimeSyncOffset__isSet(message_t *msg)
{
  return __nesc_ntoh_int8(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timesync.data);
}

# 39 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
inline static bool CC2420TransmitP__PacketTimeSyncOffset__isSet(message_t * msg){
#line 39
  unsigned char result;
#line 39

#line 39
  result = CC2420PacketP__PacketTimeSyncOffset__isSet(msg);
#line 39

#line 39
  return result;
#line 39
}
#line 39
# 67 "/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420TransmitP__PacketTimeStamp__set(message_t * msg, CC2420TransmitP__PacketTimeStamp__size_type value){
#line 67
  CC2420PacketP__PacketTimeStamp32khz__set(msg, value);
#line 67
}
#line 67
# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static CC2420TransmitP__BackoffTimer__size_type CC2420TransmitP__BackoffTimer__getNow(void ){
#line 98
  unsigned long result;
#line 98

#line 98
  result = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow();
#line 98

#line 98
  return result;
#line 98
}
#line 98
# 259 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static __inline uint32_t CC2420TransmitP__getTime32(uint16_t time)
{
  uint32_t recent_time = CC2420TransmitP__BackoffTimer__getNow();

#line 262
  return recent_time + (int16_t )(time - recent_time);
}

#line 278
static inline void CC2420TransmitP__CaptureSFD__captured(uint16_t time)
#line 278
{
  unsigned char *__nesc_temp45;
  unsigned char *__nesc_temp44;
#line 279
  uint32_t time32;
  uint8_t sfd_state = 0;

#line 281
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 281
    {
      time32 = CC2420TransmitP__getTime32(time);
      switch (CC2420TransmitP__m_state) {

          case CC2420TransmitP__S_SFD: 
            CC2420TransmitP__m_state = CC2420TransmitP__S_EFD;
          CC2420TransmitP__sfdHigh = TRUE;


          CC2420TransmitP__m_receiving = FALSE;
          CC2420TransmitP__CaptureSFD__captureFallingEdge();
          CC2420TransmitP__PacketTimeStamp__set(CC2420TransmitP__m_msg, time32);
          if (CC2420TransmitP__PacketTimeSyncOffset__isSet(CC2420TransmitP__m_msg)) {
              uint8_t absOffset = sizeof(message_header_t ) - sizeof(cc2420_header_t ) + CC2420TransmitP__PacketTimeSyncOffset__get(CC2420TransmitP__m_msg);
              timesync_radio_t *timesync = (timesync_radio_t *)((nx_uint8_t *)CC2420TransmitP__m_msg + absOffset);

              (__nesc_temp44 = (*timesync).data, __nesc_hton_uint32(__nesc_temp44, __nesc_ntoh_uint32(__nesc_temp44) - time32));
              CC2420TransmitP__CSN__clr();
              CC2420TransmitP__TXFIFO_RAM__write(absOffset, (uint8_t *)timesync, sizeof(timesync_radio_t ));
              CC2420TransmitP__CSN__set();

              (__nesc_temp45 = (*timesync).data, __nesc_hton_uint32(__nesc_temp45, __nesc_ntoh_uint32(__nesc_temp45) + time32));
            }

          if (__nesc_ntoh_leuint16(CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg)->fcf.data) & (1 << IEEE154_FCF_ACK_REQ)) {

              CC2420TransmitP__abortSpiRelease = TRUE;
            }
          CC2420TransmitP__releaseSpiResource();
          CC2420TransmitP__BackoffTimer__stop();

          if (CC2420TransmitP__SFD__get()) {
              break;
            }


          case CC2420TransmitP__S_EFD: 
            CC2420TransmitP__sfdHigh = FALSE;
          CC2420TransmitP__CaptureSFD__captureRisingEdge();

          if (__nesc_ntoh_leuint16(CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg)->fcf.data) & (1 << IEEE154_FCF_ACK_REQ)) {
              CC2420TransmitP__m_state = CC2420TransmitP__S_ACK_WAIT;
              CC2420TransmitP__BackoffTimer__start(CC2420_ACK_WAIT_DELAY);
            }
          else 
#line 324
            {
              CC2420TransmitP__signalDone(SUCCESS);
            }

          if (!CC2420TransmitP__SFD__get()) {
              break;
            }


          default: 

            if (!CC2420TransmitP__m_receiving && CC2420TransmitP__sfdHigh == FALSE) {
                CC2420TransmitP__sfdHigh = TRUE;
                CC2420TransmitP__CaptureSFD__captureFallingEdge();

                sfd_state = CC2420TransmitP__SFD__get();
                CC2420TransmitP__CC2420Receive__sfd(time32);
                CC2420TransmitP__m_receiving = TRUE;
                CC2420TransmitP__m_prev_time = time;
                if (CC2420TransmitP__SFD__get()) {
                    {
                      __nesc_atomic_end(__nesc_atomic); 
#line 345
                      return;
                    }
                  }
              }


          if (CC2420TransmitP__sfdHigh == TRUE) {
              CC2420TransmitP__sfdHigh = FALSE;
              CC2420TransmitP__CaptureSFD__captureRisingEdge();
              CC2420TransmitP__m_receiving = FALSE;








              if (sfd_state == 0 && time - CC2420TransmitP__m_prev_time < 10) {
                  CC2420TransmitP__CC2420Receive__sfd_dropped();
                  if (CC2420TransmitP__m_msg) {
                    CC2420TransmitP__PacketTimeStamp__clear(CC2420TransmitP__m_msg);
                    }
                }
#line 368
              break;
            }
        }
    }
#line 371
    __nesc_atomic_end(__nesc_atomic); }
}

# 50 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captured(uint16_t time){
#line 50
  CC2420TransmitP__CaptureSFD__captured(time);
#line 50
}
#line 50
# 126 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Capture__reset(void )
#line 126
{
#line 126
  * (volatile uint8_t *)(0x36 + 0x20) = 1 << 5;
}

# 55 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__reset(void ){
#line 55
  HplAtm128Timer1P__Capture__reset();
#line 55
}
#line 55
# 64 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__captured(uint16_t time)
#line 64
{
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__reset();
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captured(time);
}

# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm128Timer1P__Capture__captured(HplAtm128Timer1P__Capture__size_type t){
#line 51
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__captured(t);
#line 51
}
#line 51
# 117 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void )
#line 117
{
}

# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void )
#line 51
{
}

# 166 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__overflow(void )
{
}

# 47 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__overflow(void ){
#line 71
  /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 71
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__overflow();
#line 71
}
#line 71
# 122 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline void /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper++;
      if ((/*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper & /*Counter32khz32C.Transform32*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
        /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__overflow();
        }
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow(void ){
#line 71
  /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow();
#line 71
}
#line 71
# 56 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void )
{
  /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow();
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer1P__Timer__overflow(void ){
#line 61
  /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow();
#line 61
  /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow();
#line 61
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow();
#line 61
}
#line 61
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__default__fired(void )
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__default__fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig0__fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__default__fired(void )
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__default__fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig1__fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__default__fired(void )
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__default__fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig2__fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__default__fired(void )
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__default__fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__IrqSignal__fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig3__fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__IrqSignal__fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__default__fired(void )
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__default__fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__IrqSignal__fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig4__fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__IrqSignal__fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__default__fired(void )
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__default__fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__IrqSignal__fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig5__fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__IrqSignal__fired();
#line 41
}
#line 41
# 212 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__InterruptFIFOP__fired(void )
#line 212
{
  if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STARTED) {

      CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_LENGTH;
      CC2420ReceiveP__beginReceive();
    }
  else 



    {
      CC2420ReceiveP__m_missed_packets++;
    }
}

# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__fired(void ){
#line 57
  CC2420ReceiveP__InterruptFIFOP__fired();
#line 57
}
#line 57
# 38 "/opt/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__fired(void )
#line 38
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__fired();
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__fired(void ){
#line 64
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__IrqSignal__fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig6__fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__IrqSignal__fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__default__fired(void )
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__default__fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__IrqSignal__fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig7__fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__IrqSignal__fired();
#line 41
}
#line 41
# 98 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline uint8_t HplAtm128SpiP__SPI__read(void )
#line 98
{
#line 98
  return * (volatile uint8_t *)(0x0F + 0x20);
}

# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static uint8_t Atm128SpiP__Spi__read(void ){
#line 80
  unsigned char result;
#line 80

#line 80
  result = HplAtm128SpiP__SPI__read();
#line 80

#line 80
  return result;
#line 80
}
#line 80
#line 96
inline static void Atm128SpiP__Spi__enableInterrupt(bool enabled){
#line 96
  HplAtm128SpiP__SPI__enableInterrupt(enabled);
#line 96
}
#line 96
# 299 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__Spi__dataReady(uint8_t data)
#line 299
{
  bool again;

  /* atomic removed: atomic calls only */
#line 302
  {
    if (Atm128SpiP__rxBuffer != (void *)0) {
        Atm128SpiP__rxBuffer[Atm128SpiP__pos] = data;
      }

    Atm128SpiP__pos++;
  }
  Atm128SpiP__Spi__enableInterrupt(FALSE);
  /* atomic removed: atomic calls only */
  {
    again = Atm128SpiP__pos < Atm128SpiP__len;
  }

  if (again) {
      Atm128SpiP__sendNextPart();
    }
  else {
      uint8_t discard;
      uint16_t myLen;
      uint8_t * rx;
      uint8_t * tx;

      /* atomic removed: atomic calls only */
#line 324
      {
        myLen = Atm128SpiP__len;
        rx = Atm128SpiP__rxBuffer;
        tx = Atm128SpiP__txBuffer;
        Atm128SpiP__rxBuffer = (void *)0;
        Atm128SpiP__txBuffer = (void *)0;
        Atm128SpiP__len = 0;
        Atm128SpiP__pos = 0;
      }
      discard = Atm128SpiP__Spi__read();

      Atm128SpiP__SpiPacket__sendDone(tx, rx, myLen, SUCCESS);
    }
}

# 92 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void HplAtm128SpiP__SPI__dataReady(uint8_t data){
#line 92
  Atm128SpiP__Spi__dataReady(data);
#line 92
}
#line 92
# 387 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data)
#line 387
{
  SerialP__rx_state_machine(FALSE, data);
}

# 83 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data){
#line 83
  SerialP__SerialFrameComm__dataReceived(data);
#line 83
}
#line 83
# 384 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__delimiterReceived(void )
#line 384
{
  SerialP__rx_state_machine(TRUE, 0);
}

# 74 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void ){
#line 74
  SerialP__SerialFrameComm__delimiterReceived();
#line 74
}
#line 74
# 61 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data)
#line 61
{






  if (data == HDLC_FLAG_BYTE) {

      HdlcTranslateC__SerialFrameComm__delimiterReceived();
      return;
    }
  else {
#line 73
    if (data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC__state.receiveEscape = 1;
        return;
      }
    else {
#line 78
      if (HdlcTranslateC__state.receiveEscape) {

          HdlcTranslateC__state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
#line 83
  HdlcTranslateC__SerialFrameComm__dataReceived(data);
}

# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte){
#line 79
  HdlcTranslateC__UartStream__receivedByte(byte);
#line 79
}
#line 79
# 116 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 116
{
}

# 99 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 99
  HdlcTranslateC__UartStream__receiveDone(buf, len, error);
#line 99
}
#line 99
# 133 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data)
#line 133
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos++] = data;
      if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos >= /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len) {
          uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;

          /* atomic removed: atomic calls only */
#line 139
          {
            /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf = (void *)0;
            if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr != 3) {
                /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
                /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
              }
          }
          /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len, SUCCESS);
        }
    }
  else {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(data);
    }
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__rxDone(uint8_t data){
#line 49
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(data);
#line 49
}
#line 49
# 391 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline bool SerialP__valid_rx_proto(uint8_t proto)
#line 391
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        return TRUE;
      case SERIAL_PROTO_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          default: 
            return FALSE;
    }
}

# 192 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void )
#line 192
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 1;
    }
}

#line 188
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void )
#line 188
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked;
}

#line 215
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void )
#line 215
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
#line 217
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

# 51 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static error_t SerialP__ReceiveBytePacket__startPacket(void ){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 309 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline uint16_t SerialP__rx_current_crc(void )
#line 309
{
  uint16_t crc;
  uint8_t tmp = SerialP__rxBuf.writePtr;

#line 312
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP__rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP__rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

# 69 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__endPacket(error_t result){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(result);
#line 69
}
#line 69
# 210 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void )
#line 210
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which];
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 232 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_full(void )
#line 232
{
  uint8_t tmp;
#line 233
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
#line 234
  {
    tmp = SerialP__ackQ.writePtr;
    tmp2 = SerialP__ackQ.readPtr;
  }
  if (++tmp > SerialP__ACK_QUEUE_SIZE) {
#line 238
    tmp = 0;
    }
#line 239
  return tmp == tmp2;
}







static __inline void SerialP__ack_queue_push(uint8_t token)
#line 248
{
  if (!SerialP__ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
#line 250
      {
        SerialP__ackQ.buf[SerialP__ackQ.writePtr] = token;
        if (++ SerialP__ackQ.writePtr > SerialP__ACK_QUEUE_SIZE) {
#line 252
          SerialP__ackQ.writePtr = 0;
          }
      }
#line 254
      SerialP__MaybeScheduleTx();
    }
}

# 233 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b)
#line 233
{
  /* atomic removed: atomic calls only */
#line 234
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE: 
          default: 
#line 255
            ;
      }
  }
}

# 58 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data){
#line 58
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(data);
#line 58
}
#line 58
# 299 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline uint8_t SerialP__rx_buffer_top(void )
#line 299
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 301
  return tmp;
}

#line 303
static __inline uint8_t SerialP__rx_buffer_pop(void )
#line 303
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 305
  if (++ SerialP__rxBuf.readPtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 305
    SerialP__rxBuf.readPtr = 0;
    }
#line 306
  return tmp;
}

#line 295
static __inline void SerialP__rx_buffer_push(uint8_t data)
#line 295
{
  SerialP__rxBuf.buf[SerialP__rxBuf.writePtr] = data;
  if (++ SerialP__rxBuf.writePtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 297
    SerialP__rxBuf.writePtr = 0;
    }
}

# 55 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void )
#line 55
{
  HdlcTranslateC__state.receiveEscape = 0;
}

# 68 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void SerialP__SerialFrameComm__resetReceive(void ){
#line 68
  HdlcTranslateC__SerialFrameComm__resetReceive();
#line 68
}
#line 68
#line 54
inline static error_t SerialP__SerialFrameComm__putData(uint8_t data){
#line 54
  unsigned char result;
#line 54

#line 54
  result = HdlcTranslateC__SerialFrameComm__putData(data);
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 513 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__completeSend(void )
#line 513
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
#line 515
  {
    SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

# 60 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void ){
#line 60
  unsigned char result;
#line 60

#line 60
  result = SerialP__SendBytePacket__completeSend();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 167 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void )
#line 167
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
#line 170
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend();
      return 0;
    }
  else {
      return b;
    }
}

# 70 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static uint8_t SerialP__SendBytePacket__nextByte(void ){
#line 70
  unsigned char result;
#line 70

#line 70
  result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte();
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 642 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__putDone(void )
#line 642
{
  {
    error_t txResult = SUCCESS;

    switch (SerialP__txState) {

        case SerialP__TXSTATE_PROTO: 

          txResult = SerialP__SerialFrameComm__putData(SerialP__txProto);

        SerialP__txState = SerialP__TXSTATE_INFO;



        SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txProto);
        break;

        case SerialP__TXSTATE_SEQNO: 
          txResult = SerialP__SerialFrameComm__putData(SerialP__txSeqno);
        SerialP__txState = SerialP__TXSTATE_INFO;
        SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txSeqno);
        break;

        case SerialP__TXSTATE_INFO: 
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 666
            {
              txResult = SerialP__SerialFrameComm__putData(SerialP__txBuf[SerialP__txIndex].buf);
              SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txBuf[SerialP__txIndex].buf);
              ++SerialP__txByteCnt;

              if (SerialP__txIndex == SerialP__TX_DATA_INDEX) {
                  uint8_t nextByte;

#line 673
                  nextByte = SerialP__SendBytePacket__nextByte();
                  if (SerialP__txBuf[SerialP__txIndex].state == SerialP__BUFFER_COMPLETE || SerialP__txByteCnt >= SerialP__SERIAL_MTU) {
                      SerialP__txState = SerialP__TXSTATE_FCS1;
                    }
                  else {
                      SerialP__txBuf[SerialP__txIndex].buf = nextByte;
                    }
                }
              else {
                  SerialP__txState = SerialP__TXSTATE_FCS1;
                }
            }
#line 684
            __nesc_atomic_end(__nesc_atomic); }
        break;

        case SerialP__TXSTATE_FCS1: 
          txResult = SerialP__SerialFrameComm__putData(SerialP__txCRC & 0xff);
        SerialP__txState = SerialP__TXSTATE_FCS2;
        break;

        case SerialP__TXSTATE_FCS2: 
          txResult = SerialP__SerialFrameComm__putData((SerialP__txCRC >> 8) & 0xff);
        SerialP__txState = SerialP__TXSTATE_ENDFLAG;
        break;

        case SerialP__TXSTATE_ENDFLAG: 
          txResult = SerialP__SerialFrameComm__putDelimiter();
        SerialP__txState = SerialP__TXSTATE_ENDWAIT;
        break;

        case SerialP__TXSTATE_ENDWAIT: 
          SerialP__txState = SerialP__TXSTATE_FINISH;
        case SerialP__TXSTATE_FINISH: 
          SerialP__MaybeScheduleTx();
        break;
        case SerialP__TXSTATE_ERROR: 
          default: 
            txResult = FAIL;
        break;
      }

    if (txResult != SUCCESS) {
        SerialP__txState = SerialP__TXSTATE_ERROR;
        SerialP__MaybeScheduleTx();
      }
  }
}

# 89 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__putDone(void ){
#line 89
  SerialP__SerialFrameComm__putDone();
#line 89
}
#line 89
# 48 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static error_t HdlcTranslateC__UartStream__send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char result;
#line 48

#line 48
  result = /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(buf, len);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 104 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error)
#line 105
{
  if (HdlcTranslateC__state.sendEscape) {
      HdlcTranslateC__state.sendEscape = 0;
      HdlcTranslateC__m_data = HdlcTranslateC__txTemp;
      HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
    }
  else {
      HdlcTranslateC__SerialFrameComm__putDone();
    }
}

# 57 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 57
  HdlcTranslateC__UartStream__sendDone(buf, len, error);
#line 57
}
#line 57
# 46 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data){
#line 46
  HplAtm128UartP__HplUart0__tx(data);
#line 46
}
#line 46
# 173 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void )
#line 173
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos < /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);
    }
  else {
      uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;

#line 180
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = (void *)0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len, SUCCESS);
    }
}

# 47 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__txDone(void ){
#line 47
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone();
#line 47
}
#line 47
# 277 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data)
#line 277
{
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__rxDone(uint8_t data){
#line 49
  HplAtm128UartP__HplUart1__default__rxDone(data);
#line 49
}
#line 49
# 276 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__txDone(void )
#line 276
{
}

# 47 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__txDone(void ){
#line 47
  HplAtm128UartP__HplUart1__default__txDone();
#line 47
}
#line 47
# 188 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__CompareA__default__fired(void )
#line 188
{
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer3P__CompareA__fired(void ){
#line 49
  HplAtm128Timer3P__CompareA__default__fired();
#line 49
}
#line 49
# 192 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__CompareB__default__fired(void )
#line 192
{
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer3P__CompareB__fired(void ){
#line 49
  HplAtm128Timer3P__CompareB__default__fired();
#line 49
}
#line 49
# 196 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__CompareC__default__fired(void )
#line 196
{
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer3P__CompareC__fired(void ){
#line 49
  HplAtm128Timer3P__CompareC__default__fired();
#line 49
}
#line 49
# 200 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__Capture__default__captured(uint16_t time)
#line 200
{
}

# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm128Timer3P__Capture__captured(HplAtm128Timer3P__Capture__size_type t){
#line 51
  HplAtm128Timer3P__Capture__default__captured(t);
#line 51
}
#line 51
# 47 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline uint16_t HplAtm128Timer3P__Timer__get(void )
#line 47
{
#line 47
  return * (volatile uint16_t *)0x88;
}

# 216 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void )
#line 216
{
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterMicro32C.Transform32*/TransformCounterC__1__Counter__overflow(void ){
#line 71
  /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow();
#line 71
}
#line 71
# 122 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMicro32C.Transform32*/TransformCounterC__1__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMicro32C.Transform32*/TransformCounterC__1__m_upper++;
      if ((/*CounterMicro32C.Transform32*/TransformCounterC__1__m_upper & /*CounterMicro32C.Transform32*/TransformCounterC__1__OVERFLOW_MASK) == 0) {
        /*CounterMicro32C.Transform32*/TransformCounterC__1__Counter__overflow();
        }
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterThree16C.NCounter*/Atm128CounterC__1__Counter__overflow(void ){
#line 71
  /*CounterMicro32C.Transform32*/TransformCounterC__1__CounterFrom__overflow();
#line 71
}
#line 71
# 56 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterThree16C.NCounter*/Atm128CounterC__1__Timer__overflow(void )
{
  /*CounterThree16C.NCounter*/Atm128CounterC__1__Counter__overflow();
}

# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__overflow(void )
#line 51
{
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer3P__Timer__overflow(void ){
#line 61
  /*InitThreeP.InitThree*/Atm128TimerInitC__1__Timer__overflow();
#line 61
  /*CounterThree16C.NCounter*/Atm128CounterC__1__Timer__overflow();
#line 61
}
#line 61
# 52 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
  int main(void )
#line 52
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 60
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 77
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 123 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 127
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 131
          FALSE;

#line 131
          return __nesc_temp;
        }
      }
  }
#line 134
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 164
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x40347c40){
#line 64
  switch (arg_0x40347c40) {
#line 64
    case CC2420CsmaP__startDone_task:
#line 64
      CC2420CsmaP__startDone_task__runTask();
#line 64
      break;
#line 64
    case CC2420CsmaP__stopDone_task:
#line 64
      CC2420CsmaP__stopDone_task__runTask();
#line 64
      break;
#line 64
    case CC2420CsmaP__sendDone_task:
#line 64
      CC2420CsmaP__sendDone_task__runTask();
#line 64
      break;
#line 64
    case CC2420ControlP__sync:
#line 64
      CC2420ControlP__sync__runTask();
#line 64
      break;
#line 64
    case CC2420ControlP__syncDone:
#line 64
      CC2420ControlP__syncDone__runTask();
#line 64
      break;
#line 64
    case HplCC2420InterruptsP__CCATask:
#line 64
      HplCC2420InterruptsP__CCATask__runTask();
#line 64
      break;
#line 64
    case CC2420SpiP__grant:
#line 64
      CC2420SpiP__grant__runTask();
#line 64
      break;
#line 64
    case Atm128SpiP__zeroTask:
#line 64
      Atm128SpiP__zeroTask__runTask();
#line 64
      break;
#line 64
    case /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask:
#line 64
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask();
#line 64
      break;
#line 64
    case CC2420ReceiveP__receiveDone_task:
#line 64
      CC2420ReceiveP__receiveDone_task__runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 64
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 64
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 64
      break;
#line 64
    case CC2420TinyosNetworkP__grantTask:
#line 64
      CC2420TinyosNetworkP__grantTask__runTask();
#line 64
      break;
#line 64
    case SerialP__RunTx:
#line 64
      SerialP__RunTx__runTask();
#line 64
      break;
#line 64
    case SerialP__startDoneTask:
#line 64
      SerialP__startDoneTask__runTask();
#line 64
      break;
#line 64
    case SerialP__stopDoneTask:
#line 64
      SerialP__stopDoneTask__runTask();
#line 64
      break;
#line 64
    case SerialP__defaultSerialFlushTask:
#line 64
      SerialP__defaultSerialFlushTask__runTask();
#line 64
      break;
#line 64
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone:
#line 64
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask();
#line 64
      break;
#line 64
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask:
#line 64
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask();
#line 64
      break;
#line 64
    case /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__changedTask:
#line 64
      /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__changedTask__runTask();
#line 64
      break;
#line 64
    case /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask:
#line 64
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask__runTask();
#line 64
      break;
#line 64
    case /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask:
#line 64
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__runTask();
#line 64
      break;
#line 64
    case /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask:
#line 64
      /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__runTask();
#line 64
      break;
#line 64
    case /*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask:
#line 64
      /*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask__runTask();
#line 64
      break;
#line 64
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask:
#line 64
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask();
#line 64
      break;
#line 64
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask:
#line 64
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask();
#line 64
      break;
#line 64
    default:
#line 64
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x40347c40);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
# 155 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(uint8_t last, message_t * msg, error_t err)
#line 155
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[last].msg = (void *)0;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend();
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(last, msg, err);
}

# 137 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg)
#line 137
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 139
  return __nesc_ntoh_uint16(header->dest.data);
}

#line 57
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 59
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_uint16(header->dest.data, dest);





  __nesc_hton_uint8(header->type.data, id);
  __nesc_hton_uint8(header->length.data, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(msg, len);
}

# 502 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP__MaybeScheduleTx(void )
#line 502
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 503
    {
      if (SerialP__txPending == 0) {
          if (SerialP__RunTx__postTask() == SUCCESS) {
              SerialP__txPending = 1;
            }
        }
    }
#line 509
    __nesc_atomic_end(__nesc_atomic); }
}

# 159 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 161
    {
#line 161
      {
        unsigned char __nesc_temp = 
#line 161
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 161
          __nesc_atomic_end(__nesc_atomic); 
#line 161
          return __nesc_temp;
        }
      }
    }
#line 164
    __nesc_atomic_end(__nesc_atomic); }
}

# 442 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static uint16_t LinkEstimatorP__LinkEstimator__getLinkQuality(am_addr_t neighbor)
#line 442
{
  uint8_t idx;

#line 444
  idx = LinkEstimatorP__findIdx(neighbor);
  if (idx == LinkEstimatorP__INVALID_RVAL) {
      return LinkEstimatorP__VERY_LARGE_EETX_VALUE;
    }
  else 
#line 447
    {
      if (LinkEstimatorP__NeighborTable[idx].flags & MATURE_ENTRY) {
          return LinkEstimatorP__NeighborTable[idx].eetx;
        }
      else 
#line 450
        {
          return LinkEstimatorP__VERY_LARGE_EETX_VALUE;
        }
    }
}

#line 176
static uint8_t LinkEstimatorP__findIdx(am_addr_t ll_addr)
#line 176
{
  uint8_t i;

#line 178
  for (i = 0; i < 10; i++) {
      if (LinkEstimatorP__NeighborTable[i].flags & VALID_ENTRY) {
          if (LinkEstimatorP__NeighborTable[i].ll_addr == ll_addr) {
              return i;
            }
        }
    }
  return LinkEstimatorP__INVALID_RVAL;
}

#line 486
static error_t LinkEstimatorP__LinkEstimator__pinNeighbor(am_addr_t neighbor)
#line 486
{
  uint8_t nidx = LinkEstimatorP__findIdx(neighbor);

#line 488
  if (nidx == LinkEstimatorP__INVALID_RVAL) {
      return FAIL;
    }
  LinkEstimatorP__NeighborTable[nidx].flags |= PINNED_ENTRY;
  return SUCCESS;
}

# 164 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__chooseAdvertiseTime(void )
#line 164
{
  /*CtpP.Router*/CtpRoutingEngineP__0__t = /*CtpP.Router*/CtpRoutingEngineP__0__currentInterval;
  /*CtpP.Router*/CtpRoutingEngineP__0__t /= 2;
  /*CtpP.Router*/CtpRoutingEngineP__0__t += /*CtpP.Router*/CtpRoutingEngineP__0__Random__rand32() % /*CtpP.Router*/CtpRoutingEngineP__0__t;
  /*CtpP.Router*/CtpRoutingEngineP__0__tHasPassed = FALSE;
  /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__stop();
  /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__startOneShot(/*CtpP.Router*/CtpRoutingEngineP__0__t);
}

# 58 "/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC__Random__rand32(void )
#line 58
{
  uint32_t mlcg;
#line 59
  uint32_t p;
#line 59
  uint32_t q;
  uint64_t tmpseed;

#line 61
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC__seed;
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgC__seed = mlcg;
    }
#line 73
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 133 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 136
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 161 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void )
#line 161
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();

      if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 704 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static void *LinkEstimatorP__Packet__getPayload(message_t *msg, uint8_t len)
#line 704
{
  void *payload = LinkEstimatorP__SubPacket__getPayload(msg, len + sizeof(linkest_header_t ));

#line 706
  if (payload != (void *)0) {
      payload += sizeof(linkest_header_t );
    }
  return payload;
}

#line 406
static void LinkEstimatorP__print_packet(message_t *msg, uint8_t len)
#line 406
{
  uint8_t i;
  uint8_t *b;

  b = (uint8_t *)msg->data;
  for (i = 0; i < len; i++) 
    ;
  ;
}

# 156 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static void CC2420ActiveMessageP__AMPacket__setType(message_t *amsg, am_id_t type)
#line 156
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(amsg);

#line 158
  __nesc_hton_leuint8(header->type.data, type);
}

# 82 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 83
{
  if (clientId >= 4) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 4) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(msg);

      ;
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 4;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 185 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static void CC2420ActiveMessageP__Packet__setPayloadLength(message_t *msg, uint8_t len)
#line 185
{
  __nesc_hton_leuint8(CC2420ActiveMessageP__CC2420PacketBody__getHeader(msg)->length.data, len + CC2420_SIZE);
}

#line 151
static am_id_t CC2420ActiveMessageP__AMPacket__type(message_t *amsg)
#line 151
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(amsg);

#line 153
  return __nesc_ntoh_leuint8(header->type.data);
}

#line 126
static am_addr_t CC2420ActiveMessageP__AMPacket__destination(message_t *amsg)
#line 126
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(amsg);

#line 128
  return __nesc_ntoh_leuint16(header->dest.data);
}

#line 78
static error_t CC2420ActiveMessageP__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len)
#line 80
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(msg);

  if (len > CC2420ActiveMessageP__Packet__maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_leuint8(header->type.data, id);
  __nesc_hton_leuint16(header->dest.data, addr);
  __nesc_hton_leuint16(header->destpan.data, CC2420ActiveMessageP__CC2420Config__getPanAddr());
  __nesc_hton_leuint16(header->src.data, CC2420ActiveMessageP__AMPacket__address());

  if (CC2420ActiveMessageP__RadioResource__immediateRequest() == SUCCESS) {
      error_t rc;

#line 94
      CC2420ActiveMessageP__SendNotifier__aboutToSend(id, addr, msg);

      rc = CC2420ActiveMessageP__SubSend__send(msg, len);
      if (rc != SUCCESS) {
          CC2420ActiveMessageP__RadioResource__release();
        }

      return rc;
    }
  else 
#line 102
    {
      CC2420ActiveMessageP__pending_length = len;
      CC2420ActiveMessageP__pending_message = msg;
      return CC2420ActiveMessageP__RadioResource__request();
    }
}

# 95 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void )
#line 95
{
  am_addr_t myAddr;

#line 97
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
    myAddr = ActiveMessageAddressC__addr;
#line 97
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

# 50 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 50
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 51
    {
      unsigned char __nesc_temp = 
#line 51
      /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead == /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;

      {
#line 51
        __nesc_atomic_end(__nesc_atomic); 
#line 51
        return __nesc_temp;
      }
    }
#line 53
    __nesc_atomic_end(__nesc_atomic); }
}

# 106 "/opt/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static void CC2420PacketP__CC2420Packet__setNetwork(message_t *p_msg, uint8_t networkId)
#line 106
{

  __nesc_hton_leuint8(CC2420PacketP__CC2420PacketBody__getHeader(p_msg)->network.data, networkId);
}

# 75 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static error_t UniqueSendP__Send__send(message_t *msg, uint8_t len)
#line 75
{
  error_t error;

#line 77
  if (UniqueSendP__State__requestState(UniqueSendP__S_SENDING) == SUCCESS) {
      __nesc_hton_leuint8(UniqueSendP__CC2420PacketBody__getHeader(msg)->dsn.data, UniqueSendP__localSendId++);

      if ((error = UniqueSendP__SubSend__send(msg, len)) != SUCCESS) {
          UniqueSendP__State__toIdle();
        }

      return error;
    }

  return EBUSY;
}

# 96 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState)
#line 96
{
  error_t returnVal = FAIL;

#line 98
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 98
    {
      if (reqState == StateImplP__S_IDLE || StateImplP__state[id] == StateImplP__S_IDLE) {
          StateImplP__state[id] = reqState;
          returnVal = SUCCESS;
        }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return returnVal;
}

#line 133
static bool StateImplP__State__isState(uint8_t id, uint8_t myState)
#line 133
{
  bool isState;

#line 135
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 135
    isState = StateImplP__state[id] == myState;
#line 135
    __nesc_atomic_end(__nesc_atomic); }
  return isState;
}

# 787 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static error_t CC2420TransmitP__acquireSpiResource(void )
#line 787
{
  error_t error = CC2420TransmitP__SpiResource__immediateRequest();

#line 789
  if (error != SUCCESS) {
      CC2420TransmitP__SpiResource__request();
    }
  return error;
}

# 126 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__immediateRequest(uint8_t id)
#line 126
{
  error_t error;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 129
    {
      if (CC2420SpiP__WorkingState__requestState(CC2420SpiP__S_BUSY) != SUCCESS) {
          {
            unsigned char __nesc_temp = 
#line 131
            EBUSY;

            {
#line 131
              __nesc_atomic_end(__nesc_atomic); 
#line 131
              return __nesc_temp;
            }
          }
        }
      if (CC2420SpiP__SpiResource__isOwner()) {
          CC2420SpiP__m_holder = id;
          error = SUCCESS;
        }
      else {
#line 139
        if ((error = CC2420SpiP__SpiResource__immediateRequest()) == SUCCESS) {
            CC2420SpiP__m_holder = id;
          }
        else {
            CC2420SpiP__WorkingState__toIdle();
          }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 146
  return error;
}

# 148 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__isOwner(uint8_t id)
#line 148
{
  /* atomic removed: atomic calls only */
#line 149
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId == id && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY) {
        unsigned char __nesc_temp = 
#line 150
        TRUE;

#line 150
        return __nesc_temp;
      }
    else 
#line 151
      {
        unsigned char __nesc_temp = 
#line 151
        FALSE;

#line 151
        return __nesc_temp;
      }
  }
}

# 106 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static void Atm128SpiP__startSpi(void )
#line 106
{
  Atm128SpiP__Spi__enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 108
  {
    Atm128SpiP__Spi__initMaster();
    Atm128SpiP__Spi__enableInterrupt(FALSE);
    Atm128SpiP__Spi__setMasterDoubleSpeed(TRUE);
    Atm128SpiP__Spi__setClockPolarity(FALSE);
    Atm128SpiP__Spi__setClockPhase(FALSE);
    Atm128SpiP__Spi__setClock(0);
    Atm128SpiP__Spi__enableSpi(TRUE);
  }
  Atm128SpiP__McuPowerState__update();
}

# 130 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static void HplAtm128SpiP__SPI__enableSpi(bool enabled)
#line 130
{
  if (enabled) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 6;
      HplAtm128SpiP__Mcu__update();
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 6);
      HplAtm128SpiP__Mcu__update();
    }
}

#line 115
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled)
#line 115
{
  if (enabled) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 7;
      HplAtm128SpiP__Mcu__update();
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 7);
      HplAtm128SpiP__Mcu__update();
    }
}

# 107 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__request(uint8_t id)
#line 107
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (CC2420SpiP__WorkingState__requestState(CC2420SpiP__S_BUSY) == SUCCESS) {
          CC2420SpiP__m_holder = id;
          if (CC2420SpiP__SpiResource__isOwner()) {
              CC2420SpiP__grant__postTask();
            }
          else {
              CC2420SpiP__SpiResource__request();
            }
        }
      else {
          CC2420SpiP__m_requests |= 1 << id;
        }
    }
#line 122
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 124 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse(void )
#line 124
{
  /* atomic removed: atomic calls only */
#line 125
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE) 
      {
        unsigned char __nesc_temp = 
#line 127
        FALSE;

#line 127
        return __nesc_temp;
      }
  }
#line 129
  return TRUE;
}

# 817 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP__loadTXFIFO(void )
#line 817
{
  cc2420_header_t *header = CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg);
  uint8_t tx_power = __nesc_ntoh_uint8(CC2420TransmitP__CC2420PacketBody__getMetadata(CC2420TransmitP__m_msg)->tx_power.data);

  if (!tx_power) {
      tx_power = 31;
    }

  CC2420TransmitP__CSN__clr();

  if (CC2420TransmitP__m_tx_power != tx_power) {
      CC2420TransmitP__TXCTRL__write((((2 << CC2420_TXCTRL_TXMIXBUF_CUR) | (
      3 << CC2420_TXCTRL_PA_CURRENT)) | (
      1 << CC2420_TXCTRL_RESERVED)) | ((
      tx_power & 0x1F) << CC2420_TXCTRL_PA_LEVEL));
    }

  CC2420TransmitP__m_tx_power = tx_power;

  {
    uint8_t tmpLen __attribute((unused))  = __nesc_ntoh_leuint8(header->length.data) - 1;

#line 838
    CC2420TransmitP__TXFIFO__write((uint8_t * )header, __nesc_ntoh_leuint8(header->length.data) - 1);
  }
}

# 305 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Reg__write(uint8_t addr, uint16_t data)
#line 305
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 306
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 308
            0;

            {
#line 308
              __nesc_atomic_end(__nesc_atomic); 
#line 308
              return __nesc_temp;
            }
          }
        }
    }
#line 312
    __nesc_atomic_end(__nesc_atomic); }
#line 311
  CC2420SpiP__SpiByte__write(addr);
  CC2420SpiP__SpiByte__write(data >> 8);
  return CC2420SpiP__SpiByte__write(data & 0xff);
}

# 128 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx)
#line 128
{





  Atm128SpiP__Spi__enableSpi(TRUE);
  Atm128SpiP__McuPowerState__update();

  Atm128SpiP__Spi__write(tx);
  while (!(* (volatile uint8_t *)(0x0E + 0x20) & 0x80)) ;
  return Atm128SpiP__Spi__read();
}

#line 275
static error_t Atm128SpiP__SpiPacket__send(uint8_t *writeBuf, 
uint8_t *readBuf, 
uint16_t bufLen)
#line 277
{
  uint8_t discard;

#line 279
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 279
    {
      Atm128SpiP__len = bufLen;
      Atm128SpiP__txBuffer = writeBuf;
      Atm128SpiP__rxBuffer = readBuf;
      Atm128SpiP__pos = 0;
    }
#line 284
    __nesc_atomic_end(__nesc_atomic); }
  if (bufLen > 0) {
      discard = Atm128SpiP__Spi__read();
      return Atm128SpiP__sendNextPart();
    }
  else {
      Atm128SpiP__zeroTask__postTask();
      return SUCCESS;
    }
}

#line 196
static error_t Atm128SpiP__sendNextPart(void )
#line 196
{
  uint16_t end;
  uint16_t tmpPos;
  uint16_t myLen;
  uint8_t * tx;
  uint8_t * rx;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 203
    {
      myLen = Atm128SpiP__len;
      tx = Atm128SpiP__txBuffer;
      rx = Atm128SpiP__rxBuffer;
      tmpPos = Atm128SpiP__pos;
      end = Atm128SpiP__pos + Atm128SpiP__SPI_ATOMIC_SIZE;
      end = end > Atm128SpiP__len ? Atm128SpiP__len : end;
    }
#line 210
    __nesc_atomic_end(__nesc_atomic); }

  for (; tmpPos < end - 1; tmpPos++) {
      uint8_t val;

#line 214
      if (tx != (void *)0) {
        val = Atm128SpiP__SpiByte__write(tx[tmpPos]);
        }
      else {
#line 217
        val = Atm128SpiP__SpiByte__write(0);
        }
      if (rx != (void *)0) {
          rx[tmpPos] = val;
        }
    }



  Atm128SpiP__Spi__enableInterrupt(TRUE);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      if (tx != (void *)0) {
        Atm128SpiP__Spi__write(tx[tmpPos]);
        }
      else {
#line 231
        Atm128SpiP__Spi__write(0);
        }
      Atm128SpiP__pos = tmpPos;
    }
#line 234
    __nesc_atomic_end(__nesc_atomic); }


  return SUCCESS;
}

# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static void UniqueSendP__State__toIdle(void ){
#line 56
  StateImplP__State__toIdle(2U);
#line 56
}
#line 56
# 538 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__getEtx(uint16_t *etx)
#line 538
{
  if (etx == (void *)0) {
    return FAIL;
    }
#line 541
  if (/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent == INVALID_ADDR) {
    return FAIL;
    }
#line 543
  if (/*CtpP.Router*/CtpRoutingEngineP__0__state_is_root == 1) {
      *etx = 0;
    }
  else 
#line 545
    {

      *etx = /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.etx + /*CtpP.Router*/CtpRoutingEngineP__0__evaluateEtx(/*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__getLinkQuality(/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent));
    }
  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(4U, dt);
#line 62
}
#line 62
# 181 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static uint8_t CC2420ActiveMessageP__Packet__payloadLength(message_t *msg)
#line 181
{
  return __nesc_ntoh_leuint8(CC2420ActiveMessageP__CC2420PacketBody__getHeader(msg)->length.data) - CC2420_SIZE;
}

# 84 "/opt/tinyos-2.x/tos/lib/net/ctp/LruCtpMsgCacheP.nc"
static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__lookup(message_t *m)
#line 84
{
  uint8_t i;
  uint8_t idx;

#line 87
  for (i = 0; i < /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count; i++) {
      idx = (i + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first) % 4;


      if (
#line 89
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getOrigin(m) == /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[idx].origin && 
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getSequenceNumber(m) == /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[idx].seqno && 
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getThl(m) == /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[idx].thl && 
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getType(m) == /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[idx].type) {
          break;
        }
    }
  return i;
}

# 115 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static void * /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__getPayload(message_t * msg, uint8_t len){
#line 115
  void *result;
#line 115

#line 115
  result = CC2420ActiveMessageP__Packet__getPayload(msg, len);
#line 115

#line 115
  return result;
#line 115
}
#line 115
# 809 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getSequenceNumber(message_t *msg)
#line 809
{
#line 809
  return __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->originSeqNo.data);
}

#line 810
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getThl(message_t *msg)
#line 810
{
#line 810
  return __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->thl.data);
}

#line 806
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getType(message_t *msg)
#line 806
{
#line 806
  return __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->type.data);
}

# 85 "/opt/tinyos-2.x/tos/system/QueueC.nc"
static /*CtpP.SendQueueP*/QueueC__0__queue_t /*CtpP.SendQueueP*/QueueC__0__Queue__dequeue(void )
#line 85
{
  /*CtpP.SendQueueP*/QueueC__0__queue_t t = /*CtpP.SendQueueP*/QueueC__0__Queue__head();

#line 87
  ;
  if (!/*CtpP.SendQueueP*/QueueC__0__Queue__empty()) {
      /*CtpP.SendQueueP*/QueueC__0__head++;
      if (/*CtpP.SendQueueP*/QueueC__0__head == 12) {
#line 90
        /*CtpP.SendQueueP*/QueueC__0__head = 0;
        }
#line 91
      /*CtpP.SendQueueP*/QueueC__0__size--;
      /*CtpP.SendQueueP*/QueueC__0__printQueue();
    }
  return t;
}

# 103 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static error_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__put(/*CtpP.MessagePoolP.PoolP*/PoolP__0__pool_t *newVal)
#line 103
{
  if (/*CtpP.MessagePoolP.PoolP*/PoolP__0__free >= 12) {
      return FAIL;
    }
  else {
      uint8_t emptyIndex = /*CtpP.MessagePoolP.PoolP*/PoolP__0__index + /*CtpP.MessagePoolP.PoolP*/PoolP__0__free;

#line 109
      if (emptyIndex >= 12) {
          emptyIndex -= 12;
        }
      /*CtpP.MessagePoolP.PoolP*/PoolP__0__queue[emptyIndex] = newVal;
      /*CtpP.MessagePoolP.PoolP*/PoolP__0__free++;
      ;
      return SUCCESS;
    }
}

#line 103
static error_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__put(/*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool_t *newVal)
#line 103
{
  if (/*CtpP.QEntryPoolP.PoolP*/PoolP__1__free >= 12) {
      return FAIL;
    }
  else {
      uint8_t emptyIndex = /*CtpP.QEntryPoolP.PoolP*/PoolP__1__index + /*CtpP.QEntryPoolP.PoolP*/PoolP__1__free;

#line 109
      if (emptyIndex >= 12) {
          emptyIndex -= 12;
        }
      /*CtpP.QEntryPoolP.PoolP*/PoolP__1__queue[emptyIndex] = newVal;
      /*CtpP.QEntryPoolP.PoolP*/PoolP__1__free++;
      ;
      return SUCCESS;
    }
}

# 789 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static void */*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__getPayload(message_t *msg, uint8_t len)
#line 789
{
  uint8_t *payload = /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__getPayload(msg, len + sizeof(ctp_data_header_t ));

#line 791
  if (payload != (void *)0) {
      payload += sizeof(ctp_data_header_t );
    }
  return payload;
}

# 85 "AntiTheftRootC.nc"
static message_t *AntiTheftRootC__AlertsReceive__receive(message_t *msg, void *payload, 
uint8_t len)
{
  alert_t *newAlert = payload;

  AntiTheftRootC__Leds__led0Toggle();

  if (len == sizeof  (*newAlert) && !AntiTheftRootC__fwdBusy) 
    {


      alert_t *fwdAlert = AntiTheftRootC__AlertsForward__getPayload(&AntiTheftRootC__fwdMsg, sizeof(alert_t ));

#line 97
      if (fwdAlert != (void *)0) {
          *fwdAlert = *newAlert;
          if (AntiTheftRootC__AlertsForward__send(AM_BROADCAST_ADDR, &AntiTheftRootC__fwdMsg, sizeof  (*fwdAlert)) == SUCCESS) {
            AntiTheftRootC__fwdBusy = TRUE;
            }
        }
    }
#line 103
  return msg;
}

# 533 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__sendDone(message_t *msg, error_t error)
#line 533
{
  fe_queue_entry_t *qe = /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__head();

#line 535
  ;

  if (error != SUCCESS) {

      ;
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(NET_C_FE_SENDDONE_FAIL, 
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(msg), 
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(msg), 
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(msg));
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__startRetxmitTimer(SENDDONE_FAIL_WINDOW, SENDDONE_FAIL_OFFSET);
    }
  else {
#line 546
    if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__hasState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__ACK_PENDING) && !/*CtpP.Forwarder*/CtpForwardingEngineP__0__PacketAcknowledgements__wasAcked(msg)) {

        /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__txNoAck(/*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(msg));
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__recomputeRoutes();
        if (-- qe->retries) {
            ;
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(NET_C_FE_SENDDONE_WAITACK, 
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(msg), 
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(msg), 
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(msg));
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__startRetxmitTimer(SENDDONE_NOACK_WINDOW, SENDDONE_NOACK_OFFSET);
          }
        else 
#line 557
          {

            /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__dequeue();
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__clearState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SENDING);
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__startRetxmitTimer(SENDDONE_OK_WINDOW, SENDDONE_OK_OFFSET);

            /*CtpP.Forwarder*/CtpForwardingEngineP__0__packetComplete(qe, msg, FALSE);
          }
      }
    else {



        /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__dequeue();
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__clearState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SENDING);
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__startRetxmitTimer(SENDDONE_OK_WINDOW, SENDDONE_OK_OFFSET);
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__txAck(/*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(msg));
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__packetComplete(qe, msg, TRUE);
      }
    }
}

#line 800
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(message_t *msg)
#line 800
{
#line 800
  return __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->originSeqNo.data);
}

#line 798
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(message_t *msg)
#line 798
{
#line 798
  return __nesc_ntoh_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->origin.data);
}

#line 255
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__startRetxmitTimer(uint16_t window, uint16_t offset)
#line 255
{
  uint16_t r = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Random__rand16();

#line 257
  r %= window;
  r += offset;
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__startOneShot(r);
  ;
}

# 281 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static void LinkEstimatorP__updateDEETX(neighbor_table_entry_t *ne)
#line 281
{
  uint16_t estETX;

  if (ne->data_success == 0) {



      estETX = (ne->data_total - 1) * 10;
    }
  else 
#line 289
    {
      estETX = 10 * ne->data_total / ne->data_success - 10;
      ne->data_success = 0;
      ne->data_total = 0;
    }
  LinkEstimatorP__updateEETX(ne, estETX);
}

#line 275
static void LinkEstimatorP__updateEETX(neighbor_table_entry_t *ne, uint16_t newEst)
#line 275
{
  ne->eetx = (LinkEstimatorP__ALPHA * ne->eetx + (10 - LinkEstimatorP__ALPHA) * newEst + 5) / 10;
}

# 489 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__packetComplete(fe_queue_entry_t *qe, message_t *msg, bool success)
#line 489
{



  if (qe->client < /*CtpP.Forwarder*/CtpForwardingEngineP__0__CLIENT_COUNT) {
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__clientPtrs[qe->client] = qe;
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__sendDone(qe->client, msg, SUCCESS);
      if (success) {
          ;
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(NET_C_FE_SENT_MSG, 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(msg));
        }
      else 
#line 502
        {
          ;
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(NET_C_FE_SENDDONE_FAIL_ACK_SEND, 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(msg));
        }
    }
  else {
      if (success) {
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__insert(qe->msg);
          ;
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(NET_C_FE_FWD_MSG, 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(msg));
        }
      else {
          ;
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(NET_C_FE_SENDDONE_FAIL_ACK_FWD, 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(msg));
        }
      if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__put(qe->msg) != SUCCESS) {
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_PUT_MSGPOOL_ERR);
        }
#line 528
      if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__put(qe) != SUCCESS) {
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_PUT_QEPOOL_ERR);
        }
    }
}

# 130 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminationEngineImplP.nc"
static void DisseminationEngineImplP__sendObject(uint16_t key)
#line 130
{
  void *object;
  uint8_t objectSize = 0;

  dissemination_message_t *dMsg = 
  (dissemination_message_t *)DisseminationEngineImplP__AMSend__getPayload(&DisseminationEngineImplP__m_buf, sizeof(dissemination_message_t ));

#line 136
  if (dMsg != (void *)0) {
      DisseminationEngineImplP__m_bufBusy = TRUE;

      __nesc_hton_uint16(dMsg->key.data, key);
      __nesc_hton_uint32(dMsg->seqno.data, DisseminationEngineImplP__DisseminationCache__requestSeqno(key));

      if (__nesc_ntoh_uint32(dMsg->seqno.data) != DISSEMINATION_SEQNO_UNKNOWN) {
          object = DisseminationEngineImplP__DisseminationCache__requestData(key, &objectSize);
          if (objectSize + sizeof(dissemination_message_t ) > 
          DisseminationEngineImplP__AMSend__maxPayloadLength()) {
              objectSize = DisseminationEngineImplP__AMSend__maxPayloadLength() - sizeof(dissemination_message_t );
            }
          memcpy(dMsg->data, object, objectSize);
        }
      DisseminationEngineImplP__AMSend__send(AM_BROADCAST_ADDR, 
      &DisseminationEngineImplP__m_buf, sizeof(dissemination_message_t ) + objectSize);
    }
}

# 117 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static void *CC2420ActiveMessageP__AMSend__getPayload(am_id_t id, message_t *m, uint8_t len)
#line 117
{
  return CC2420ActiveMessageP__Packet__getPayload(m, len);
}

#line 113
static uint8_t CC2420ActiveMessageP__AMSend__maxPayloadLength(am_id_t id)
#line 113
{
  return CC2420ActiveMessageP__Packet__maxPayloadLength();
}

# 207 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
#line 207
{
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(uint8_t arg_0x40e52ba0, message_t * msg, error_t error){
#line 89
  switch (arg_0x40e52ba0) {
#line 89
    case 0U:
#line 89
      /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(msg, error);
#line 89
      break;
#line 89
    case 1U:
#line 89
      /*DisseminationEngineP.DisseminationProbeSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(msg, error);
#line 89
      break;
#line 89
    case 2U:
#line 89
      /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__sendDone(msg, error);
#line 89
      break;
#line 89
    case 3U:
#line 89
      /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__Send__sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(arg_0x40e52ba0, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 166 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void )
#line 166
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current < 4) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(nextMsg);

#line 174
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask();
        }
    }
}

# 122 "/opt/tinyos-2.x/tos/lib/net/TrickleTimerImplP.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__reset(uint8_t id)
#line 122
{
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].period = 1;
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].count = 0;
  if (/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].time != 0) {
      ;
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 127
        {
          /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__set(id);
        }
#line 129
        __nesc_atomic_end(__nesc_atomic); }
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].time = 0;
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].remainder = 0;
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__generateTime(id);
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__adjustTimer();
    }
  else 
#line 134
    {
      ;
    }
}

#line 246
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__generateTime(uint8_t id)
#line 246
{
  uint32_t newTime;
  uint16_t rval;

  if (/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].time != 0) {
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].period *= 2;
      if (/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].period > 1024) {
          /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].period = 1024;
        }
    }

  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].time = /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].remainder;

  newTime = /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].period;
  newTime = newTime << (10 - 1);

  rval = /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Random__rand16() % (/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].period << (10 - 1));
  newTime += rval;

  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].remainder = ((uint32_t )/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].period << 10) - newTime;
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].time += newTime;
  ;
}

#line 203
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__adjustTimer(void )
#line 203
{
  uint8_t i;
  uint32_t lowest = 0;
  bool set = FALSE;





  uint32_t elapsed = /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__getNow() - /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__gett0();

  for (i = 0; i < 1U; i++) {
      uint32_t timeRemaining = /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].time;

#line 216
      if (timeRemaining != 0) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 217
            {
              if (!/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__get(i)) {
                  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__clear(i);
                  timeRemaining -= elapsed;
                }
            }
#line 222
            __nesc_atomic_end(__nesc_atomic); }
          if (!set) {
              lowest = timeRemaining;
              set = TRUE;
            }
          else {
#line 227
            if (timeRemaining < lowest) {
                lowest = timeRemaining;
              }
            }
        }
    }
#line 232
  if (set) {
      uint32_t timerVal = lowest;

#line 234
      timerVal = timerVal;
      ;
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__startOneShot(timerVal);
    }
  else {
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__stop();
    }
}

# 347 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP__testOff(void )
#line 347
{
  bool turnOff = FALSE;

#line 349
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 349
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE && 
      SerialP__rxState == SerialP__RXSTATE_INACTIVE) {
          turnOff = TRUE;
        }
    }
#line 354
    __nesc_atomic_end(__nesc_atomic); }
  if (turnOff) {
      SerialP__stopDoneTask__postTask();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 357
        SerialP__offPending = FALSE;
#line 357
        __nesc_atomic_end(__nesc_atomic); }
    }
  else {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 360
        SerialP__offPending = TRUE;
#line 360
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 86 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void )
#line 86
{
  HdlcTranslateC__state.sendEscape = 0;
  HdlcTranslateC__m_data = HDLC_FLAG_BYTE;
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 155 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len)
#line 155
{

  if (len == 0) {
    return FAIL;
    }
  else {
#line 159
    if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf) {
      return EBUSY;
      }
    }
#line 162
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len = len;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = buf;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 1;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);

  return SUCCESS;
}

# 164 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static void HplAtm128UartP__HplUart0__tx(uint8_t data)
#line 164
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 165
    {
      * (volatile uint8_t *)(0x0C + 0x20) = data;
      * (volatile uint8_t *)(0x0B + 0x20) |= 1 << 6;
    }
#line 168
    __nesc_atomic_end(__nesc_atomic); }
}

# 65 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static void CC2420ActiveMessageP__RadioResource__granted(void )
#line 65
{
  uint8_t rc;
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(CC2420ActiveMessageP__pending_message);

  CC2420ActiveMessageP__SendNotifier__aboutToSend(__nesc_ntoh_leuint8(header->type.data), __nesc_ntoh_leuint16(header->dest.data), CC2420ActiveMessageP__pending_message);
  rc = CC2420ActiveMessageP__SubSend__send(CC2420ActiveMessageP__pending_message, CC2420ActiveMessageP__pending_length);
  if (rc != SUCCESS) {
      CC2420ActiveMessageP__RadioResource__release();
      CC2420ActiveMessageP__AMSend__sendDone(__nesc_ntoh_leuint8(header->type.data), CC2420ActiveMessageP__pending_message, rc);
    }
}

# 181 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
#line 181
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 4) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current, msg, err);
    }
  else {
      ;
    }
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 79
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 212 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0 = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt = ndt;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
}

#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void )
#line 90
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag().flat;

#line 101
      ;
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) || tifr & (1 << 1)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) {
              ;
            }
          else {
              ;
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
          ;
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get();

#line 120
          ;

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base;

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
                }
              else {
#line 136
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT;
                  }
                else {
#line 139
                  newOcr0 = alarm_in;
                  }
                }
            }
        }
#line 142
      newOcr0--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(newOcr0);
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired();
    }
}

# 279 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static uint16_t CC2420ControlP__CC2420Config__getShortAddr(void )
#line 279
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 280
    {
      unsigned short __nesc_temp = 
#line 280
      CC2420ControlP__m_short_addr;

      {
#line 280
        __nesc_atomic_end(__nesc_atomic); 
#line 280
        return __nesc_temp;
      }
    }
#line 282
    __nesc_atomic_end(__nesc_atomic); }
}

# 98 "/opt/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static uint8_t CC2420PacketP__CC2420Packet__getNetwork(message_t *p_msg)
#line 98
{



  return __nesc_ntoh_leuint8(CC2420PacketP__CC2420PacketBody__getHeader(p_msg)->network.data);
}

# 131 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static am_addr_t CC2420ActiveMessageP__AMPacket__source(message_t *amsg)
#line 131
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(amsg);

#line 133
  return __nesc_ntoh_leuint16(header->src.data);
}

# 356 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static void LinkEstimatorP__updateNeighborEntryIdx(uint8_t idx, uint8_t seq)
#line 356
{
  uint8_t packetGap;

  if (LinkEstimatorP__NeighborTable[idx].flags & INIT_ENTRY) {
      ;
      LinkEstimatorP__NeighborTable[idx].lastseq = seq;
      LinkEstimatorP__NeighborTable[idx].flags &= ~INIT_ENTRY;
    }

  packetGap = seq - LinkEstimatorP__NeighborTable[idx].lastseq;
  ;

  LinkEstimatorP__NeighborTable[idx].lastseq = seq;
  LinkEstimatorP__NeighborTable[idx].rcvcnt++;
  if (packetGap > 0) {
      LinkEstimatorP__NeighborTable[idx].failcnt += packetGap - 1;
    }





  if (
#line 377
  LinkEstimatorP__NeighborTable[idx].rcvcnt + LinkEstimatorP__NeighborTable[idx].failcnt >= LinkEstimatorP__BLQ_PKT_WINDOW
   || packetGap >= LinkEstimatorP__BLQ_PKT_WINDOW) {
      LinkEstimatorP__updateNeighborTableEst(LinkEstimatorP__NeighborTable[idx].ll_addr);
    }

  if (packetGap > LinkEstimatorP__MAX_PKT_GAP) {
      LinkEstimatorP__initNeighborIdx(idx, LinkEstimatorP__NeighborTable[idx].ll_addr);
      LinkEstimatorP__NeighborTable[idx].lastseq = seq;
      LinkEstimatorP__NeighborTable[idx].rcvcnt = 1;
    }
}

#line 163
static void LinkEstimatorP__initNeighborIdx(uint8_t i, am_addr_t ll_addr)
#line 163
{
  neighbor_table_entry_t *ne;

#line 165
  ne = &LinkEstimatorP__NeighborTable[i];
  ne->ll_addr = ll_addr;
  ne->lastseq = 0;
  ne->rcvcnt = 0;
  ne->failcnt = 0;
  ne->flags = INIT_ENTRY | VALID_ENTRY;
  ne->inquality = 0;
  ne->eetx = 0;
}

#line 189
static uint8_t LinkEstimatorP__findEmptyNeighborIdx(void )
#line 189
{
  uint8_t i;

#line 191
  for (i = 0; i < 10; i++) {
      if (LinkEstimatorP__NeighborTable[i].flags & VALID_ENTRY) {
        }
      else 
#line 193
        {
          return i;
        }
    }
  return LinkEstimatorP__INVALID_RVAL;
}



static uint8_t LinkEstimatorP__findWorstNeighborIdx(uint8_t thresholdEETX)
#line 202
{
  uint8_t i;
#line 203
  uint8_t worstNeighborIdx;
  uint16_t worstEETX;
#line 204
  uint16_t thisEETX;

  worstNeighborIdx = LinkEstimatorP__INVALID_RVAL;
  worstEETX = 0;
  for (i = 0; i < 10; i++) {
      if (!(LinkEstimatorP__NeighborTable[i].flags & VALID_ENTRY)) {
          ;
          continue;
        }
      if (!(LinkEstimatorP__NeighborTable[i].flags & MATURE_ENTRY)) {
          ;
          continue;
        }
      if (LinkEstimatorP__NeighborTable[i].flags & PINNED_ENTRY) {
          ;
          continue;
        }
      thisEETX = LinkEstimatorP__NeighborTable[i].eetx;
      if (thisEETX >= worstEETX) {
          worstNeighborIdx = i;
          worstEETX = thisEETX;
        }
    }
  if (worstEETX >= thresholdEETX) {
      return worstNeighborIdx;
    }
  else 
#line 229
    {
      return LinkEstimatorP__INVALID_RVAL;
    }
}

# 509 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__evicted(am_addr_t neighbor)
#line 509
{
  /*CtpP.Router*/CtpRoutingEngineP__0__routingTableEvict(neighbor);
  ;
  if (/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent == neighbor) {
      routeInfoInit(&/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo);
      /*CtpP.Router*/CtpRoutingEngineP__0__justEvicted = TRUE;
      /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__postTask();
    }
}

#line 696
static uint8_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableFind(am_addr_t neighbor)
#line 696
{
  uint8_t i;

#line 698
  if (neighbor == INVALID_ADDR) {
    return /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive;
    }
#line 700
  for (i = 0; i < /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive; i++) {
      if (/*CtpP.Router*/CtpRoutingEngineP__0__routingTable[i].neighbor == neighbor) {
        break;
        }
    }
#line 704
  return i;
}

# 680 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static uint8_t LinkEstimatorP__Packet__payloadLength(message_t *msg)
#line 680
{
  linkest_header_t *hdr;

#line 682
  hdr = LinkEstimatorP__getHeader(msg);
  return LinkEstimatorP__SubPacket__payloadLength(msg)
   - sizeof(linkest_header_t )
   - sizeof(linkest_footer_t ) * (NUM_ENTRIES_FLAG & __nesc_ntoh_uint8(hdr->flags.data));
}

# 784 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP__0__CtpRoutingPacket__getOption(message_t *msg, ctp_options_t opt)
#line 784
{
  return (__nesc_ntoh_uint8(/*CtpP.Router*/CtpRoutingEngineP__0__getHeader(msg)->options.data) & opt) == opt ? TRUE : FALSE;
}

# 699 "/opt/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static uint8_t LinkEstimatorP__Packet__maxPayloadLength(void )
#line 699
{
  return LinkEstimatorP__SubPacket__maxPayloadLength() - sizeof(linkest_header_t );
}

# 564 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__setNeighborCongested(am_addr_t n, bool congested)
#line 564
{
  uint8_t idx;

#line 566
  if (/*CtpP.Router*/CtpRoutingEngineP__0__ECNOff) {
    return;
    }
#line 568
  idx = /*CtpP.Router*/CtpRoutingEngineP__0__routingTableFind(n);
  if (idx < /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive) {
      /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].info.congested = congested;
    }
  if (/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.congested && !congested) {
    /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__postTask();
    }
  else {
#line 574
    if (/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent == n && congested) {
      /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__postTask();
      }
    }
}

# 106 "/opt/tinyos-2.x/tos/lib/net/drip/DisseminatorP.nc"
static void /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__storeData(void *data, uint8_t size, 
uint32_t newSeqno)
#line 107
{
  memcpy(&/*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__valueCache, data, size < sizeof(/*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__t ) ? size : sizeof(/*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__t ));
  /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__seqno = newSeqno;




  /*AntiTheftRootAppC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationValue__changed();
}

# 816 "/opt/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__option(message_t *msg, ctp_options_t opt)
#line 816
{
  return (__nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->options.data) & opt) == opt ? TRUE : FALSE;
}

# 764 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP__waitForNextPacket(void )
#line 764
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 765
    {
      if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED) {
          CC2420ReceiveP__SpiResource__release();
          {
#line 768
            __nesc_atomic_end(__nesc_atomic); 
#line 768
            return;
          }
        }
      CC2420ReceiveP__receivingPacket = FALSE;
#line 783
      if ((CC2420ReceiveP__m_missed_packets && CC2420ReceiveP__FIFO__get()) || !CC2420ReceiveP__FIFOP__get()) {

          if (CC2420ReceiveP__m_missed_packets) {
              CC2420ReceiveP__m_missed_packets--;
            }





          CC2420ReceiveP__beginReceive();
        }
      else 
        {

          CC2420ReceiveP__m_state = CC2420ReceiveP__S_STARTED;
          CC2420ReceiveP__m_missed_packets = 0;
          CC2420ReceiveP__SpiResource__release();
        }
    }
#line 802
    __nesc_atomic_end(__nesc_atomic); }
}

# 149 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__release(uint8_t id)
#line 149
{
  uint8_t i;

#line 151
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
    {
      if (CC2420SpiP__m_holder != id) {
          {
            unsigned char __nesc_temp = 
#line 153
            FAIL;

            {
#line 153
              __nesc_atomic_end(__nesc_atomic); 
#line 153
              return __nesc_temp;
            }
          }
        }
#line 156
      CC2420SpiP__m_holder = CC2420SpiP__NO_HOLDER;
      if (!CC2420SpiP__m_requests) {
          CC2420SpiP__WorkingState__toIdle();
          CC2420SpiP__attemptRelease();
        }
      else {
          for (i = CC2420SpiP__m_holder + 1; ; i++) {
              i %= CC2420SpiP__RESOURCE_COUNT;

              if (CC2420SpiP__m_requests & (1 << i)) {
                  CC2420SpiP__m_holder = i;
                  CC2420SpiP__m_requests &= ~(1 << i);
                  CC2420SpiP__grant__postTask();
                  {
                    unsigned char __nesc_temp = 
#line 169
                    SUCCESS;

                    {
#line 169
                      __nesc_atomic_end(__nesc_atomic); 
#line 169
                      return __nesc_temp;
                    }
                  }
                }
            }
        }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
#line 175
  return SUCCESS;
}

#line 339
static error_t CC2420SpiP__attemptRelease(void )
#line 339
{


  if ((
#line 340
  CC2420SpiP__m_requests > 0
   || CC2420SpiP__m_holder != CC2420SpiP__NO_HOLDER)
   || !CC2420SpiP__WorkingState__isIdle()) {
      return FAIL;
    }
  /* atomic removed: atomic calls only */
  CC2420SpiP__release = TRUE;
  CC2420SpiP__ChipSpiResource__releasing();
  /* atomic removed: atomic calls only */
#line 348
  {
    if (CC2420SpiP__release) {
        CC2420SpiP__SpiResource__release();
        {
          unsigned char __nesc_temp = 
#line 351
          SUCCESS;

#line 351
          return __nesc_temp;
        }
      }
  }
  return EBUSY;
}

# 711 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP__beginReceive(void )
#line 711
{
  CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_LENGTH;
  /* atomic removed: atomic calls only */
#line 713
  CC2420ReceiveP__receivingPacket = TRUE;
  if (CC2420ReceiveP__SpiResource__isOwner()) {
      CC2420ReceiveP__receive();
    }
  else {
#line 717
    if (CC2420ReceiveP__SpiResource__immediateRequest() == SUCCESS) {
        CC2420ReceiveP__receive();
      }
    else {
        CC2420ReceiveP__SpiResource__request();
      }
    }
}

#line 754
static void CC2420ReceiveP__receive(void )
#line 754
{
  CC2420ReceiveP__CSN__clr();
  CC2420ReceiveP__RXFIFO__beginRead((uint8_t *)CC2420ReceiveP__CC2420PacketBody__getHeader(CC2420ReceiveP__m_p_rx_buf), 1);
}

# 189 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Fifo__beginRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 190
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 194
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 196
            status;

            {
#line 196
              __nesc_atomic_end(__nesc_atomic); 
#line 196
              return __nesc_temp;
            }
          }
        }
    }
#line 200
    __nesc_atomic_end(__nesc_atomic); }
#line 200
  CC2420SpiP__m_addr = addr | 0x40;

  status = CC2420SpiP__SpiByte__write(CC2420SpiP__m_addr);
  CC2420SpiP__Fifo__continueRead(addr, data, len);

  return status;
}

#line 329
static void CC2420SpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error)
#line 330
{
  if (CC2420SpiP__m_addr & 0x40) {
      CC2420SpiP__Fifo__readDone(CC2420SpiP__m_addr & ~0x40, rx_buf, len, error);
    }
  else 
#line 333
    {
      CC2420SpiP__Fifo__writeDone(CC2420SpiP__m_addr, tx_buf, len, error);
    }
}

# 728 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP__flush(void )
#line 728
{








  CC2420ReceiveP__reset_state();

  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__CSN__clr();
  CC2420ReceiveP__SFLUSHRX__strobe();
  CC2420ReceiveP__SFLUSHRX__strobe();
  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__SpiResource__release();
  CC2420ReceiveP__waitForNextPacket();
}

#line 808
static void CC2420ReceiveP__reset_state(void )
#line 808
{
  CC2420ReceiveP__m_bytes_left = CC2420ReceiveP__RXFIFO_SIZE;
  /* atomic removed: atomic calls only */
#line 810
  CC2420ReceiveP__receivingPacket = FALSE;
  CC2420ReceiveP__m_timestamp_head = 0;
  CC2420ReceiveP__m_timestamp_size = 0;
  CC2420ReceiveP__m_missed_packets = 0;
}

# 318 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Strobe__strobe(uint8_t addr)
#line 318
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 319
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 321
            0;

            {
#line 321
              __nesc_atomic_end(__nesc_atomic); 
#line 321
              return __nesc_temp;
            }
          }
        }
    }
#line 325
    __nesc_atomic_end(__nesc_atomic); }
#line 325
  return CC2420SpiP__SpiByte__write(addr);
}

# 137 "/opt/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static void CC2420PacketP__PacketTimeStamp32khz__clear(message_t *msg)
{
  __nesc_hton_int8(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timesync.data, FALSE);
  __nesc_hton_uint32(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timestamp.data, CC2420_INVALID_TIMESTAMP);
}

# 842 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP__signalDone(error_t err)
#line 842
{
  /* atomic removed: atomic calls only */
#line 843
  CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
  CC2420TransmitP__abortSpiRelease = FALSE;
  CC2420TransmitP__ChipSpiResource__attemptRelease();
  CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, err);
}

#line 735
static void CC2420TransmitP__attemptSend(void )
#line 735
{
  uint8_t status;
  bool congestion = TRUE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 739
    {
      if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
          CC2420TransmitP__SFLUSHTX__strobe();
          CC2420TransmitP__releaseSpiResource();
          CC2420TransmitP__CSN__set();
          CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
          CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, ECANCEL);
          {
#line 746
            __nesc_atomic_end(__nesc_atomic); 
#line 746
            return;
          }
        }





      CC2420TransmitP__CSN__clr();
      status = CC2420TransmitP__m_cca ? CC2420TransmitP__STXONCCA__strobe() : CC2420TransmitP__STXON__strobe();
      if (!(status & CC2420_STATUS_TX_ACTIVE)) {
          status = CC2420TransmitP__SNOP__strobe();
          if (status & CC2420_STATUS_TX_ACTIVE) {
              congestion = FALSE;
            }
        }

      CC2420TransmitP__m_state = congestion ? CC2420TransmitP__S_SAMPLE_CCA : CC2420TransmitP__S_SFD;
      CC2420TransmitP__CSN__set();
    }
#line 765
    __nesc_atomic_end(__nesc_atomic); }

  if (congestion) {
      CC2420TransmitP__totalCcaChecks = 0;
      CC2420TransmitP__releaseSpiResource();
      CC2420TransmitP__congestionBackoff();
    }
  else 
#line 771
    {
      CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__CC2420_ABORT_PERIOD);
    }
}





static void CC2420TransmitP__congestionBackoff(void )
#line 780
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 781
    {
      CC2420TransmitP__RadioBackoff__requestCongestionBackoff(CC2420TransmitP__m_msg);
      CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__myCongestionBackoff);
    }
#line 784
    __nesc_atomic_end(__nesc_atomic); }
}

# 136 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 = t0;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt = dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__set_alarm();
    }
#line 143
    __nesc_atomic_end(__nesc_atomic); }
}

#line 96
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__set_alarm(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__get();
#line 98
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type expires;
#line 98
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type remaining;




  expires = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt;


  remaining = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type )(expires - now);


  if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 <= now) 
    {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 121
  if (remaining > /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY) 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 = now + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt = remaining - /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY;
      remaining = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY;
    }
  else 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 += /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt = 0;
    }
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__startAt((/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type )now << 0, 
  (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type )remaining << 0);
}

# 69 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get(void )
{
  /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type rv = 0;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type high = /*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper;
      /*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type low = /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get();

#line 76
      if (/*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type high_to = high;
        /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type low_to = low >> /*Counter32khz32C.Transform32*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 90
        rv = (high_to << /*Counter32khz32C.Transform32*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 456 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static void CC2420ControlP__writeFsctrl(void )
#line 456
{
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 459
    {
      channel = CC2420ControlP__m_channel;
    }
#line 461
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP__FSCTRL__write((1 << CC2420_FSCTRL_LOCK_THR) | (((
  channel - 11) * 5 + 357) << CC2420_FSCTRL_FREQ));
}







static void CC2420ControlP__writeMdmctrl0(void )
#line 473
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 474
    {
      CC2420ControlP__MDMCTRL0__write((((((((1 << CC2420_MDMCTRL0_RESERVED_FRAME_MODE) | ((
      CC2420ControlP__addressRecognition && CC2420ControlP__hwAddressRecognition) << CC2420_MDMCTRL0_ADR_DECODE)) | (
      2 << CC2420_MDMCTRL0_CCA_HYST)) | (
      3 << CC2420_MDMCTRL0_CCA_MOD)) | (
      1 << CC2420_MDMCTRL0_AUTOCRC)) | ((
      CC2420ControlP__autoAckEnabled && CC2420ControlP__hwAutoAckDefault) << CC2420_MDMCTRL0_AUTOACK)) | (
      0 << CC2420_MDMCTRL0_AUTOACK)) | (
      2 << CC2420_MDMCTRL0_PREAMBLE_LENGTH));
    }
#line 483
    __nesc_atomic_end(__nesc_atomic); }
}







static void CC2420ControlP__writeId(void )
#line 492
{
  nxle_uint16_t id[2];

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 495
    {
      __nesc_hton_leuint16(id[0].data, CC2420ControlP__m_pan);
      __nesc_hton_leuint16(id[1].data, CC2420ControlP__m_short_addr);
    }
#line 498
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP__PANID__write(0, (uint8_t *)&id, sizeof id);
}

# 260 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Ram__write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len)
#line 262
{

  cc2420_status_t status = 0;
  uint8_t tmpLen = len;
  uint8_t * tmpData = (uint8_t * )data;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 268
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 270
            status;

            {
#line 270
              __nesc_atomic_end(__nesc_atomic); 
#line 270
              return __nesc_temp;
            }
          }
        }
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }
#line 274
  addr += offset;

  status = CC2420SpiP__SpiByte__write(addr | 0x80);
  CC2420SpiP__SpiByte__write((addr >> 1) & 0xc0);
  for (; len; len--) {
      CC2420SpiP__SpiByte__write(tmpData[tmpLen - len]);
    }

  return status;
}

# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__enableCapture(uint8_t mode)
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__stop();
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__reset();
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__setEdge(mode);
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__start();
  }
  return SUCCESS;
}

# 178 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
__attribute((signal))   void __vector_15(void )
#line 178
{
  HplAtm128Timer0AsyncP__stabiliseTimer0();
  HplAtm128Timer0AsyncP__Compare__fired();
}


__attribute((signal))   void __vector_16(void )
#line 184
{
  HplAtm128Timer0AsyncP__stabiliseTimer0();
  HplAtm128Timer0AsyncP__Timer__overflow();
}

# 195 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
__attribute((interrupt))   void __vector_12(void )
#line 195
{
  HplAtm128Timer1P__CompareA__fired();
}

__attribute((interrupt))   void __vector_13(void )
#line 199
{
  HplAtm128Timer1P__CompareB__fired();
}

__attribute((interrupt))   void __vector_24(void )
#line 203
{
  HplAtm128Timer1P__CompareC__fired();
}

__attribute((interrupt))   void __vector_11(void )
#line 207
{
  HplAtm128Timer1P__Capture__captured(HplAtm128Timer1P__Timer__get());
}

__attribute((interrupt))   void __vector_14(void )
#line 211
{
  HplAtm128Timer1P__Timer__overflow();
}

# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSigP.nc"
__attribute((signal))   void __vector_1(void )
#line 46
{
  HplAtm128InterruptSigP__IntSig0__fired();
}


__attribute((signal))   void __vector_2(void )
#line 51
{
  HplAtm128InterruptSigP__IntSig1__fired();
}


__attribute((signal))   void __vector_3(void )
#line 56
{
  HplAtm128InterruptSigP__IntSig2__fired();
}


__attribute((signal))   void __vector_4(void )
#line 61
{
  HplAtm128InterruptSigP__IntSig3__fired();
}


__attribute((signal))   void __vector_5(void )
#line 66
{
  HplAtm128InterruptSigP__IntSig4__fired();
}


__attribute((signal))   void __vector_6(void )
#line 71
{
  HplAtm128InterruptSigP__IntSig5__fired();
}


__attribute((signal))   void __vector_7(void )
#line 76
{
  HplAtm128InterruptSigP__IntSig6__fired();
}


__attribute((signal))   void __vector_8(void )
#line 81
{
  HplAtm128InterruptSigP__IntSig7__fired();
}

# 102 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
__attribute((signal))   void __vector_17(void )
#line 102
{
  HplAtm128SpiP__SPI__dataReady(HplAtm128SpiP__SPI__read());
}

# 171 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((signal))   void __vector_18(void )
#line 171
{
  if ((* (volatile uint8_t *)(0x0B + 0x20) & (1 << 7)) != 0) {
      HplAtm128UartP__HplUart0__rxDone(* (volatile uint8_t *)(0x0C + 0x20));
    }
}

# 402 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data)
#line 402
{

  switch (SerialP__rxState) {

      case SerialP__RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP__rxInit();
            SerialP__rxState = SerialP__RXSTATE_PROTO;
          }
      break;

      case SerialP__RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP__rxCRC = crcByte(SerialP__rxCRC, data);
            SerialP__rxState = SerialP__RXSTATE_TOKEN;
            SerialP__rxProto = data;
            if (!SerialP__valid_rx_proto(SerialP__rxProto)) {
              goto nosync;
              }
            if (SerialP__rxProto != SERIAL_PROTO_PACKET_ACK) {
                goto nosync;
              }
            if (SerialP__ReceiveBytePacket__startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP__RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP__rxSeqno = data;
            SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rxSeqno);
            SerialP__rxState = SerialP__RXSTATE_INFO;
          }
      break;

      case SerialP__RXSTATE_INFO: 
        if (SerialP__rxByteCnt < SerialP__SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP__rxByteCnt >= 2) {
                    if (SerialP__rx_current_crc() == SerialP__rxCRC) {
                        SerialP__ReceiveBytePacket__endPacket(SUCCESS);
                        SerialP__ack_queue_push(SerialP__rxSeqno);
                        goto nosync;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP__rxByteCnt >= 2) {
                    SerialP__ReceiveBytePacket__byteReceived(SerialP__rx_buffer_top());
                    SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rx_buffer_pop());
                  }
                SerialP__rx_buffer_push(data);
                SerialP__rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP__rxInit();
  SerialP__SerialFrameComm__resetReceive();
  SerialP__ReceiveBytePacket__endPacket(FAIL);
  if (SerialP__offPending) {
      SerialP__rxState = SerialP__RXSTATE_INACTIVE;
      SerialP__testOff();
    }
  else {
    if (isDelimeter) {
        SerialP__rxState = SerialP__RXSTATE_PROTO;
      }
    }
  done: ;
}

# 81 "/opt/tinyos-2.x/tos/chips/atm128/crc.h"
static __attribute((noinline))  uint16_t crcByte(uint16_t oldCrc, uint8_t byte)
{

  uint16_t *table = crcTable;
  uint16_t newCrc;

   __asm ("eor %1,%B3\n"
  "\tlsl %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tadd %A2, %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tlpm\n"
  "\tmov %B0, %A3\n"
  "\tmov %A0, r0\n"
  "\tadiw r30,1\n"
  "\tlpm\n"
  "\teor %B0, r0" : 
  "=r"(newCrc), "+r"(byte), "+z"(table) : "r"(oldCrc));
  return newCrc;
}

# 285 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result)
#line 285
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
#line 287
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE;
      }
    else 
#line 297
      {

        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which);
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask();
    }
}

# 177 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((interrupt))   void __vector_20(void )
#line 177
{
  HplAtm128UartP__HplUart0__txDone();
}

# 92 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data)
#line 92
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      HdlcTranslateC__state.sendEscape = 1;
      HdlcTranslateC__txTemp = data ^ 0x20;
      HdlcTranslateC__m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC__m_data = data;
    }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 265 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((signal))   void __vector_30(void )
#line 265
{
  if ((* (volatile uint8_t *)0x9B & (1 << 7)) != 0) {
    HplAtm128UartP__HplUart1__rxDone(* (volatile uint8_t *)0x9C);
    }
}

#line 270
__attribute((interrupt))   void __vector_32(void )
#line 270
{
  HplAtm128UartP__HplUart1__txDone();
}

# 189 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
__attribute((interrupt))   void __vector_26(void )
#line 189
{
  HplAtm128Timer3P__CompareA__fired();
}

__attribute((interrupt))   void __vector_27(void )
#line 193
{
  HplAtm128Timer3P__CompareB__fired();
}

__attribute((interrupt))   void __vector_28(void )
#line 197
{
  HplAtm128Timer3P__CompareC__fired();
}

__attribute((interrupt))   void __vector_25(void )
#line 201
{
  HplAtm128Timer3P__Capture__captured(HplAtm128Timer3P__Timer__get());
}

__attribute((interrupt))   void __vector_29(void )
#line 205
{
  HplAtm128Timer3P__Timer__overflow();
}

