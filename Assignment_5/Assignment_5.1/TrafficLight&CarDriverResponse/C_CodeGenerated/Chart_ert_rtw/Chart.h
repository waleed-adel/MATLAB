/*
 * File: Chart.h
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

#ifndef RTW_HEADER_Chart_h_
#define RTW_HEADER_Chart_h_
#ifndef Chart_COMMON_INCLUDES_
# define Chart_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Chart_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Block signals and states (auto storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c3_Chart;          /* '<Root>/Chart' */
  uint8_T is_c3_Chart;                 /* '<Root>/Chart' */
  uint8_T temporalCounter_i1;          /* '<Root>/Chart' */
} DW;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T z;                            /* '<Root>/z' */
} ExtU;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T driver_response;              /* '<Root>/driver_response' */
} ExtY;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T * volatile errorStatus;
};

/* Block signals and states (auto storage) */
extern DW rtDW;

/* External inputs (root inport signals with auto storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void Chart_initialize(void);
extern void Chart_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('TrafficLight_SFD/Chart')    - opens subsystem TrafficLight_SFD/Chart
 * hilite_system('TrafficLight_SFD/Chart/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'TrafficLight_SFD'
 * '<S1>'   : 'TrafficLight_SFD/Chart'
 */
#endif                                 /* RTW_HEADER_Chart_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
