/*
 * File: hamada.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 19-Jan-2020 11:36:18
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "hamada.h"

/* Function Definitions */

/*
 * Arguments    : const double arr[4]
 *                double *x
 *                double *y
 * Return Type  : void
 */
void hamada(const double arr[4], double *x, double *y)
{
  int ixstart;
  double mtmp;
  int ix;
  boolean_T exitg2;
  boolean_T exitg1;
  ixstart = 1;
  mtmp = arr[0];
  if (rtIsNaN(arr[0])) {
    ix = 2;
    exitg2 = false;
    while ((!exitg2) && (ix < 5)) {
      ixstart = ix;
      if (!rtIsNaN(arr[ix - 1])) {
        mtmp = arr[ix - 1];
        exitg2 = true;
      } else {
        ix++;
      }
    }
  }

  if (ixstart < 4) {
    while (ixstart + 1 < 5) {
      if (arr[ixstart] > mtmp) {
        mtmp = arr[ixstart];
      }

      ixstart++;
    }
  }

  *x = mtmp;
  ixstart = 1;
  mtmp = arr[0];
  if (rtIsNaN(arr[0])) {
    ix = 2;
    exitg1 = false;
    while ((!exitg1) && (ix < 5)) {
      ixstart = ix;
      if (!rtIsNaN(arr[ix - 1])) {
        mtmp = arr[ix - 1];
        exitg1 = true;
      } else {
        ix++;
      }
    }
  }

  if (ixstart < 4) {
    while (ixstart + 1 < 5) {
      if (arr[ixstart] < mtmp) {
        mtmp = arr[ixstart];
      }

      ixstart++;
    }
  }

  *y = mtmp;
}

/*
 * File trailer for hamada.c
 *
 * [EOF]
 */
