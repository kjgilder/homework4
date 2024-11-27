/*
 * homework4_private.h
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

#ifndef homework4_private_h_
#define homework4_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "homework4.h"
#include "homework4_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"

extern void homework4_EnabledSubsystem_Init(B_EnabledSubsystem_homework4_T
  *localB, P_EnabledSubsystem_homework4_T *localP);
extern void homework4_EnabledSubsystem(boolean_T rtu_Enable, const
  SL_Bus_homework4_std_msgs_Float64 *rtu_In1, B_EnabledSubsystem_homework4_T
  *localB);

#endif                                 /* homework4_private_h_ */
