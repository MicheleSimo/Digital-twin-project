#ifndef __c1_DigitalTwinMachine_h__
#define __c1_DigitalTwinMachine_h__

/* Forward Declarations */
struct SFc1_DigitalTwinMachineInstanceStruct;

/* Type Definitions */
#ifndef typedef_c1_DigitalTwinMachineStackData
#define typedef_c1_DigitalTwinMachineStackData

typedef struct {
} c1_DigitalTwinMachineStackData;

#endif                                 /* typedef_c1_DigitalTwinMachineStackData */

#ifndef struct_SFc1_DigitalTwinMachineInstanceStruct
#define struct_SFc1_DigitalTwinMachineInstanceStruct

struct SFc1_DigitalTwinMachineInstanceStruct
{
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c1_sfEvent;
  boolean_T c1_doneDoubleBufferReInit;
  uint8_T c1_is_active_c1_DigitalTwinMachine;
  uint8_T c1_JITStateAnimation[1];
  uint8_T c1_JITTransitionAnimation[1];
  int32_T c1_IsDebuggerActive;
  int32_T c1_IsSequenceViewerPresent;
  int32_T c1_SequenceViewerOptimization;
  int32_T c1_IsHeatMapPresent;
  void *c1_RuntimeVar;
  uint32_T c1_method;
  boolean_T c1_method_not_empty;
  uint32_T c1_state;
  boolean_T c1_state_not_empty;
  uint32_T c1_b_state[2];
  boolean_T c1_b_state_not_empty;
  uint32_T c1_c_state[625];
  boolean_T c1_c_state_not_empty;
  uint32_T c1_mlFcnLineNumber;
  void *c1_fcnDataPtrs[10];
  const char_T *c1_dataNames[10];
  uint32_T c1_numFcnVars;
  uint32_T c1_ssIds[10];
  uint32_T c1_statuses[10];
  void *c1_outMexFcns[10];
  void *c1_inMexFcns[10];
  CovrtStateflowInstance *c1_covrtInstance;
  void *c1_fEmlrtCtx;
  real_T *c1_rate_decr;
  real_T *c1_t_interval;
  int8_T *c1_num_gocce;
  real_T (*c1_mat)[10000];
  real_T (*c1_b_mat)[10000];
  real_T *c1_t;
  real_T *c1_b_t;
};

#endif                                 /* struct_SFc1_DigitalTwinMachineInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c1_DigitalTwinMachine_get_eml_resolved_functions_info();

/* Function Definitions */
extern void sf_c1_DigitalTwinMachine_get_check_sum(mxArray *plhs[]);
extern void c1_DigitalTwinMachine_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
