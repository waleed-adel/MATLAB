/*
 * File: LED_Blinking_Arduino.h
 *
 * Code generated for Simulink model 'LED_Blinking_Arduino'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Fri Jan 31 23:42:24 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LED_Blinking_Arduino_h_
#define RTW_HEADER_LED_Blinking_Arduino_h_
#include <stddef.h>
#include <string.h>
#ifndef LED_Blinking_Arduino_COMMON_INCLUDES_
# define LED_Blinking_Arduino_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "arduino_analogoutput_lct.h"
#endif                                 /* LED_Blinking_Arduino_COMMON_INCLUDES_ */

#include "LED_Blinking_Arduino_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  int32_T clockTickCounter;            /* '<Root>/Pulse Generator' */
} DW_LED_Blinking_Arduino_T;

/* Parameters (auto storage) */
struct P_LED_Blinking_Arduino_T_ {
  uint32_T PWM_pinNumber;              /* Mask Parameter: PWM_pinNumber
                                        * Referenced by: '<S1>/PWM'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 10
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;        /* Computed Parameter: PulseGenerator_Period
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty;          /* Computed Parameter: PulseGenerator_Duty
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_LED_Blinking_Arduino_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_LED_Blinking_Arduino_T LED_Blinking_Arduino_P;

/* Block states (auto storage) */
extern DW_LED_Blinking_Arduino_T LED_Blinking_Arduino_DW;

/* Model entry point functions */
extern void LED_Blinking_Arduino_initialize(void);
extern void LED_Blinking_Arduino_step(void);
extern void LED_Blinking_Arduino_terminate(void);

/* Real-time Model object */
extern RT_MODEL_LED_Blinking_Arduino_T *const LED_Blinking_Arduino_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'LED_Blinking_Arduino'
 * '<S1>'   : 'LED_Blinking_Arduino/PWM'
 */
#endif                                 /* RTW_HEADER_LED_Blinking_Arduino_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
