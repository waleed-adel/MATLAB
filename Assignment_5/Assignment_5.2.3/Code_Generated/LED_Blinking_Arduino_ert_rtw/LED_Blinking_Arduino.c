/*
 * File: LED_Blinking_Arduino.c
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

/* Block states (auto storage) */
DW_LED_Blinking_Arduino_T LED_Blinking_Arduino_DW;

/* Real-time model */
RT_MODEL_LED_Blinking_Arduino_T LED_Blinking_Arduino_M_;
RT_MODEL_LED_Blinking_Arduino_T *const LED_Blinking_Arduino_M =
  &LED_Blinking_Arduino_M_;

/* Model step function */
void LED_Blinking_Arduino_step(void)
{
  real_T rtb_PulseGenerator;
  uint8_T rtb_PulseGenerator_0;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtb_PulseGenerator = (LED_Blinking_Arduino_DW.clockTickCounter <
                        LED_Blinking_Arduino_P.PulseGenerator_Duty) &&
    (LED_Blinking_Arduino_DW.clockTickCounter >= 0L) ?
    LED_Blinking_Arduino_P.PulseGenerator_Amp : 0.0;
  if (LED_Blinking_Arduino_DW.clockTickCounter >=
      LED_Blinking_Arduino_P.PulseGenerator_Period - 1.0) {
    LED_Blinking_Arduino_DW.clockTickCounter = 0L;
  } else {
    LED_Blinking_Arduino_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* DataTypeConversion: '<S1>/Data Type Conversion' */
  if (rtb_PulseGenerator < 256.0) {
    if (rtb_PulseGenerator >= 0.0) {
      rtb_PulseGenerator_0 = (uint8_T)rtb_PulseGenerator;
    } else {
      rtb_PulseGenerator_0 = 0U;
    }
  } else {
    rtb_PulseGenerator_0 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S1>/Data Type Conversion' */

  /* S-Function (arduinoanalogoutput_sfcn): '<S1>/PWM' */
  MW_analogWrite(LED_Blinking_Arduino_P.PWM_pinNumber, rtb_PulseGenerator_0);
}

/* Model initialize function */
void LED_Blinking_Arduino_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(LED_Blinking_Arduino_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&LED_Blinking_Arduino_DW, 0,
                sizeof(DW_LED_Blinking_Arduino_T));

  /* Start for DiscretePulseGenerator: '<Root>/Pulse Generator' */
  LED_Blinking_Arduino_DW.clockTickCounter = 0L;

  /* Start for S-Function (arduinoanalogoutput_sfcn): '<S1>/PWM' */
  MW_pinModeOutput(LED_Blinking_Arduino_P.PWM_pinNumber);
}

/* Model terminate function */
void LED_Blinking_Arduino_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
