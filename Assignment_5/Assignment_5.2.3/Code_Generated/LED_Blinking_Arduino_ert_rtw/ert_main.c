/*
 * File: ert_main.c
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
#include "rtwtypes.h"

volatile int IsrOverrun = 0;
static boolean_T OverrunFlag = 0;
void rt_OneStep(void)
{
  /* Check for overrun. Protect OverrunFlag against preemption */
  if (OverrunFlag++) {
    IsrOverrun = 1;
    OverrunFlag--;
    return;
  }

#ifndef _MW_ARDUINO_LOOP_

  sei();

#endif;

  LED_Blinking_Arduino_step();

  /* Get model outputs here */
#ifndef _MW_ARDUINO_LOOP_

  cli();

#endif;

  OverrunFlag--;
}

int main(void)
{
  volatile boolean_T runModel = 1;
  float modelBaseRate = 0.25;
  float systemClock = 0;
  init();
  MW_Arduino_Init();
  rtmSetErrorStatus(LED_Blinking_Arduino_M, 0);
  LED_Blinking_Arduino_initialize();
  configureArduinoAVRTimer();
  runModel =
    rtmGetErrorStatus(LED_Blinking_Arduino_M) == (NULL);

#ifndef _MW_ARDUINO_LOOP_

  sei();

#endif;

  sei ();
  while (runModel) {
    runModel =
      rtmGetErrorStatus(LED_Blinking_Arduino_M) == (NULL);
    runModel = runModel && MW_Arduino_Loop();
  }

  /* Disable rt_OneStep() here */

  /* Terminate model */
  LED_Blinking_Arduino_terminate();
  cli();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
