#ifndef __c2_Image_h__
#define __c2_Image_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc2_ImageInstanceStruct
#define typedef_SFc2_ImageInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c2_sfEvent;
  boolean_T c2_doneDoubleBufferReInit;
  uint8_T c2_is_active_c2_Image;
  uint8_T c2_u[1440000];
  uint8_T c2_y[1440000];
  uint8_T c2_b_y[1440000];
  uint8_T c2_uv1[1440000];
  uint8_T c2_uv0[1440000];
  uint8_T c2_b_u[1440000];
  uint8_T (*c2_c_u)[1440000];
  uint8_T (*c2_c_y)[1440000];
} SFc2_ImageInstanceStruct;

#endif                                 /*typedef_SFc2_ImageInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c2_Image_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c2_Image_get_check_sum(mxArray *plhs[]);
extern void c2_Image_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
