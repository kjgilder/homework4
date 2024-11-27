/*
 * homework4_data.cpp
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

/* Block parameters (default storage) */
P_homework4_T homework4_P = {
  /* Computed Parameter: Constant_Value
   * Referenced by: '<S1>/Constant'
   */
  {
    0.0                                /* Data */
  },

  /* Computed Parameter: Constant_Value_m
   * Referenced by: '<S4>/Constant'
   */
  {
    0.0                                /* Data */
  },

  /* Computed Parameter: Constant_Value_a
   * Referenced by: '<S5>/Constant'
   */
  {
    0.0                                /* Data */
  },

  /* Computed Parameter: Constant_Value_mi
   * Referenced by: '<S6>/Constant'
   */
  {
    0.0                                /* Data */
  },

  /* Expression: 20
   * Referenced by: '<Root>/Constant'
   */
  20.0,

  /* Expression: 100
   * Referenced by: '<Root>/Switch'
   */
  100.0,

  /* Start of '<S6>/Enabled Subsystem' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S9>/Out1'
     */
    {
      0.0                              /* Data */
    }
  }
  ,

  /* End of '<S6>/Enabled Subsystem' */

  /* Start of '<S5>/Enabled Subsystem' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S8>/Out1'
     */
    {
      0.0                              /* Data */
    }
  }
  ,

  /* End of '<S5>/Enabled Subsystem' */

  /* Start of '<S4>/Enabled Subsystem' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S7>/Out1'
     */
    {
      0.0                              /* Data */
    }
  }
  /* End of '<S4>/Enabled Subsystem' */
};
