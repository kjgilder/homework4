/*
 * homework4.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "homework4".
 *
 * Model version              : 1.35
 * Simulink Coder version : 24.1 (R2024a) 19-Nov-2023
 * C++ source code generated on : Wed Nov 27 14:05:14 2024
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef homework4_h_
#define homework4_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "homework4_types.h"
#include <string.h>
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<S4>/Enabled Subsystem' */
struct B_EnabledSubsystem_homework4_T {
  SL_Bus_homework4_std_msgs_Float64 In1;/* '<S7>/In1' */
};

/* Block signals (default storage) */
struct B_homework4_T {
  B_EnabledSubsystem_homework4_T EnabledSubsystem_m;/* '<S6>/Enabled Subsystem' */
  B_EnabledSubsystem_homework4_T EnabledSubsystem_o;/* '<S5>/Enabled Subsystem' */
  B_EnabledSubsystem_homework4_T EnabledSubsystem;/* '<S4>/Enabled Subsystem' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_homework4_T {
  ros_slroscpp_internal_block_P_T obj; /* '<S3>/SinkBlock' */
  ros_slroscpp_internal_block_S_T obj_n;/* '<S6>/SourceBlock' */
  ros_slroscpp_internal_block_S_T obj_m;/* '<S5>/SourceBlock' */
  ros_slroscpp_internal_block_S_T obj_p;/* '<S4>/SourceBlock' */
  boolean_T objisempty;                /* '<S6>/SourceBlock' */
  boolean_T objisempty_b;              /* '<S5>/SourceBlock' */
  boolean_T objisempty_e;              /* '<S4>/SourceBlock' */
  boolean_T objisempty_i;              /* '<S3>/SinkBlock' */
};

/* Parameters for system: '<S4>/Enabled Subsystem' */
struct P_EnabledSubsystem_homework4_T_ {
  SL_Bus_homework4_std_msgs_Float64 Out1_Y0;/* Computed Parameter: Out1_Y0
                                             * Referenced by: '<S7>/Out1'
                                             */
};

/* Parameters (default storage) */
struct P_homework4_T_ {
  SL_Bus_homework4_std_msgs_Float64 Constant_Value;/* Computed Parameter: Constant_Value
                                                    * Referenced by: '<S1>/Constant'
                                                    */
  SL_Bus_homework4_std_msgs_Float64 Constant_Value_m;/* Computed Parameter: Constant_Value_m
                                                      * Referenced by: '<S4>/Constant'
                                                      */
  SL_Bus_homework4_std_msgs_Float64 Constant_Value_a;/* Computed Parameter: Constant_Value_a
                                                      * Referenced by: '<S5>/Constant'
                                                      */
  SL_Bus_homework4_std_msgs_Float64 Constant_Value_mi;/* Computed Parameter: Constant_Value_mi
                                                       * Referenced by: '<S6>/Constant'
                                                       */
  real_T Constant_Value_b;             /* Expression: 20
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Switch_Threshold;             /* Expression: 100
                                        * Referenced by: '<Root>/Switch'
                                        */
  P_EnabledSubsystem_homework4_T EnabledSubsystem_m;/* '<S6>/Enabled Subsystem' */
  P_EnabledSubsystem_homework4_T EnabledSubsystem_o;/* '<S5>/Enabled Subsystem' */
  P_EnabledSubsystem_homework4_T EnabledSubsystem;/* '<S4>/Enabled Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_homework4_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_homework4_T homework4_P;

#ifdef __cplusplus

}

#endif

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_homework4_T homework4_B;

#ifdef __cplusplus

}

#endif

/* Block states (default storage) */
extern struct DW_homework4_T homework4_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  /* Model entry point functions */
  extern void homework4_initialize(void);
  extern void homework4_step(void);
  extern void homework4_terminate(void);

#ifdef __cplusplus

}

#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_homework4_T *const homework4_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'homework4'
 * '<S1>'   : 'homework4/Blank Message'
 * '<S2>'   : 'homework4/MATLAB Function1'
 * '<S3>'   : 'homework4/Publish'
 * '<S4>'   : 'homework4/Subscribe'
 * '<S5>'   : 'homework4/Subscribe1'
 * '<S6>'   : 'homework4/Subscribe2'
 * '<S7>'   : 'homework4/Subscribe/Enabled Subsystem'
 * '<S8>'   : 'homework4/Subscribe1/Enabled Subsystem'
 * '<S9>'   : 'homework4/Subscribe2/Enabled Subsystem'
 */
#endif                                 /* homework4_h_ */
