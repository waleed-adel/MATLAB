/*
 * File: LED_Blinking_Arduino_data.c
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

#include "LED_Blinking_Arduino.h"
#include "LED_Blinking_Arduino_private.h"

/* Block parameters (auto storage) */
P_LED_Blinking_Arduino_T LED_Blinking_Arduino_P = {
  5U,                                  /* Mask Parameter: PWM_pinNumber
                                        * Referenced by: '<S1>/PWM'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  4.0,                                 /* Computed Parameter: PulseGenerator_Period
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  1.0,                                 /* Computed Parameter: PulseGenerator_Duty
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  0.0                                  /* Expression: 0
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
