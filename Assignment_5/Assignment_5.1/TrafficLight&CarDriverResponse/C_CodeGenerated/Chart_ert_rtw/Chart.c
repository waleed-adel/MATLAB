/*
 * File: Chart.c
 *
 * Code generated for Simulink model 'Chart'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Fri Jan 31 14:27:56 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "Chart.h"

/* Named constants for Chart: '<Root>/Chart' */
#define IN_CAR_BEGINS_TO_MOVE          ((uint8_T)1U)
#define IN_CAR_BEGINS_TO_STOP          ((uint8_T)2U)
#define IN_CAR_MOVES                   ((uint8_T)3U)
#define IN_CAR_STOPS_COMPLETELY        ((uint8_T)4U)
#define IN_GREEN                       ((uint8_T)5U)
#define IN_RED                         ((uint8_T)6U)
#define IN_START                       ((uint8_T)7U)
#define IN_YELLOW                      ((uint8_T)8U)

/* Block signals and states (auto storage) */
DW rtDW;

/* External inputs (root inport signals with auto storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with auto storage) */
ExtY rtY;

/* Real-time model */
RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void Chart_step(void)
{
  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/z'
   */
  if (rtDW.temporalCounter_i1 < 15U) {
    rtDW.temporalCounter_i1++;
  }

  /* Gateway: Chart */
  /* During: Chart */
  if (rtDW.is_active_c3_Chart == 0U) {
    /* Entry: Chart */
    rtDW.is_active_c3_Chart = 1U;

    /* Entry Internal: Chart */
    /* Transition: '<S1>:2' */
    rtDW.is_c3_Chart = IN_START;
  } else {
    switch (rtDW.is_c3_Chart) {
     case IN_CAR_BEGINS_TO_MOVE:
      /* During 'CAR_BEGINS_TO_MOVE': '<S1>:32' */
      /* '<S1>:29:1' sf_internal_predicateOutput = ... */
      /* '<S1>:29:1' after(1,sec); */
      if (rtDW.temporalCounter_i1 >= 10U) {
        /* Transition: '<S1>:29' */
        rtDW.is_c3_Chart = IN_CAR_MOVES;

        /* Outport: '<Root>/driver_response' */
        /* Entry 'CAR_MOVES': '<S1>:33' */
        /* '<S1>:33:1' driver_response=1; */
        rtY.driver_response = 1.0;
      }
      break;

     case IN_CAR_BEGINS_TO_STOP:
      /* During 'CAR_BEGINS_TO_STOP': '<S1>:12' */
      /* '<S1>:31:1' sf_internal_predicateOutput = ... */
      /* '<S1>:31:1' after(1,sec); */
      if (rtDW.temporalCounter_i1 >= 10U) {
        /* Transition: '<S1>:31' */
        rtDW.is_c3_Chart = IN_CAR_STOPS_COMPLETELY;

        /* Outport: '<Root>/driver_response' */
        /* Entry 'CAR_STOPS_COMPLETELY': '<S1>:34' */
        /* '<S1>:34:1' driver_response=0; */
        rtY.driver_response = 0.0;
      }
      break;

     case IN_CAR_MOVES:
      /* During 'CAR_MOVES': '<S1>:33' */
      break;

     case IN_CAR_STOPS_COMPLETELY:
      /* During 'CAR_STOPS_COMPLETELY': '<S1>:34' */
      break;

     case IN_GREEN:
      /* During 'GREEN': '<S1>:3' */
      /* '<S1>:28:1' sf_internal_predicateOutput = ... */
      /* '<S1>:28:1' after(1,sec); */
      if (rtDW.temporalCounter_i1 >= 10U) {
        /* Transition: '<S1>:28' */
        rtDW.is_c3_Chart = IN_CAR_BEGINS_TO_MOVE;
        rtDW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/driver_response' */
        /* Entry 'CAR_BEGINS_TO_MOVE': '<S1>:32' */
        /* '<S1>:32:1' driver_response=0.5; */
        rtY.driver_response = 0.5;
      }
      break;

     case IN_RED:
      /* During 'RED': '<S1>:5' */
      /* '<S1>:30:1' sf_internal_predicateOutput = ... */
      /* '<S1>:30:1' after(1,sec); */
      if (rtDW.temporalCounter_i1 >= 10U) {
        /* Transition: '<S1>:30' */
        rtDW.is_c3_Chart = IN_CAR_BEGINS_TO_STOP;
        rtDW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/driver_response' */
        /* Entry 'CAR_BEGINS_TO_STOP': '<S1>:12' */
        /* '<S1>:12:1' driver_response=0.5 */
        rtY.driver_response = 0.5;
      }
      break;

     case IN_START:
      /* During 'START': '<S1>:1' */
      /* '<S1>:6:1' sf_internal_predicateOutput = ... */
      /* '<S1>:6:1' z==1; */
      if (rtU.z == 1.0) {
        /* Transition: '<S1>:6' */
        rtDW.is_c3_Chart = IN_GREEN;
        rtDW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/driver_response' */
        /* Entry 'GREEN': '<S1>:3' */
        /* '<S1>:3:1' driver_response=0 */
        rtY.driver_response = 0.0;
      } else {
        /* '<S1>:8:1' sf_internal_predicateOutput = ... */
        /* '<S1>:8:1' z==2; */
        if (rtU.z == 2.0) {
          /* Transition: '<S1>:8' */
          rtDW.is_c3_Chart = IN_YELLOW;

          /* Outport: '<Root>/driver_response' */
          /* Entry 'YELLOW': '<S1>:4' */
          /* '<S1>:4:1' driver_response=0 */
          rtY.driver_response = 0.0;
        } else {
          /* '<S1>:9:1' sf_internal_predicateOutput = ... */
          /* '<S1>:9:1' z==3; */
          if (rtU.z == 3.0) {
            /* Transition: '<S1>:9' */
            rtDW.is_c3_Chart = IN_RED;
            rtDW.temporalCounter_i1 = 0U;

            /* Outport: '<Root>/driver_response' */
            /* Entry 'RED': '<S1>:5' */
            /* '<S1>:5:1' driver_response=1 */
            rtY.driver_response = 1.0;
          }
        }
      }
      break;

     default:
      /* During 'YELLOW': '<S1>:4' */
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void Chart_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
