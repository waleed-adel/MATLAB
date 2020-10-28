/*
 * File: _coder_hamada_api.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 19-Jan-2020 11:36:18
 */

#ifndef _CODER_HAMADA_API_H
#define _CODER_HAMADA_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_hamada_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void hamada(real_T arr[4], real_T *x, real_T *y);
extern void hamada_api(const mxArray *prhs[1], const mxArray *plhs[2]);
extern void hamada_atexit(void);
extern void hamada_initialize(void);
extern void hamada_terminate(void);
extern void hamada_xil_terminate(void);

#endif

/*
 * File trailer for _coder_hamada_api.h
 *
 * [EOF]
 */
