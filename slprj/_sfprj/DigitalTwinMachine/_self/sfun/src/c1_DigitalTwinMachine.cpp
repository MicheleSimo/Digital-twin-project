/* Include files */

#include "DigitalTwinMachine_sfun.h"
#include "c1_DigitalTwinMachine.h"
#include <math.h>
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
const int32_T CALL_EVENT = -1;

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c1_emlrtMCI = { 158,/* lineNo */
  17,                                  /* colNo */
  "eml_rand_mt19937ar",                /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/eml/lib/matlab/randfun/eml_rand_mt19937ar.m"/* pName */
};

static emlrtRSInfo c1_emlrtRSI = { 4,  /* lineNo */
  "create_mat",                        /* fcnName */
  "/Users/salvatorecapuozzo/Digital-twin-project/create_mat.m"/* pathName */
};

static emlrtRSInfo c1_b_emlrtRSI = { 5,/* lineNo */
  "create_mat",                        /* fcnName */
  "/Users/salvatorecapuozzo/Digital-twin-project/create_mat.m"/* pathName */
};

static emlrtRSInfo c1_c_emlrtRSI = { 9,/* lineNo */
  "create_mat",                        /* fcnName */
  "/Users/salvatorecapuozzo/Digital-twin-project/create_mat.m"/* pathName */
};

static emlrtRSInfo c1_d_emlrtRSI = { 10,/* lineNo */
  "create_mat",                        /* fcnName */
  "/Users/salvatorecapuozzo/Digital-twin-project/create_mat.m"/* pathName */
};

static emlrtRSInfo c1_e_emlrtRSI = { 74,/* lineNo */
  "randi",                             /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/eml/lib/matlab/randfun/randi.m"/* pathName */
};

static emlrtRSInfo c1_f_emlrtRSI = { 107,/* lineNo */
  "rand",                              /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/eml/lib/matlab/randfun/rand.m"/* pathName */
};

static emlrtRSInfo c1_g_emlrtRSI = { 45,/* lineNo */
  "eml_rand",                          /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/eml/lib/matlab/randfun/private/eml_rand.m"/* pathName */
};

static emlrtRSInfo c1_h_emlrtRSI = { 23,/* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/eml/lib/matlab/randfun/private/eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo c1_i_emlrtRSI = { 51,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/eml/lib/matlab/randfun/eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c1_j_emlrtRSI = { 6,/* lineNo */
  "MATLAB Function1",                  /* fcnName */
  "#DigitalTwinMachine:645"            /* pathName */
};

static emlrtECInfo c1_emlrtECI = { -1, /* nDims */
  4,                                   /* lineNo */
  5,                                   /* colNo */
  "MATLAB Function1",                  /* fName */
  "#DigitalTwinMachine:645"            /* pName */
};

static emlrtDCInfo c1_emlrtDCI = { 25, /* lineNo */
  21,                                  /* colNo */
  "create_mat",                        /* fName */
  "/Users/salvatorecapuozzo/Digital-twin-project/create_mat.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_emlrtBCI = { 1,  /* iFirst */
  100,                                 /* iLast */
  25,                                  /* lineNo */
  21,                                  /* colNo */
  "mat",                               /* aName */
  "create_mat",                        /* fName */
  "/Users/salvatorecapuozzo/Digital-twin-project/create_mat.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_b_emlrtDCI = { 25,/* lineNo */
  23,                                  /* colNo */
  "create_mat",                        /* fName */
  "/Users/salvatorecapuozzo/Digital-twin-project/create_mat.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_b_emlrtBCI = { 1,/* iFirst */
  100,                                 /* iLast */
  25,                                  /* lineNo */
  23,                                  /* colNo */
  "mat",                               /* aName */
  "create_mat",                        /* fName */
  "/Users/salvatorecapuozzo/Digital-twin-project/create_mat.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_c_emlrtDCI = { 29,/* lineNo */
  13,                                  /* colNo */
  "create_mat",                        /* fName */
  "/Users/salvatorecapuozzo/Digital-twin-project/create_mat.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_c_emlrtBCI = { 1,/* iFirst */
  100,                                 /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "mat",                               /* aName */
  "create_mat",                        /* fName */
  "/Users/salvatorecapuozzo/Digital-twin-project/create_mat.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_d_emlrtDCI = { 29,/* lineNo */
  20,                                  /* colNo */
  "create_mat",                        /* fName */
  "/Users/salvatorecapuozzo/Digital-twin-project/create_mat.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_d_emlrtBCI = { 1,/* iFirst */
  100,                                 /* iLast */
  29,                                  /* lineNo */
  20,                                  /* colNo */
  "mat",                               /* aName */
  "create_mat",                        /* fName */
  "/Users/salvatorecapuozzo/Digital-twin-project/create_mat.m",/* pName */
  3                                    /* checkKind */
};

static emlrtRTEInfo c1_emlrtRTEI = { 12,/* lineNo */
  17,                                  /* colNo */
  "create_mat",                        /* fName */
  "/Users/salvatorecapuozzo/Digital-twin-project/create_mat.m"/* pName */
};

static emlrtRTEInfo c1_b_emlrtRTEI = { 14,/* lineNo */
  21,                                  /* colNo */
  "create_mat",                        /* fName */
  "/Users/salvatorecapuozzo/Digital-twin-project/create_mat.m"/* pName */
};

static emlrtBCInfo c1_e_emlrtBCI = { 0,/* iFirst */
  9999,                                /* iLast */
  4,                                   /* lineNo */
  25,                                  /* colNo */
  "mat",                               /* aName */
  "MATLAB Function1",                  /* fName */
  "#DigitalTwinMachine:645",           /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_e_emlrtDCI = { 4,/* lineNo */
  25,                                  /* colNo */
  "MATLAB Function1",                  /* fName */
  "#DigitalTwinMachine:645",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_f_emlrtBCI = { 0,/* iFirst */
  9999,                                /* iLast */
  4,                                   /* lineNo */
  5,                                   /* colNo */
  "mat",                               /* aName */
  "MATLAB Function1",                  /* fName */
  "#DigitalTwinMachine:645",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_f_emlrtDCI = { 4,/* lineNo */
  5,                                   /* colNo */
  "MATLAB Function1",                  /* fName */
  "#DigitalTwinMachine:645",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_g_emlrtBCI = { 1,/* iFirst */
  100,                                 /* iLast */
  8,                                   /* lineNo */
  19,                                  /* colNo */
  "mat",                               /* aName */
  "create_mat",                        /* fName */
  "/Users/salvatorecapuozzo/Digital-twin-project/create_mat.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_g_emlrtDCI = { 8,/* lineNo */
  19,                                  /* colNo */
  "create_mat",                        /* fName */
  "/Users/salvatorecapuozzo/Digital-twin-project/create_mat.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_h_emlrtBCI = { 1,/* iFirst */
  100,                                 /* iLast */
  8,                                   /* lineNo */
  26,                                  /* colNo */
  "mat",                               /* aName */
  "create_mat",                        /* fName */
  "/Users/salvatorecapuozzo/Digital-twin-project/create_mat.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_h_emlrtDCI = { 8,/* lineNo */
  26,                                  /* colNo */
  "create_mat",                        /* fName */
  "/Users/salvatorecapuozzo/Digital-twin-project/create_mat.m",/* pName */
  1                                    /* checkKind */
};

/* Function Declarations */
static void initialize_c1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance);
static void initialize_params_c1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance);
static void mdl_start_c1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance);
static void mdl_terminate_c1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance);
static void enable_c1_DigitalTwinMachine(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance);
static void disable_c1_DigitalTwinMachine(SFc1_DigitalTwinMachineInstanceStruct *
  chartInstance);
static void sf_gateway_c1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance);
static void ext_mode_exec_c1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance);
static void c1_update_jit_animation_c1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance);
static void c1_do_animation_call_c1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance);
static void set_sim_state_c1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance, const mxArray *c1_st);
static void initSimStructsc1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance);
static void initSubchartIOPointersc1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance);
static real_T c1_rand(SFc1_DigitalTwinMachineInstanceStruct *chartInstance,
                      const emlrtStack *c1_sp);
static void c1_emlrt_marshallIn(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier, real_T
  c1_y[10000]);
static void c1_b_emlrt_marshallIn(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  real_T c1_y[10000]);
static real_T c1_c_emlrt_marshallIn(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier);
static real_T c1_d_emlrt_marshallIn(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static uint32_T c1_e_emlrt_marshallIn(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier,
  boolean_T *c1_svPtr);
static uint32_T c1_f_emlrt_marshallIn(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T *c1_svPtr);
static void c1_g_emlrt_marshallIn(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier,
  boolean_T *c1_svPtr, uint32_T c1_y[625]);
static void c1_h_emlrt_marshallIn(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T *c1_svPtr, uint32_T c1_y[625]);
static void c1_i_emlrt_marshallIn(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier,
  boolean_T *c1_svPtr, uint32_T c1_y[2]);
static void c1_j_emlrt_marshallIn(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T *c1_svPtr, uint32_T c1_y[2]);
static uint8_T c1_k_emlrt_marshallIn(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier);
static uint8_T c1_m_emlrt_marshallIn(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_slStringInitializeDynamicBuffers
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance);
static void c1_chart_data_browse_helper(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, int32_T c1_ssIdNumber, const mxArray **c1_mxData, uint8_T
  *c1_isValueTooBig);
static int32_T c1__s32_minus__(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, int32_T c1_b, int32_T c1_c, int32_T c1_EMLOvCount_src_loc,
  uint32_T c1_ssid_src_loc, int32_T c1_offset_src_loc, int32_T c1_length_src_loc);
static void init_dsm_address_info(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance)
{
  sf_is_first_init_cond(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c1_method_not_empty = false;
  chartInstance->c1_state_not_empty = false;
  chartInstance->c1_b_state_not_empty = false;
  chartInstance->c1_c_state_not_empty = false;
  chartInstance->c1_doneDoubleBufferReInit = false;
  chartInstance->c1_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void initialize_params_c1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance)
{
}

static void mdl_start_c1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance)
{
}

static void mdl_setup_runtime_resources_c1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance)
{
  static const uint32_T c1_decisionTxtEndIdx = 0U;
  static const uint32_T c1_decisionTxtStartIdx = 0U;
  sfSetAnimationVectors(chartInstance->S, chartInstance->c1_JITStateAnimation,
                        chartInstance->c1_JITTransitionAnimation);
  setDataBrowseFcn(chartInstance->S, (void *)&c1_chart_data_browse_helper);
  chartInstance->c1_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c1_RuntimeVar,
    &chartInstance->c1_IsDebuggerActive,
    &chartInstance->c1_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c1_mlFcnLineNumber, &chartInstance->c1_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c1_covrtInstance, 1U, 0U, 1U,
    68U);
  covrtChartInitFcn(chartInstance->c1_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c1_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c1_decisionTxtStartIdx, &c1_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 4U, 0U, 1U, 0U, 1U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 351);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 177, 202, -1,
                    265, false);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 180,
    202, -1, 0U);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance,
                  "/Users/salvatorecapuozzo/Digital-twin-project/create_mat.m",
                  14U, 0U, 1U, 0U, 4U, 0U, 0U, 0U, 3U, 1U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c1_covrtInstance, 14U, 0U, 0U, "create_mat",
                     0, -1, 825);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 14U, 0U, 0U, 429, 437, 481,
                    524, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 14U, 0U, 1U, 481, 496, 560,
                    674, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 14U, 0U, 2U, 560, 568, 612,
                    655, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 14U, 0U, 3U, 612, 627, 757,
                    758, false);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 14U, 0U, 0U, 84, 103, 816);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 14U, 0U, 1U, 312, 345, 770);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 14U, 0U, 2U, 379, 412, 758);
  covrtEmlWhileInitFcn(chartInstance->c1_covrtInstance, 14U, 0U, 0U, 182, 218,
                       303);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 14U, 0U, 0U, 432,
    437, -1, 2U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 14U, 0U, 1U, 488,
    496, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 14U, 0U, 2U, 563,
    568, -1, 2U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 14U, 0U, 3U, 619,
    627, -1, 4U);
}

static void mdl_cleanup_runtime_resources_c1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c1_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c1_covrtInstance);
}

static void enable_c1_DigitalTwinMachine(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c1_DigitalTwinMachine(SFc1_DigitalTwinMachineInstanceStruct *
  chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance)
{
  coder::array<real_T, 1U> c1_r;
  emlrtStack c1_b_st;
  emlrtStack c1_c_st;
  emlrtStack c1_d_st;
  emlrtStack c1_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T c1_c_mat[10000];
  real_T c1_a;
  real_T c1_b;
  real_T c1_b_a;
  real_T c1_b_b;
  real_T c1_b_d1;
  real_T c1_b_j;
  real_T c1_b_k;
  real_T c1_b_r;
  real_T c1_b_rate_decr;
  real_T c1_b_roundFloatVar;
  real_T c1_b_t_interval;
  real_T c1_b_x;
  real_T c1_b_y;
  real_T c1_c_r;
  real_T c1_c_rate_decr;
  real_T c1_c_t;
  real_T c1_c_x;
  real_T c1_c_y;
  real_T c1_d;
  real_T c1_d10;
  real_T c1_d11;
  real_T c1_d12;
  real_T c1_d2;
  real_T c1_d3;
  real_T c1_d4;
  real_T c1_d5;
  real_T c1_d6;
  real_T c1_d7;
  real_T c1_d8;
  real_T c1_d9;
  real_T c1_d_x;
  real_T c1_d_y;
  real_T c1_e_x;
  real_T c1_e_y;
  real_T c1_f_x;
  real_T c1_f_y;
  real_T c1_g_x;
  real_T c1_g_y;
  real_T c1_h_x;
  real_T c1_h_y;
  real_T c1_i_x;
  real_T c1_j_x;
  real_T c1_k_x;
  real_T c1_m_x;
  real_T c1_rand_1;
  real_T c1_rand_2;
  real_T c1_roundFloatVar;
  real_T c1_x;
  real_T c1_y;
  int32_T c1_tmp_data[10000];
  int32_T c1_tmp_size[1];
  int32_T c1_b_end;
  int32_T c1_b_fixedVar;
  int32_T c1_b_i;
  int32_T c1_b_partialTrueCount;
  int32_T c1_b_trueCount;
  int32_T c1_c_i;
  int32_T c1_d_i;
  int32_T c1_e_i;
  int32_T c1_end;
  int32_T c1_exitg1;
  int32_T c1_f_I;
  int32_T c1_fixedVar;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_i12;
  int32_T c1_i13;
  int32_T c1_i14;
  int32_T c1_i15;
  int32_T c1_i16;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_j;
  int32_T c1_k;
  int32_T c1_loop_ub;
  int32_T c1_partialTrueCount;
  int32_T c1_trueCount;
  int8_T c1_b_num_gocce;
  int8_T c1_c_num_gocce;
  int8_T c1_d_num_gocce;
  c1_st.tls = chartInstance->c1_fEmlrtCtx;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_c_st.prev = &c1_b_st;
  c1_c_st.tls = c1_b_st.tls;
  c1_d_st.prev = &c1_c_st;
  c1_d_st.tls = c1_c_st.tls;
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 4U, *chartInstance->c1_t);
  for (c1_i = 0; c1_i < 10000; c1_i++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 3U,
                      (*chartInstance->c1_mat)[c1_i]);
  }

  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 2U, static_cast<real_T>
                    (*chartInstance->c1_num_gocce));
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 1U,
                    *chartInstance->c1_t_interval);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 0U,
                    *chartInstance->c1_rate_decr);
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c1_JITTransitionAnimation[0] = 0U;
  chartInstance->c1_sfEvent = CALL_EVENT;
  c1_b_rate_decr = *chartInstance->c1_rate_decr;
  c1_b_t_interval = *chartInstance->c1_t_interval;
  c1_b_num_gocce = *chartInstance->c1_num_gocce;
  c1_c_t = *chartInstance->c1_t;
  c1_d = c1_c_t;
  for (c1_i1 = 0; c1_i1 < 10000; c1_i1++) {
    c1_c_mat[c1_i1] = (*chartInstance->c1_mat)[c1_i1];
  }

  covrtEmlFcnEval(chartInstance->c1_covrtInstance, 4U, 0, 0);
  c1_end = 10000;
  c1_trueCount = 0;
  for (c1_b_i = 0; c1_b_i < c1_end; c1_b_i++) {
    if ((*chartInstance->c1_mat)[c1_b_i] != 0.0) {
      c1_trueCount++;
    }
  }

  c1_tmp_size[0] = c1_trueCount;
  c1_partialTrueCount = 0;
  for (c1_c_i = 0; c1_c_i < c1_end; c1_c_i++) {
    if ((*chartInstance->c1_mat)[c1_c_i] != 0.0) {
      c1_tmp_data[c1_partialTrueCount] = c1_c_i;
      c1_partialTrueCount++;
    }
  }

  c1_b_end = 10000;
  c1_b_trueCount = 0;
  for (c1_d_i = 0; c1_d_i < c1_b_end; c1_d_i++) {
    if ((*chartInstance->c1_mat)[c1_d_i] != 0.0) {
      c1_b_trueCount++;
    }
  }

  c1_r.set_size(static_cast<emlrtRTEInfo *>(NULL), &c1_st, c1_b_trueCount);
  c1_b_partialTrueCount = 0;
  for (c1_e_i = 0; c1_e_i < c1_b_end; c1_e_i++) {
    if ((*chartInstance->c1_mat)[c1_e_i] != 0.0) {
      c1_b_d1 = static_cast<real_T>(c1_e_i);
      if (c1_b_d1 != static_cast<real_T>(static_cast<int32_T>
           (muDoubleScalarFloor(c1_b_d1)))) {
        emlrtIntegerCheckR2012b(c1_b_d1, &c1_e_emlrtDCI, &c1_st);
      }

      c1_i3 = static_cast<int32_T>(muDoubleScalarFloor(c1_b_d1));
      if ((c1_i3 < 0) || (c1_i3 > 9999)) {
        emlrtDynamicBoundsCheckR2012b(c1_i3, 0, 9999, &c1_e_emlrtBCI, &c1_st);
      }

      c1_r[c1_b_partialTrueCount] = (*chartInstance->c1_mat)[c1_i3];
      c1_b_partialTrueCount++;
    }
  }

  c1_i2 = c1_r.size(0);
  if (c1_tmp_size[0] != c1_i2) {
    emlrtSubAssignSizeCheck1dR2017a(c1_tmp_size[0], c1_i2, &c1_emlrtECI, &c1_st);
  }

  c1_c_rate_decr = c1_b_rate_decr * 255.0;
  c1_loop_ub = c1_r.size(0) - 1;
  for (c1_i4 = 0; c1_i4 <= c1_loop_ub; c1_i4++) {
    c1_d2 = static_cast<real_T>(c1_tmp_data[c1_i4]);
    if (c1_d2 != static_cast<real_T>(static_cast<int32_T>(muDoubleScalarFloor
          (c1_d2)))) {
      emlrtIntegerCheckR2012b(c1_d2, &c1_f_emlrtDCI, &c1_st);
    }

    c1_i5 = static_cast<int32_T>(muDoubleScalarFloor(c1_d2));
    if ((c1_i5 < 0) || (c1_i5 > 9999)) {
      emlrtDynamicBoundsCheckR2012b(c1_i5, 0, 9999, &c1_f_emlrtBCI, &c1_st);
    }

    c1_c_mat[c1_i5] = c1_r[c1_i4] - c1_c_rate_decr;
  }

  c1_x = c1_d;
  c1_y = c1_b_t_interval;
  c1_a = c1_x;
  c1_b = c1_y;
  c1_b_x = c1_a;
  c1_b_y = c1_b;
  c1_b_r = muDoubleScalarRem(c1_b_x, c1_b_y);
  c1_c_x = c1_d;
  c1_c_y = c1_b_t_interval;
  c1_b_a = c1_c_x;
  c1_b_b = c1_c_y;
  c1_d_x = c1_b_a;
  c1_d_y = c1_b_b;
  c1_c_r = muDoubleScalarRem(c1_d_x, c1_d_y);
  if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 0,
                     covrtRelationalopUpdateFcn(chartInstance->c1_covrtInstance,
        4U, 0U, 0U, c1_b_r, 0.0, -1, 0U, static_cast<int32_T>(c1_c_r == 0.0))))
  {
    c1_b_st.site = &c1_j_emlrtRSI;
    c1_c_num_gocce = c1_b_num_gocce;
    covrtEmlFcnEval(chartInstance->c1_covrtInstance, 14U, 0, 0);
    c1_d_num_gocce = c1_c_num_gocce;
    c1_i7 = c1_d_num_gocce;
    for (c1_f_I = 0; c1_f_I <= c1__s32_minus__(chartInstance, c1_i7, 1, 0, 1U,
          217, 39); c1_f_I++) {
      covrtEmlForEval(chartInstance->c1_covrtInstance, 14U, 0, 0, 1);
      c1_c_st.site = &c1_emlrtRSI;
      c1_d_st.site = &c1_e_emlrtRSI;
      c1_rand_1 = c1_rand(chartInstance, &c1_d_st);
      c1_e_x = c1_rand_1 * 99.0;
      c1_f_x = c1_e_x;
      c1_e_y = c1_f_x;
      c1_e_y = muDoubleScalarFloor(c1_e_y);
      c1_rand_1 = 1.0 + c1_e_y;
      c1_c_st.site = &c1_b_emlrtRSI;
      c1_d_st.site = &c1_e_emlrtRSI;
      c1_rand_2 = c1_rand(chartInstance, &c1_d_st);
      c1_g_x = c1_rand_2 * 99.0;
      c1_h_x = c1_g_x;
      c1_f_y = c1_h_x;
      c1_f_y = muDoubleScalarFloor(c1_f_y);
      c1_rand_2 = 1.0 + c1_f_y;
      do {
        c1_exitg1 = 0;
        if (c1_rand_1 != static_cast<real_T>(static_cast<int32_T>
             (muDoubleScalarFloor(c1_rand_1)))) {
          emlrtIntegerCheckR2012b(c1_rand_1, &c1_g_emlrtDCI, &c1_b_st);
        }

        c1_i9 = static_cast<int32_T>(c1_rand_1);
        if ((c1_i9 < 1) || (c1_i9 > 100)) {
          emlrtDynamicBoundsCheckR2012b(c1_i9, 1, 100, &c1_g_emlrtBCI, &c1_b_st);
        }

        if (c1_rand_2 != static_cast<real_T>(static_cast<int32_T>
             (muDoubleScalarFloor(c1_rand_2)))) {
          emlrtIntegerCheckR2012b(c1_rand_2, &c1_h_emlrtDCI, &c1_b_st);
        }

        c1_i10 = static_cast<int32_T>(c1_rand_2);
        if ((c1_i10 < 1) || (c1_i10 > 100)) {
          emlrtDynamicBoundsCheckR2012b(c1_i10, 1, 100, &c1_h_emlrtBCI, &c1_b_st);
        }

        if (covrtEmlWhileEval(chartInstance->c1_covrtInstance, 14U, 0, 0,
                              c1_c_mat[c1__s32_minus__(chartInstance, c1_i9, 1,
              0, 1U, 217, 39) + 100 * c1__s32_minus__(chartInstance, c1_i10, 1,
              0, 1U, 217, 39)] > 127.5)) {
          c1_c_st.site = &c1_c_emlrtRSI;
          c1_d_st.site = &c1_e_emlrtRSI;
          c1_rand_1 = c1_rand(chartInstance, &c1_d_st);
          c1_i_x = c1_rand_1 * 99.0;
          c1_j_x = c1_i_x;
          c1_g_y = c1_j_x;
          c1_g_y = muDoubleScalarFloor(c1_g_y);
          c1_rand_1 = 1.0 + c1_g_y;
          c1_c_st.site = &c1_d_emlrtRSI;
          c1_d_st.site = &c1_e_emlrtRSI;
          c1_rand_2 = c1_rand(chartInstance, &c1_d_st);
          c1_k_x = c1_rand_2 * 99.0;
          c1_m_x = c1_k_x;
          c1_h_y = c1_m_x;
          c1_h_y = muDoubleScalarFloor(c1_h_y);
          c1_rand_2 = 1.0 + c1_h_y;
          _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
        } else {
          c1_exitg1 = 1;
        }
      } while (c1_exitg1 == 0);

      c1_d3 = c1_rand_1 - 1.0;
      c1_d4 = c1_rand_1 + 1.0;
      c1_d5 = trunc(c1_d4 + (1.0 - c1_d3));
      if (muDoubleScalarIsNaN(c1_d5) || muDoubleScalarIsInf(c1_d5)) {
        c1_d6 = 0.0;
      } else {
        c1_d6 = muDoubleScalarRem(c1_d5, 4.294967296E+9);
      }

      c1_roundFloatVar = trunc(c1_d4 + (1.0 - c1_d3));
      if (c1_d6 < 0.0) {
        c1_fixedVar = -static_cast<int32_T>(static_cast<uint32_T>(-c1_d6));
      } else {
        c1_fixedVar = static_cast<int32_T>(static_cast<uint32_T>(c1_d6));
      }

      if (c1_roundFloatVar < 0.0) {
        c1_d7 = muDoubleScalarCeil(c1_roundFloatVar);
      } else {
        c1_d7 = muDoubleScalarFloor(c1_roundFloatVar);
      }

      if (static_cast<real_T>(c1_fixedVar) != c1_d7) {
        sf_data_overflow_error(chartInstance->S, 1U, 217, 39);
      }

      c1_i11 = c1_fixedVar;
      emlrtForLoopVectorCheckR2021a(c1_d3, 1.0, c1_d4, mxDOUBLE_CLASS, c1_i11,
        &c1_emlrtRTEI, &c1_b_st);
      for (c1_j = 0; c1_j <= c1__s32_minus__(chartInstance, c1_i11, 1, 0, 1U,
            217, 39); c1_j++) {
        c1_b_j = c1_d3 + static_cast<real_T>(c1_j);
        covrtEmlForEval(chartInstance->c1_covrtInstance, 14U, 0, 1, 1);
        c1_d8 = c1_rand_2 - 1.0;
        c1_d9 = c1_rand_2 + 1.0;
        c1_d10 = trunc(c1_d9 + (1.0 - c1_d8));
        if (muDoubleScalarIsNaN(c1_d10) || muDoubleScalarIsInf(c1_d10)) {
          c1_d11 = 0.0;
        } else {
          c1_d11 = muDoubleScalarRem(c1_d10, 4.294967296E+9);
        }

        c1_b_roundFloatVar = trunc(c1_d9 + (1.0 - c1_d8));
        if (c1_d11 < 0.0) {
          c1_b_fixedVar = -static_cast<int32_T>(static_cast<uint32_T>(-c1_d11));
        } else {
          c1_b_fixedVar = static_cast<int32_T>(static_cast<uint32_T>(c1_d11));
        }

        if (c1_b_roundFloatVar < 0.0) {
          c1_d12 = muDoubleScalarCeil(c1_b_roundFloatVar);
        } else {
          c1_d12 = muDoubleScalarFloor(c1_b_roundFloatVar);
        }

        if (static_cast<real_T>(c1_b_fixedVar) != c1_d12) {
          sf_data_overflow_error(chartInstance->S, 1U, 217, 39);
        }

        c1_i14 = c1_b_fixedVar;
        emlrtForLoopVectorCheckR2021a(c1_d8, 1.0, c1_d9, mxDOUBLE_CLASS, c1_i14,
          &c1_b_emlrtRTEI, &c1_b_st);
        for (c1_k = 0; c1_k <= c1__s32_minus__(chartInstance, c1_i14, 1, 0, 1U,
              217, 39); c1_k++) {
          c1_b_k = c1_d8 + static_cast<real_T>(c1_k);
          covrtEmlForEval(chartInstance->c1_covrtInstance, 14U, 0, 2, 1);
          if ((!covrtEmlIfEval(chartInstance->c1_covrtInstance, 14U, 0, 0,
                               covrtRelationalopUpdateFcn
                               (chartInstance->c1_covrtInstance, 14U, 0U, 0U,
                                c1_b_j, 1.0, -1, 2U, static_cast<int32_T>(c1_b_j
                  < 1.0)))) && (!covrtEmlIfEval(chartInstance->c1_covrtInstance,
                14U, 0, 1, covrtRelationalopUpdateFcn
                (chartInstance->c1_covrtInstance, 14U, 0U, 1U, c1_b_j, 100.0, -1,
                 4U, static_cast<int32_T>(c1_b_j > 100.0)))) && (!covrtEmlIfEval
               (chartInstance->c1_covrtInstance, 14U, 0, 2,
                covrtRelationalopUpdateFcn(chartInstance->c1_covrtInstance, 14U,
                 0U, 2U, c1_b_k, 1.0, -1, 2U, static_cast<int32_T>(c1_b_k < 1.0))))
              && (!covrtEmlIfEval(chartInstance->c1_covrtInstance, 14U, 0, 3,
                                  covrtRelationalopUpdateFcn
                                  (chartInstance->c1_covrtInstance, 14U, 0U, 3U,
                 c1_b_k, 100.0, -1, 4U, static_cast<int32_T>(c1_b_k > 100.0)))))
          {
            if (c1_b_j != static_cast<real_T>(static_cast<int32_T>
                 (muDoubleScalarFloor(c1_b_j)))) {
              emlrtIntegerCheckR2012b(c1_b_j, &c1_emlrtDCI, &c1_b_st);
            }

            c1_i15 = static_cast<int32_T>(c1_b_j);
            if ((c1_i15 < 1) || (c1_i15 > 100)) {
              emlrtDynamicBoundsCheckR2012b(c1_i15, 1, 100, &c1_emlrtBCI,
                &c1_b_st);
            }

            if (c1_b_k != static_cast<real_T>(static_cast<int32_T>
                 (muDoubleScalarFloor(c1_b_k)))) {
              emlrtIntegerCheckR2012b(c1_b_k, &c1_b_emlrtDCI, &c1_b_st);
            }

            c1_i16 = static_cast<int32_T>(c1_b_k);
            if ((c1_i16 < 1) || (c1_i16 > 100)) {
              emlrtDynamicBoundsCheckR2012b(c1_i16, 1, 100, &c1_b_emlrtBCI,
                &c1_b_st);
            }

            c1_c_mat[c1__s32_minus__(chartInstance, c1_i15, 1, 0, 1U, 217, 39) +
              100 * c1__s32_minus__(chartInstance, c1_i16, 1, 0, 1U, 217, 39)] =
              127.5;
          }

          _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
        }

        covrtEmlForEval(chartInstance->c1_covrtInstance, 14U, 0, 2, 0);
        _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
      }

      covrtEmlForEval(chartInstance->c1_covrtInstance, 14U, 0, 1, 0);
      if (c1_rand_1 != static_cast<real_T>(static_cast<int32_T>
           (muDoubleScalarFloor(c1_rand_1)))) {
        emlrtIntegerCheckR2012b(c1_rand_1, &c1_c_emlrtDCI, &c1_b_st);
      }

      c1_i12 = static_cast<int32_T>(c1_rand_1);
      if ((c1_i12 < 1) || (c1_i12 > 100)) {
        emlrtDynamicBoundsCheckR2012b(c1_i12, 1, 100, &c1_c_emlrtBCI, &c1_b_st);
      }

      if (c1_rand_2 != static_cast<real_T>(static_cast<int32_T>
           (muDoubleScalarFloor(c1_rand_2)))) {
        emlrtIntegerCheckR2012b(c1_rand_2, &c1_d_emlrtDCI, &c1_b_st);
      }

      c1_i13 = static_cast<int32_T>(c1_rand_2);
      if ((c1_i13 < 1) || (c1_i13 > 100)) {
        emlrtDynamicBoundsCheckR2012b(c1_i13, 1, 100, &c1_d_emlrtBCI, &c1_b_st);
      }

      c1_c_mat[c1__s32_minus__(chartInstance, c1_i12, 1, 0, 1U, 217, 39) + 100 *
        c1__s32_minus__(chartInstance, c1_i13, 1, 0, 1U, 217, 39)] = 255.0;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c1_covrtInstance, 14U, 0, 0, 0);
  }

  c1_d++;
  *chartInstance->c1_b_t = c1_d;
  for (c1_i6 = 0; c1_i6 < 10000; c1_i6++) {
    (*chartInstance->c1_b_mat)[c1_i6] = c1_c_mat[c1_i6];
  }

  c1_do_animation_call_c1_DigitalTwinMachine(chartInstance);
  for (c1_i8 = 0; c1_i8 < 10000; c1_i8++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 5U,
                      (*chartInstance->c1_b_mat)[c1_i8]);
  }

  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 6U, *chartInstance->c1_b_t);
}

static void ext_mode_exec_c1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance)
{
}

static void c1_update_jit_animation_c1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance)
{
}

static void c1_do_animation_call_c1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance)
{
  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_e_y = NULL;
  const mxArray *c1_f_y = NULL;
  const mxArray *c1_g_y = NULL;
  const mxArray *c1_h_y = NULL;
  const mxArray *c1_st;
  const mxArray *c1_y = NULL;
  c1_st = NULL;
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellmatrix(7, 1), false);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", *chartInstance->c1_b_mat, 0, 0U, 1U,
    0U, 2, 100, 100), false);
  sf_mex_setcell(c1_y, 0, c1_b_y);
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", chartInstance->c1_b_t, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c1_y, 1, c1_c_y);
  c1_d_y = NULL;
  if (!chartInstance->c1_method_not_empty) {
    sf_mex_assign(&c1_d_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_d_y, sf_mex_create("y", &chartInstance->c1_method, 7, 0U,
      0U, 0U, 0), false);
  }

  sf_mex_setcell(c1_y, 2, c1_d_y);
  c1_e_y = NULL;
  if (!chartInstance->c1_method_not_empty) {
    sf_mex_assign(&c1_e_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_e_y, sf_mex_create("y", &chartInstance->c1_state, 7, 0U,
      0U, 0U, 0), false);
  }

  sf_mex_setcell(c1_y, 3, c1_e_y);
  c1_f_y = NULL;
  if (!chartInstance->c1_c_state_not_empty) {
    sf_mex_assign(&c1_f_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_f_y, sf_mex_create("y", chartInstance->c1_c_state, 7, 0U,
      1U, 0U, 1, 625), false);
  }

  sf_mex_setcell(c1_y, 4, c1_f_y);
  c1_g_y = NULL;
  if (!chartInstance->c1_b_state_not_empty) {
    sf_mex_assign(&c1_g_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_g_y, sf_mex_create("y", chartInstance->c1_b_state, 7, 0U,
      1U, 0U, 1, 2), false);
  }

  sf_mex_setcell(c1_y, 5, c1_g_y);
  c1_h_y = NULL;
  sf_mex_assign(&c1_h_y, sf_mex_create("y",
    &chartInstance->c1_is_active_c1_DigitalTwinMachine, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 6, c1_h_y);
  sf_mex_assign(&c1_st, c1_y, false);
  return c1_st;
}

static void set_sim_state_c1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance, const mxArray *c1_st)
{
  const mxArray *c1_u;
  real_T c1_dv[10000];
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  uint32_T c1_uv[625];
  uint32_T c1_uv1[2];
  chartInstance->c1_doneDoubleBufferReInit = true;
  c1_u = sf_mex_dup(c1_st);
  c1_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 0)), "mat",
                      c1_dv);
  for (c1_i = 0; c1_i < 10000; c1_i++) {
    (*chartInstance->c1_b_mat)[c1_i] = c1_dv[c1_i];
  }

  *chartInstance->c1_b_t = c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 1)), "t");
  chartInstance->c1_method = c1_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 2)), "method", &chartInstance->c1_method_not_empty);
  chartInstance->c1_state = c1_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 3)), "state", &chartInstance->c1_state_not_empty);
  c1_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 4)),
                        "state", &chartInstance->c1_c_state_not_empty, c1_uv);
  for (c1_i1 = 0; c1_i1 < 625; c1_i1++) {
    chartInstance->c1_c_state[c1_i1] = c1_uv[c1_i1];
  }

  c1_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 5)),
                        "state", &chartInstance->c1_b_state_not_empty, c1_uv1);
  for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
    chartInstance->c1_b_state[c1_i2] = c1_uv1[c1_i2];
  }

  chartInstance->c1_is_active_c1_DigitalTwinMachine = c1_k_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 6)),
     "is_active_c1_DigitalTwinMachine");
  sf_mex_destroy(&c1_u);
  sf_mex_destroy(&c1_st);
}

static void initSimStructsc1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance)
{
}

static void initSubchartIOPointersc1_DigitalTwinMachine
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance)
{
}

static real_T c1_rand(SFc1_DigitalTwinMachineInstanceStruct *chartInstance,
                      const emlrtStack *c1_sp)
{
  static uint32_T c1_uv[625] = { 5489U, 1301868182U, 2938499221U, 2950281878U,
    1875628136U, 751856242U, 944701696U, 2243192071U, 694061057U, 219885934U,
    2066767472U, 3182869408U, 485472502U, 2336857883U, 1071588843U, 3418470598U,
    951210697U, 3693558366U, 2923482051U, 1793174584U, 2982310801U, 1586906132U,
    1951078751U, 1808158765U, 1733897588U, 431328322U, 4202539044U, 530658942U,
    1714810322U, 3025256284U, 3342585396U, 1937033938U, 2640572511U, 1654299090U,
    3692403553U, 4233871309U, 3497650794U, 862629010U, 2943236032U, 2426458545U,
    1603307207U, 1133453895U, 3099196360U, 2208657629U, 2747653927U, 931059398U,
    761573964U, 3157853227U, 785880413U, 730313442U, 124945756U, 2937117055U,
    3295982469U, 1724353043U, 3021675344U, 3884886417U, 4010150098U, 4056961966U,
    699635835U, 2681338818U, 1339167484U, 720757518U, 2800161476U, 2376097373U,
    1532957371U, 3902664099U, 1238982754U, 3725394514U, 3449176889U, 3570962471U,
    4287636090U, 4087307012U, 3603343627U, 202242161U, 2995682783U, 1620962684U,
    3704723357U, 371613603U, 2814834333U, 2111005706U, 624778151U, 2094172212U,
    4284947003U, 1211977835U, 991917094U, 1570449747U, 2962370480U, 1259410321U,
    170182696U, 146300961U, 2836829791U, 619452428U, 2723670296U, 1881399711U,
    1161269684U, 1675188680U, 4132175277U, 780088327U, 3409462821U, 1036518241U,
    1834958505U, 3048448173U, 161811569U, 618488316U, 44795092U, 3918322701U,
    1924681712U, 3239478144U, 383254043U, 4042306580U, 2146983041U, 3992780527U,
    3518029708U, 3545545436U, 3901231469U, 1896136409U, 2028528556U, 2339662006U,
    501326714U, 2060962201U, 2502746480U, 561575027U, 581893337U, 3393774360U,
    1778912547U, 3626131687U, 2175155826U, 319853231U, 986875531U, 819755096U,
    2915734330U, 2688355739U, 3482074849U, 2736559U, 2296975761U, 1029741190U,
    2876812646U, 690154749U, 579200347U, 4027461746U, 1285330465U, 2701024045U,
    4117700889U, 759495121U, 3332270341U, 2313004527U, 2277067795U, 4131855432U,
    2722057515U, 1264804546U, 3848622725U, 2211267957U, 4100593547U, 959123777U,
    2130745407U, 3194437393U, 486673947U, 1377371204U, 17472727U, 352317554U,
    3955548058U, 159652094U, 1232063192U, 3835177280U, 49423123U, 3083993636U,
    733092U, 2120519771U, 2573409834U, 1112952433U, 3239502554U, 761045320U,
    1087580692U, 2540165110U, 641058802U, 1792435497U, 2261799288U, 1579184083U,
    627146892U, 2165744623U, 2200142389U, 2167590760U, 2381418376U, 1793358889U,
    3081659520U, 1663384067U, 2009658756U, 2689600308U, 739136266U, 2304581039U,
    3529067263U, 591360555U, 525209271U, 3131882996U, 294230224U, 2076220115U,
    3113580446U, 1245621585U, 1386885462U, 3203270426U, 123512128U, 12350217U,
    354956375U, 4282398238U, 3356876605U, 3888857667U, 157639694U, 2616064085U,
    1563068963U, 2762125883U, 4045394511U, 4180452559U, 3294769488U, 1684529556U,
    1002945951U, 3181438866U, 22506664U, 691783457U, 2685221343U, 171579916U,
    3878728600U, 2475806724U, 2030324028U, 3331164912U, 1708711359U, 1970023127U,
    2859691344U, 2588476477U, 2748146879U, 136111222U, 2967685492U, 909517429U,
    2835297809U, 3206906216U, 3186870716U, 341264097U, 2542035121U, 3353277068U,
    548223577U, 3170936588U, 1678403446U, 297435620U, 2337555430U, 466603495U,
    1132321815U, 1208589219U, 696392160U, 894244439U, 2562678859U, 470224582U,
    3306867480U, 201364898U, 2075966438U, 1767227936U, 2929737987U, 3674877796U,
    2654196643U, 3692734598U, 3528895099U, 2796780123U, 3048728353U, 842329300U,
    191554730U, 2922459673U, 3489020079U, 3979110629U, 1022523848U, 2202932467U,
    3583655201U, 3565113719U, 587085778U, 4176046313U, 3013713762U, 950944241U,
    396426791U, 3784844662U, 3477431613U, 3594592395U, 2782043838U, 3392093507U,
    3106564952U, 2829419931U, 1358665591U, 2206918825U, 3170783123U, 31522386U,
    2988194168U, 1782249537U, 1105080928U, 843500134U, 1225290080U, 1521001832U,
    3605886097U, 2802786495U, 2728923319U, 3996284304U, 903417639U, 1171249804U,
    1020374987U, 2824535874U, 423621996U, 1988534473U, 2493544470U, 1008604435U,
    1756003503U, 1488867287U, 1386808992U, 732088248U, 1780630732U, 2482101014U,
    976561178U, 1543448953U, 2602866064U, 2021139923U, 1952599828U, 2360242564U,
    2117959962U, 2753061860U, 2388623612U, 4138193781U, 2962920654U, 2284970429U,
    766920861U, 3457264692U, 2879611383U, 815055854U, 2332929068U, 1254853997U,
    3740375268U, 3799380844U, 4091048725U, 2006331129U, 1982546212U, 686850534U,
    1907447564U, 2682801776U, 2780821066U, 998290361U, 1342433871U, 4195430425U,
    607905174U, 3902331779U, 2454067926U, 1708133115U, 1170874362U, 2008609376U,
    3260320415U, 2211196135U, 433538229U, 2728786374U, 2189520818U, 262554063U,
    1182318347U, 3710237267U, 1221022450U, 715966018U, 2417068910U, 2591870721U,
    2870691989U, 3418190842U, 4238214053U, 1540704231U, 1575580968U, 2095917976U,
    4078310857U, 2313532447U, 2110690783U, 4056346629U, 4061784526U, 1123218514U,
    551538993U, 597148360U, 4120175196U, 3581618160U, 3181170517U, 422862282U,
    3227524138U, 1713114790U, 662317149U, 1230418732U, 928171837U, 1324564878U,
    1928816105U, 1786535431U, 2878099422U, 3290185549U, 539474248U, 1657512683U,
    552370646U, 1671741683U, 3655312128U, 1552739510U, 2605208763U, 1441755014U,
    181878989U, 3124053868U, 1447103986U, 3183906156U, 1728556020U, 3502241336U,
    3055466967U, 1013272474U, 818402132U, 1715099063U, 2900113506U, 397254517U,
    4194863039U, 1009068739U, 232864647U, 2540223708U, 2608288560U, 2415367765U,
    478404847U, 3455100648U, 3182600021U, 2115988978U, 434269567U, 4117179324U,
    3461774077U, 887256537U, 3545801025U, 286388911U, 3451742129U, 1981164769U,
    786667016U, 3310123729U, 3097811076U, 2224235657U, 2959658883U, 3370969234U,
    2514770915U, 3345656436U, 2677010851U, 2206236470U, 271648054U, 2342188545U,
    4292848611U, 3646533909U, 3754009956U, 3803931226U, 4160647125U, 1477814055U,
    4043852216U, 1876372354U, 3133294443U, 3871104810U, 3177020907U, 2074304428U,
    3479393793U, 759562891U, 164128153U, 1839069216U, 2114162633U, 3989947309U,
    3611054956U, 1333547922U, 835429831U, 494987340U, 171987910U, 1252001001U,
    370809172U, 3508925425U, 2535703112U, 1276855041U, 1922855120U, 835673414U,
    3030664304U, 613287117U, 171219893U, 3423096126U, 3376881639U, 2287770315U,
    1658692645U, 1262815245U, 3957234326U, 1168096164U, 2968737525U, 2655813712U,
    2132313144U, 3976047964U, 326516571U, 353088456U, 3679188938U, 3205649712U,
    2654036126U, 1249024881U, 880166166U, 691800469U, 2229503665U, 1673458056U,
    4032208375U, 1851778863U, 2563757330U, 376742205U, 1794655231U, 340247333U,
    1505873033U, 396524441U, 879666767U, 3335579166U, 3260764261U, 3335999539U,
    506221798U, 4214658741U, 975887814U, 2080536343U, 3360539560U, 571586418U,
    138896374U, 4234352651U, 2737620262U, 3928362291U, 1516365296U, 38056726U,
    3599462320U, 3585007266U, 3850961033U, 471667319U, 1536883193U, 2310166751U,
    1861637689U, 2530999841U, 4139843801U, 2710569485U, 827578615U, 2012334720U,
    2907369459U, 3029312804U, 2820112398U, 1965028045U, 35518606U, 2478379033U,
    643747771U, 1924139484U, 4123405127U, 3811735531U, 3429660832U, 3285177704U,
    1948416081U, 1311525291U, 1183517742U, 1739192232U, 3979815115U, 2567840007U,
    4116821529U, 213304419U, 4125718577U, 1473064925U, 2442436592U, 1893310111U,
    4195361916U, 3747569474U, 828465101U, 2991227658U, 750582866U, 1205170309U,
    1409813056U, 678418130U, 1171531016U, 3821236156U, 354504587U, 4202874632U,
    3882511497U, 1893248677U, 1903078632U, 26340130U, 2069166240U, 3657122492U,
    3725758099U, 831344905U, 811453383U, 3447711422U, 2434543565U, 4166886888U,
    3358210805U, 4142984013U, 2988152326U, 3527824853U, 982082992U, 2809155763U,
    190157081U, 3340214818U, 2365432395U, 2548636180U, 2894533366U, 3474657421U,
    2372634704U, 2845748389U, 43024175U, 2774226648U, 1987702864U, 3186502468U,
    453610222U, 4204736567U, 1392892630U, 2471323686U, 2470534280U, 3541393095U,
    4269885866U, 3909911300U, 759132955U, 1482612480U, 667715263U, 1795580598U,
    2337923983U, 3390586366U, 581426223U, 1515718634U, 476374295U, 705213300U,
    363062054U, 2084697697U, 2407503428U, 2292957699U, 2426213835U, 2199989172U,
    1987356470U, 4026755612U, 2147252133U, 270400031U, 1367820199U, 2369854699U,
    2844269403U, 79981964U, 624U };

  static char_T c1_cv[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  emlrtStack c1_b_st;
  emlrtStack c1_c_st;
  emlrtStack c1_d_st;
  emlrtStack c1_st;
  const mxArray *c1_h_y = NULL;
  const mxArray *c1_i_y = NULL;
  real_T c1_b_j;
  real_T c1_b_r;
  real_T c1_c_kk;
  real_T c1_d;
  int32_T c1_a;
  int32_T c1_b_kk;
  int32_T c1_exitg1;
  int32_T c1_i;
  int32_T c1_j;
  int32_T c1_k;
  int32_T c1_kk;
  uint32_T c1_u[2];
  uint32_T c1_b_y;
  uint32_T c1_c_y;
  uint32_T c1_d_y;
  uint32_T c1_e_y;
  uint32_T c1_f_y;
  uint32_T c1_g_y;
  uint32_T c1_mti;
  uint32_T c1_y;
  boolean_T c1_b_isvalid;
  boolean_T c1_exitg2;
  boolean_T c1_isvalid;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_c_st.prev = &c1_b_st;
  c1_c_st.tls = c1_b_st.tls;
  c1_d_st.prev = &c1_c_st;
  c1_d_st.tls = c1_c_st.tls;
  c1_st.site = &c1_f_emlrtRSI;
  if (!chartInstance->c1_method_not_empty) {
    chartInstance->c1_method = 7U;
    chartInstance->c1_method_not_empty = true;
  }

  c1_b_st.site = &c1_g_emlrtRSI;
  if (!chartInstance->c1_c_state_not_empty) {
    for (c1_i = 0; c1_i < 625; c1_i++) {
      chartInstance->c1_c_state[c1_i] = c1_uv[c1_i];
    }

    chartInstance->c1_c_state_not_empty = true;
  }

  c1_c_st.site = &c1_h_emlrtRSI;
  c1_d_st.site = &c1_i_emlrtRSI;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on:        */
  /*                                                                         */
  /*  A C-program for MT19937, with initialization improved 2002/1/26.       */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto.                        */
  /*                                                                         */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      */
  /*  All rights reserved.                                                   */
  /*                                                                         */
  /*  Redistribution and use in source and binary forms, with or without     */
  /*  modification, are permitted provided that the following conditions     */
  /*  are met:                                                               */
  /*                                                                         */
  /*    1. Redistributions of source code must retain the above copyright    */
  /*       notice, this list of conditions and the following disclaimer.     */
  /*                                                                         */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer      */
  /*       in the documentation and/or other materials provided with the     */
  /*       distribution.                                                     */
  /*                                                                         */
  /*    3. The names of its contributors may not be used to endorse or       */
  /*       promote products derived from this software without specific      */
  /*       prior written permission.                                         */
  /*                                                                         */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */
  /*                                                                         */
  /* =============================   END   ================================= */
  do {
    c1_exitg1 = 0;
    for (c1_j = 0; c1_j < 2; c1_j++) {
      c1_b_j = static_cast<real_T>(c1_j) + 1.0;
      c1_mti = chartInstance->c1_c_state[624] + 1U;
      if (static_cast<real_T>(c1_mti) >= 625.0) {
        for (c1_kk = 0; c1_kk < 227; c1_kk++) {
          c1_c_kk = static_cast<real_T>(c1_kk) + 1.0;
          c1_y = (chartInstance->c1_c_state[static_cast<int32_T>(c1_c_kk) - 1] &
                  2147483648U) | (chartInstance->c1_c_state[static_cast<int32_T>
            (c1_c_kk + 1.0) - 1] & 2147483647U);
          c1_b_y = c1_y;
          c1_d_y = c1_b_y;
          if ((c1_d_y & 1U) == 0U) {
            c1_d_y >>= 1U;
          } else {
            c1_d_y = c1_d_y >> 1U ^ 2567483615U;
          }

          chartInstance->c1_c_state[static_cast<int32_T>(c1_c_kk) - 1] =
            chartInstance->c1_c_state[static_cast<int32_T>(c1_c_kk + 397.0) - 1]
            ^ c1_d_y;
        }

        for (c1_b_kk = 0; c1_b_kk < 396; c1_b_kk++) {
          c1_c_kk = static_cast<real_T>(c1_b_kk) + 228.0;
          c1_y = (chartInstance->c1_c_state[static_cast<int32_T>(c1_c_kk) - 1] &
                  2147483648U) | (chartInstance->c1_c_state[static_cast<int32_T>
            (c1_c_kk + 1.0) - 1] & 2147483647U);
          c1_f_y = c1_y;
          c1_g_y = c1_f_y;
          if ((c1_g_y & 1U) == 0U) {
            c1_g_y >>= 1U;
          } else {
            c1_g_y = c1_g_y >> 1U ^ 2567483615U;
          }

          chartInstance->c1_c_state[static_cast<int32_T>(c1_c_kk) - 1] =
            chartInstance->c1_c_state[static_cast<int32_T>((c1_c_kk + 1.0) -
            228.0) - 1] ^ c1_g_y;
        }

        c1_y = (chartInstance->c1_c_state[623] & 2147483648U) |
          (chartInstance->c1_c_state[0] & 2147483647U);
        c1_c_y = c1_y;
        c1_e_y = c1_c_y;
        if ((c1_e_y & 1U) == 0U) {
          c1_e_y >>= 1U;
        } else {
          c1_e_y = c1_e_y >> 1U ^ 2567483615U;
        }

        chartInstance->c1_c_state[623] = chartInstance->c1_c_state[396] ^ c1_e_y;
        c1_mti = 1U;
      }

      c1_y = chartInstance->c1_c_state[static_cast<int32_T>(c1_mti) - 1];
      chartInstance->c1_c_state[624] = c1_mti;
      c1_y ^= c1_y >> 11U;
      c1_y ^= c1_y << 7U & 2636928640U;
      c1_y ^= c1_y << 15U & 4022730752U;
      c1_y ^= c1_y >> 18U;
      c1_u[static_cast<int32_T>(c1_b_j) - 1] = c1_y;
    }

    c1_u[0] >>= 5U;
    c1_u[1] >>= 6U;
    c1_b_r = 1.1102230246251565E-16 * (static_cast<real_T>(c1_u[0]) *
      6.7108864E+7 + static_cast<real_T>(c1_u[1]));
    if (c1_b_r == 0.0) {
      if ((static_cast<real_T>(chartInstance->c1_c_state[624]) >= 1.0) && (
           static_cast<real_T>(chartInstance->c1_c_state[624]) < 625.0)) {
        c1_isvalid = true;
      } else {
        c1_isvalid = false;
      }

      c1_b_isvalid = c1_isvalid;
      if (c1_isvalid) {
        c1_b_isvalid = false;
        c1_k = 0;
        c1_exitg2 = false;
        while ((!c1_exitg2) && (c1_k + 1 < 625)) {
          if (static_cast<real_T>(chartInstance->c1_c_state[c1_k]) == 0.0) {
            c1_a = c1_k + 1;
            c1_k = c1_a;
          } else {
            c1_b_isvalid = true;
            c1_exitg2 = true;
          }
        }
      }

      if (!c1_b_isvalid) {
        c1_h_y = NULL;
        sf_mex_assign(&c1_h_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          37), false);
        c1_i_y = NULL;
        sf_mex_assign(&c1_i_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          37), false);
        sf_mex_call(&c1_d_st, &c1_emlrtMCI, "error", 0U, 2U, 14, c1_h_y, 14,
                    sf_mex_call(&c1_d_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c1_d_st, NULL, "message", 1U, 1U, 14, c1_i_y)));
      }
    } else {
      c1_exitg1 = 1;
    }
  } while (c1_exitg1 == 0);

  c1_d = c1_b_r;
  return c1_d;
}

const mxArray *sf_c1_DigitalTwinMachine_get_eml_resolved_functions_info()
{
  const mxArray *c1_nameCaptureInfo = NULL;
  const char_T *c1_data[4] = {
    "789c6360f4f465646060e0638000093608cd0be50b4069260654802ecf88838601560616147d30f97e289d9c9f57925a5102e1e425e6a6c275a6e4e766e625e6"
    "95845416a43214a516e7e794a5a68065d2327352433273538391397e205eae1b92149c039202b19d335293b3834b73198a328a112ecc41e6c0c32301877f5908",
    "84073a400f0f747530fb0ac8b40f663e1701fb60f2c945a98925a9f1b98925a8f62750683f0b1a1f613f442633afc402d9be0514da678bd33e54f968d758fdd0"
    "e2d4a262fde2c49cb2c492fca2d4e4c482d2fcaaaa7c7d97ccf4cc92c41cdd92f2cc3cdd82a2fcacd4e4127d4400e9e532100e1f7e22dd8b2b7ff0327080e9fd",
    "4997c0499f5ef66d133a6f484ffb6060a0ecabc0611eb1e94d0c877d0268f2ae291e85bee561816126a669de39aea65129a999e54e08770410b087903b1870f0"
    "696d3e00cdbe571e", "" };

  c1_nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&c1_data[0], 1584U, &c1_nameCaptureInfo);
  return c1_nameCaptureInfo;
}

static void c1_emlrt_marshallIn(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier, real_T
  c1_y[10000])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = const_cast<const char_T *>(c1_identifier);
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_nullptr), &c1_thisId, c1_y);
  sf_mex_destroy(&c1_nullptr);
}

static void c1_b_emlrt_marshallIn(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  real_T c1_y[10000])
{
  real_T c1_dv[10000];
  int32_T c1_i;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_dv, 1, 0, 0U, 1, 0U, 2, 100,
                100);
  for (c1_i = 0; c1_i < 10000; c1_i++) {
    c1_y[c1_i] = c1_dv[c1_i];
  }

  sf_mex_destroy(&c1_u);
}

static real_T c1_c_emlrt_marshallIn(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y;
  c1_thisId.fIdentifier = const_cast<const char_T *>(c1_identifier);
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_nullptr), &c1_thisId);
  sf_mex_destroy(&c1_nullptr);
  return c1_y;
}

static real_T c1_d_emlrt_marshallIn(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  real_T c1_d;
  real_T c1_y;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_d, 1, 0, 0U, 0, 0U, 0);
  c1_y = c1_d;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static uint32_T c1_e_emlrt_marshallIn(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier,
  boolean_T *c1_svPtr)
{
  emlrtMsgIdentifier c1_thisId;
  uint32_T c1_y;
  c1_thisId.fIdentifier = const_cast<const char_T *>(c1_identifier);
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_nullptr), &c1_thisId,
    c1_svPtr);
  sf_mex_destroy(&c1_nullptr);
  return c1_y;
}

static uint32_T c1_f_emlrt_marshallIn(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T *c1_svPtr)
{
  uint32_T c1_b_u;
  uint32_T c1_y;
  if (mxIsEmpty(c1_u)) {
    *c1_svPtr = false;
  } else {
    *c1_svPtr = true;
    sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b_u, 1, 7, 0U, 0, 0U, 0);
    c1_y = c1_b_u;
  }

  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_g_emlrt_marshallIn(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier,
  boolean_T *c1_svPtr, uint32_T c1_y[625])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = const_cast<const char_T *>(c1_identifier);
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_nullptr), &c1_thisId,
                        c1_svPtr, c1_y);
  sf_mex_destroy(&c1_nullptr);
}

static void c1_h_emlrt_marshallIn(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T *c1_svPtr, uint32_T c1_y[625])
{
  int32_T c1_i;
  uint32_T c1_uv[625];
  if (mxIsEmpty(c1_u)) {
    *c1_svPtr = false;
  } else {
    *c1_svPtr = true;
    sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_uv, 1, 7, 0U, 1, 0U, 1, 625);
    for (c1_i = 0; c1_i < 625; c1_i++) {
      c1_y[c1_i] = c1_uv[c1_i];
    }
  }

  sf_mex_destroy(&c1_u);
}

static void c1_i_emlrt_marshallIn(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier,
  boolean_T *c1_svPtr, uint32_T c1_y[2])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = const_cast<const char_T *>(c1_identifier);
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_nullptr), &c1_thisId,
                        c1_svPtr, c1_y);
  sf_mex_destroy(&c1_nullptr);
}

static void c1_j_emlrt_marshallIn(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T *c1_svPtr, uint32_T c1_y[2])
{
  int32_T c1_i;
  uint32_T c1_uv[2];
  if (mxIsEmpty(c1_u)) {
    *c1_svPtr = false;
  } else {
    *c1_svPtr = true;
    sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_uv, 1, 7, 0U, 1, 0U, 1, 2);
    for (c1_i = 0; c1_i < 2; c1_i++) {
      c1_y[c1_i] = c1_uv[c1_i];
    }
  }

  sf_mex_destroy(&c1_u);
}

static uint8_T c1_k_emlrt_marshallIn(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  uint8_T c1_y;
  c1_thisId.fIdentifier = const_cast<const char_T *>(c1_identifier);
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_m_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_nullptr), &c1_thisId);
  sf_mex_destroy(&c1_nullptr);
  return c1_y;
}

static uint8_T c1_m_emlrt_marshallIn(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint8_T c1_b_u;
  uint8_T c1_y;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b_u, 1, 3, 0U, 0, 0U, 0);
  c1_y = c1_b_u;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_slStringInitializeDynamicBuffers
  (SFc1_DigitalTwinMachineInstanceStruct *chartInstance)
{
}

static void c1_chart_data_browse_helper(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, int32_T c1_ssIdNumber, const mxArray **c1_mxData, uint8_T
  *c1_isValueTooBig)
{
  real_T c1_b_d1;
  real_T c1_d;
  real_T c1_d2;
  real_T c1_d3;
  int8_T c1_i;
  *c1_mxData = NULL;
  *c1_mxData = NULL;
  *c1_isValueTooBig = 0U;
  switch (c1_ssIdNumber) {
   case 7U:
    c1_d = *chartInstance->c1_rate_decr;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 8U:
    c1_b_d1 = *chartInstance->c1_t_interval;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_b_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 9U:
    c1_i = *chartInstance->c1_num_gocce;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_i, 2, 0U, 0U, 0U, 0),
                  false);
    break;

   case 12U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", *chartInstance->c1_b_mat, 0,
      0U, 1U, 0U, 2, 100, 100), false);
    break;

   case 5U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", *chartInstance->c1_b_mat, 0,
      0U, 1U, 0U, 2, 100, 100), false);
    break;

   case 6U:
    c1_d2 = *chartInstance->c1_b_t;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 15U:
    c1_d3 = *chartInstance->c1_b_t;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_d3, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static int32_T c1__s32_minus__(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance, int32_T c1_b, int32_T c1_c, int32_T c1_EMLOvCount_src_loc,
  uint32_T c1_ssid_src_loc, int32_T c1_offset_src_loc, int32_T c1_length_src_loc)
{
  int32_T c1_a;
  c1_a = c1_b - c1_c;
  if (((c1_b ^ c1_a) & (c1_b ^ c1_c)) < 0) {
    sf_data_overflow_error(chartInstance->S, c1_ssid_src_loc, c1_offset_src_loc,
      c1_length_src_loc);
  }

  return c1_a;
}

static void init_dsm_address_info(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance)
{
}

static void init_simulink_io_address(SFc1_DigitalTwinMachineInstanceStruct
  *chartInstance)
{
  chartInstance->c1_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c1_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c1_rate_decr = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c1_t_interval = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c1_num_gocce = (int8_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c1_mat = (real_T (*)[10000])ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c1_b_mat = (real_T (*)[10000])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c1_t = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    4);
  chartInstance->c1_b_t = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c1_DigitalTwinMachine_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2107819210U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3698488306U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(4228035093U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2781865616U);
}

mxArray *sf_c1_DigitalTwinMachine_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,1);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "coder.internal.EmxArrayExternalDependency"));
  return(mxcell3p);
}

mxArray *sf_c1_DigitalTwinMachine_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_vars");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c1_DigitalTwinMachine_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c1_DigitalTwinMachine(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNrtls9OwkAQxrcIqDExHLzLE7D8SQROFuOFRBI1HLjV7bbAJttt0y6IN448gkcfxUfyEdy2C5a"
    "VWBOqRMMmk80Mmek3X37ZALRuD4hzKmJ8AkBR3EciciA+BZlrIg7lHdfzq3pZBH/y7LAe+LhriZ"
    "shJ8rRZNZlQzea3wIf84sb5muJ+ceyHp+3y+36z/Swv5roz2/oP0j0l0TmIB7pXvqzO/2Vb+nX1"
    "vRrgEvd2+sv6dv1f/7+Jv3FNf1x7th87Fpx/0D7mk9N4TOXmEsBAZ7UoafskVP2KC2XGMz16F7M"
    "9Sx4WKT4caf4Eeaw43mUYMSJywLY6/RvOlfGfb1ab5gV5HmQuy413Rm0HQopMaFgmCIT+ohZwwm"
    "Dnk+miNvhz0ZYqzh/iI+C4keYB1yss3y/ds3H3Ir5KNuZ8PGc4gdW/MDZ82E4eFS7aFWbRmT0cE"
    "IlMXteMuDlVfLy8Du8WIof1k/wwmvtdqOJfAWYPS8Z8PIiedH/z/sSjP0Gdtko2/elnAkvtyn+n"
    "Cv+hDkJDIQ5mdoGrhnXZEQ4ov1HwnoIjwmzV//H3gFNEtjY"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_DigitalTwinMachine_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sCPjX6rSxltvPkYnarMXP0E";
}

static void sf_opaque_initialize_c1_DigitalTwinMachine(void *chartInstanceVar)
{
  initialize_params_c1_DigitalTwinMachine((SFc1_DigitalTwinMachineInstanceStruct*)
    chartInstanceVar);
  initialize_c1_DigitalTwinMachine((SFc1_DigitalTwinMachineInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c1_DigitalTwinMachine(void *chartInstanceVar)
{
  enable_c1_DigitalTwinMachine((SFc1_DigitalTwinMachineInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c1_DigitalTwinMachine(void *chartInstanceVar)
{
  disable_c1_DigitalTwinMachine((SFc1_DigitalTwinMachineInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c1_DigitalTwinMachine(void *chartInstanceVar)
{
  sf_gateway_c1_DigitalTwinMachine((SFc1_DigitalTwinMachineInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c1_DigitalTwinMachine(SimStruct* S)
{
  return get_sim_state_c1_DigitalTwinMachine
    ((SFc1_DigitalTwinMachineInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c1_DigitalTwinMachine(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c1_DigitalTwinMachine((SFc1_DigitalTwinMachineInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c1_DigitalTwinMachine(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_DigitalTwinMachineInstanceStruct*) chartInstanceVar)
      ->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_DigitalTwinMachine_optimization_info();
    }

    mdl_cleanup_runtime_resources_c1_DigitalTwinMachine
      ((SFc1_DigitalTwinMachineInstanceStruct*) chartInstanceVar);
    ((SFc1_DigitalTwinMachineInstanceStruct*) chartInstanceVar)->
      ~SFc1_DigitalTwinMachineInstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c1_DigitalTwinMachine(void *chartInstanceVar)
{
  mdl_start_c1_DigitalTwinMachine((SFc1_DigitalTwinMachineInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc1_DigitalTwinMachineInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c1_DigitalTwinMachine(void *chartInstanceVar)
{
  mdl_terminate_c1_DigitalTwinMachine((SFc1_DigitalTwinMachineInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_DigitalTwinMachine(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_DigitalTwinMachine
      ((SFc1_DigitalTwinMachineInstanceStruct*)sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc1_DigitalTwinMachine
      ((SFc1_DigitalTwinMachineInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c1_DigitalTwinMachine_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [29] = {
    "eNrtWstvG0UYX6dJoKEtFeJRCaT2gsQlcdLQNpV4JPGDWsStWzshtEJmvPvZO83s7GZm1nF66rE",
    "3rhw5ckGc4AoSF25InBDigvgHOHLkm/Xa2WzceNd2H5Su5Diz69983/zm9z12bSNTKht4nMHXub",
    "cNYxbfX8TXlNE9ZsJxJvLqnp823gvHP88Zhula0AJe9ZtN2jHSHdx3KkQQRxrpD04cuAXSZb6iL",
    "i/xppscS3kTBHATJ/BcoVLZldTxGeU7RZ+b2rL8xKamXbVdn1nrOCGxbnC2/zC7nq8qaDFPBZiq",
    "CGApW7h+yy4y0jqeBaH2cjaYO9J3UnMlQVV9Ty9Vln2mqMeg0AGzxKUiyIIcst6qIgpyqpOOZL1",
    "eWe2hXcdjlPDkXNtEVsFDdSjY9Cz8e8NXyF5Cu2ivQTlRrqCEFRyWs4lIiq0w9LOMsmapeVaOyk",
    "PDb7Uob2l2he8Ax/WjThJw1cy5bRCkBTd4OrumXl2hE2xwX5cJsYo6sEXEmok6kGCli0EUsKwS3",
    "Fqo4TSpsMBJg0FJ1gRt4x6lzRslHUoj5Q3f6SpJjoQN7BbauKtyRLtFk+cIYzIdtuZ6G9AGFtjP",
    "E0VGwHbtpwBLSa2ai+rQkZsy+n1Od30IsTmXWzS5KtsxVFAkrmPCTwCnjg4DsJDmvuv9iYbFkS+",
    "V6+Qw9PMbGwntHcWWuALRJCYkzteCUAnocKCrlHYtKnUgIRpZUsEqE8/QjcGRoIZs+jy/54od5D",
    "htYTjgSkdCOjRYLciDgiDJFVDdW4T5CX12JGZlLY9NiVk2nV3E6vgZCWwS0wZL10DKoIx5FidIu",
    "sVSl881XG2bqv08SFNQL2kk+ZjQsfhplmr7HmzyHe7u8aJwnWrYxRyjKwDMGkRwLGXrWErFfhGd",
    "T+a1gN1akN3TNgyaZ6IYaWhtfAQcq6Feq67exMSoKnBsN9GhcbBVeg/bES6pVNgC7heCGLCCPvi",
    "acdAHTw/og1+L9MFnw7G5VM/TFlWE1fYoL+NOUw5hX70Yme9Ugr66149/fSJdP346HH+h/XEx/X",
    "TUQZN8sKOug/vIlZYCbhG2zu2w3jdpt4BXo4PreuQUI5f6A31J/x8kuComOGFHhMGigyM8xHntH",
    "VFee7jVIfsxF8PpsSkAA6aOUkhmPxOeO5hnGvt0taJx3hDc+zH7enyn8Fl2U4KQWUlYW3egYBLP",
    "d+/dc7OhUOYVKmXeE+5dzGLZA4cXnNDflYjdl4fs/+nw/A+NX8EYA//9K78sjYOP7ve4+GFx+Hq",
    "Mdz0uWNd2y3tbN7fevdT8mBUu3baA7q1353snMl9mwHxR/Y3y+VFxUZ5OTh3+/EyMp6neOX0MiI",
    "/TMXvTMfxsyNWbf9z5VhTmct9d/Ombv37/czceH3E/Mkf8yBg9++dOpctTZ8LxW717ln6H1D7SR",
    "CTRwRsxHeixzFXubl8W1Q5T7crOp1i4ytuVxUIwn/3S8f6+EPO3d/6Cvk/SWVPPL8ySFUmtxO/e",
    "F8f3c3YIHycP6f7vD8fDv7qaJM+dOMTXCV0vD+n3yfm/kMj/zCH/M4aKxd/o9s+ujoc/an+Q/7M",
    "xveqxA8p2rS5+O5MunqYi8zKDBvUqnhcGrWMqto5ezTW2768G7w/ur05CDw+G8HEzxoceZ9c8j1",
    "Ez6N1ktrxW21hbr9+6uHhxubFAPC+rXJc13E4WHJZltJHt9nxZQbiFdyRZT1AsuqAv1/W5Bec/p",
    "I+ZGB8zvf4/xNtPWh/3ra4+LsBE9PHlED7MGB/m5PVRd8zW0uWVxSv1gOimz0LFPNfLBPTyY6iX",
    "zx+PXqwYH9aj0Itaunp1+QoRMcE818sE9PJVqJfVZye/SFss4z15a7L55cJE9FIZws/5GD/ng+8",
    "p6kQ/jYL64CcfZx5y35/mviItznjGcZn/4fqSPC+bGRE3NebzuceFG3d9j/q5x9P2+VGfMz5t64",
    "i/H7f/xpH9f3rX9ZuRrr/o1Z8P+t9F5mzKrAHfhoSXN4A0B119RvT9T0r+es/HCpq/8Acgt5fXO",
    "GH7knYf0vdOV4T+7UH/kgAiB3/H9CTqyTj97WatOL8yRl36FxhUGQ8=",
    ""
  };

  static char newstr [2081] = "";
  newstr[0] = '\0';
  for (i = 0; i < 29; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c1_DigitalTwinMachine(SimStruct *S)
{
  const char* newstr = sf_c1_DigitalTwinMachine_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2942032923U));
  ssSetChecksum1(S,(1124746610U));
  ssSetChecksum2(S,(2915250869U));
  ssSetChecksum3(S,(1910627043U));
}

static void mdlRTW_c1_DigitalTwinMachine(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c1_DigitalTwinMachine(SimStruct *S)
{
  SFc1_DigitalTwinMachineInstanceStruct *chartInstance;
  chartInstance = (SFc1_DigitalTwinMachineInstanceStruct *)utMalloc(sizeof
    (SFc1_DigitalTwinMachineInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc1_DigitalTwinMachineInstanceStruct));
  chartInstance = new (chartInstance) SFc1_DigitalTwinMachineInstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  if (ssGetSampleTime(S, 0) == CONTINUOUS_SAMPLE_TIME && ssGetOffsetTime(S, 0) ==
      0 && sfHasContStates(S)> 0 &&
      !supportsLegacyBehaviorForPersistentVarInContinuousTime(S)) {
    sf_error_out_about_continuous_sample_time_with_persistent_vars(S);
  }

  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c1_DigitalTwinMachine;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c1_DigitalTwinMachine;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c1_DigitalTwinMachine;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c1_DigitalTwinMachine;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c1_DigitalTwinMachine;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c1_DigitalTwinMachine;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c1_DigitalTwinMachine;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c1_DigitalTwinMachine;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c1_DigitalTwinMachine;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c1_DigitalTwinMachine;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_DigitalTwinMachine;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c1_DigitalTwinMachine;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c1_DigitalTwinMachine(chartInstance);
}

void c1_DigitalTwinMachine_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c1_DigitalTwinMachine(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_DigitalTwinMachine(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_DigitalTwinMachine(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_DigitalTwinMachine_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
