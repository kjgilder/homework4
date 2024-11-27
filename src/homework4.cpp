/*
 * homework4.cpp
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

#include "homework4.h"
#include "rtwtypes.h"
#include "homework4_types.h"
#include "homework4_private.h"
#include <string.h>

/* Block signals (default storage) */
B_homework4_T homework4_B;

/* Block states (default storage) */
DW_homework4_T homework4_DW;

/* Real-time model */
RT_MODEL_homework4_T homework4_M_ = RT_MODEL_homework4_T();
RT_MODEL_homework4_T *const homework4_M = &homework4_M_;

/*
 * System initialize for enable system:
 *    '<S4>/Enabled Subsystem'
 *    '<S5>/Enabled Subsystem'
 *    '<S6>/Enabled Subsystem'
 */
void homework4_EnabledSubsystem_Init(B_EnabledSubsystem_homework4_T *localB,
  P_EnabledSubsystem_homework4_T *localP)
{
  /* SystemInitialize for SignalConversion generated from: '<S7>/In1' incorporates:
   *  Outport: '<S7>/Out1'
   */
  localB->In1 = localP->Out1_Y0;
}

/*
 * Output and update for enable system:
 *    '<S4>/Enabled Subsystem'
 *    '<S5>/Enabled Subsystem'
 *    '<S6>/Enabled Subsystem'
 */
void homework4_EnabledSubsystem(boolean_T rtu_Enable, const
  SL_Bus_homework4_std_msgs_Float64 *rtu_In1, B_EnabledSubsystem_homework4_T
  *localB)
{
  /* Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S7>/Enable'
   */
  if (rtu_Enable) {
    /* SignalConversion generated from: '<S7>/In1' */
    localB->In1 = *rtu_In1;
  }

  /* End of Outputs for SubSystem: '<S4>/Enabled Subsystem' */
}

/* Model step function */
void homework4_step(void)
{
  SL_Bus_homework4_std_msgs_Float64 rtb_BusAssignment;
  SL_Bus_homework4_std_msgs_Float64 tmp;
  real_T rtb_Switch;
  boolean_T b_varargout_1;

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe1' */
  /* MATLABSystem: '<S5>/SourceBlock' */
  b_varargout_1 = Sub_homework4_54.getLatestMessage(&tmp);

  /* Outputs for Enabled SubSystem: '<S5>/Enabled Subsystem' */
  /* Start for MATLABSystem: '<S5>/SourceBlock' */
  homework4_EnabledSubsystem(b_varargout_1, &tmp,
    &homework4_B.EnabledSubsystem_o);

  /* End of Outputs for SubSystem: '<S5>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe1' */

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe' */
  /* MATLABSystem: '<S4>/SourceBlock' */
  b_varargout_1 = Sub_homework4_53.getLatestMessage(&tmp);

  /* Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' */
  /* Start for MATLABSystem: '<S4>/SourceBlock' */
  homework4_EnabledSubsystem(b_varargout_1, &tmp, &homework4_B.EnabledSubsystem);

  /* End of Outputs for SubSystem: '<S4>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe' */

  /* Switch: '<Root>/Switch' incorporates:
   *  Constant: '<Root>/Constant'
   */
  if (homework4_B.EnabledSubsystem.In1.Data > homework4_P.Switch_Threshold) {
    rtb_Switch = homework4_B.EnabledSubsystem_o.In1.Data;
  } else {
    rtb_Switch = homework4_P.Constant_Value_b;
  }

  /* End of Switch: '<Root>/Switch' */

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe2' */
  /* MATLABSystem: '<S6>/SourceBlock' */
  b_varargout_1 = Sub_homework4_55.getLatestMessage(&tmp);

  /* Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' */
  /* Start for MATLABSystem: '<S6>/SourceBlock' */
  homework4_EnabledSubsystem(b_varargout_1, &tmp,
    &homework4_B.EnabledSubsystem_m);

  /* End of Outputs for SubSystem: '<S6>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe2' */

  /* MATLAB Function: '<Root>/MATLAB Function1' */
  if (homework4_B.EnabledSubsystem_o.In1.Data < 0.0) {
    /* BusAssignment: '<Root>/Bus Assignment' */
    rtb_BusAssignment.Data = 0.0;
  } else {
    if ((rtb_Switch > -0.01) && (rtb_Switch < 0.01)) {
      rtb_Switch = 0.01;
    }

    /* BusAssignment: '<Root>/Bus Assignment' */
    rtb_BusAssignment.Data = (homework4_B.EnabledSubsystem_o.In1.Data /
      rtb_Switch - 2.0) * 0.25 + homework4_B.EnabledSubsystem_m.In1.Data;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function1' */

  /* Outputs for Atomic SubSystem: '<Root>/Publish' */
  /* MATLABSystem: '<S3>/SinkBlock' */
  Pub_homework4_20.publish(&rtb_BusAssignment);

  /* End of Outputs for SubSystem: '<Root>/Publish' */
}

/* Model initialize function */
void homework4_initialize(void)
{
  /* Registration code */

  /* block I/O */
  (void) memset((static_cast<void *>(&homework4_B)), 0,
                sizeof(B_homework4_T));

  /* states (dwork) */
  (void) memset(static_cast<void *>(&homework4_DW), 0,
                sizeof(DW_homework4_T));

  {
    char_T b_zeroDelimTopic_0[17];
    char_T b_zeroDelimTopic[11];
    char_T b_zeroDelimTopic_1[9];
    static const char_T b_zeroDelimTopic_2[11] = "/lead_dist";
    static const char_T b_zeroDelimTopic_3[17] = "/car/state/vel_x";
    static const char_T b_zeroDelimTopic_4[9] = "/rel_vel";
    static const char_T b_zeroDelimTopic_5[11] = "/cmd_accel";

    /* Start for Atomic SubSystem: '<Root>/Subscribe1' */
    /* Start for MATLABSystem: '<S5>/SourceBlock' */
    homework4_DW.obj_m.matlabCodegenIsDeleted = false;
    homework4_DW.objisempty_b = true;
    homework4_DW.obj_m.isInitialized = 1;
    for (int32_T i = 0; i < 11; i++) {
      b_zeroDelimTopic[i] = b_zeroDelimTopic_2[i];
    }

    Sub_homework4_54.createSubscriber(&b_zeroDelimTopic[0], 1);
    homework4_DW.obj_m.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe1' */

    /* Start for Atomic SubSystem: '<Root>/Subscribe' */
    /* Start for MATLABSystem: '<S4>/SourceBlock' */
    homework4_DW.obj_p.matlabCodegenIsDeleted = false;
    homework4_DW.objisempty_e = true;
    homework4_DW.obj_p.isInitialized = 1;
    for (int32_T i = 0; i < 17; i++) {
      b_zeroDelimTopic_0[i] = b_zeroDelimTopic_3[i];
    }

    Sub_homework4_53.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    homework4_DW.obj_p.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S4>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe' */

    /* Start for Atomic SubSystem: '<Root>/Subscribe2' */
    /* Start for MATLABSystem: '<S6>/SourceBlock' */
    homework4_DW.obj_n.matlabCodegenIsDeleted = false;
    homework4_DW.objisempty = true;
    homework4_DW.obj_n.isInitialized = 1;
    for (int32_T i = 0; i < 9; i++) {
      b_zeroDelimTopic_1[i] = b_zeroDelimTopic_4[i];
    }

    Sub_homework4_55.createSubscriber(&b_zeroDelimTopic_1[0], 1);
    homework4_DW.obj_n.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S6>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe2' */

    /* Start for Atomic SubSystem: '<Root>/Publish' */
    /* Start for MATLABSystem: '<S3>/SinkBlock' */
    homework4_DW.obj.matlabCodegenIsDeleted = false;
    homework4_DW.objisempty_i = true;
    homework4_DW.obj.isInitialized = 1;
    for (int32_T i = 0; i < 11; i++) {
      b_zeroDelimTopic[i] = b_zeroDelimTopic_5[i];
    }

    Pub_homework4_20.createPublisher(&b_zeroDelimTopic[0], 1);
    homework4_DW.obj.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S3>/SinkBlock' */
    /* End of Start for SubSystem: '<Root>/Publish' */
  }

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1' */
  /* SystemInitialize for Enabled SubSystem: '<S5>/Enabled Subsystem' */
  homework4_EnabledSubsystem_Init(&homework4_B.EnabledSubsystem_o,
    &homework4_P.EnabledSubsystem_o);

  /* End of SystemInitialize for SubSystem: '<S5>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe1' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe' */
  /* SystemInitialize for Enabled SubSystem: '<S4>/Enabled Subsystem' */
  homework4_EnabledSubsystem_Init(&homework4_B.EnabledSubsystem,
    &homework4_P.EnabledSubsystem);

  /* End of SystemInitialize for SubSystem: '<S4>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe2' */
  /* SystemInitialize for Enabled SubSystem: '<S6>/Enabled Subsystem' */
  homework4_EnabledSubsystem_Init(&homework4_B.EnabledSubsystem_m,
    &homework4_P.EnabledSubsystem_m);

  /* End of SystemInitialize for SubSystem: '<S6>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe2' */
}

/* Model terminate function */
void homework4_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/Subscribe1' */
  /* Terminate for MATLABSystem: '<S5>/SourceBlock' */
  if (!homework4_DW.obj_m.matlabCodegenIsDeleted) {
    homework4_DW.obj_m.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S5>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe1' */

  /* Terminate for Atomic SubSystem: '<Root>/Subscribe' */
  /* Terminate for MATLABSystem: '<S4>/SourceBlock' */
  if (!homework4_DW.obj_p.matlabCodegenIsDeleted) {
    homework4_DW.obj_p.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S4>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe' */

  /* Terminate for Atomic SubSystem: '<Root>/Subscribe2' */
  /* Terminate for MATLABSystem: '<S6>/SourceBlock' */
  if (!homework4_DW.obj_n.matlabCodegenIsDeleted) {
    homework4_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S6>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe2' */

  /* Terminate for Atomic SubSystem: '<Root>/Publish' */
  /* Terminate for MATLABSystem: '<S3>/SinkBlock' */
  if (!homework4_DW.obj.matlabCodegenIsDeleted) {
    homework4_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S3>/SinkBlock' */
  /* End of Terminate for SubSystem: '<Root>/Publish' */
}
