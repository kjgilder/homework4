#ifndef HOMEWORK4__VISIBILITY_CONTROL_H_
#define HOMEWORK4__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define HOMEWORK4_EXPORT __attribute__ ((dllexport))
    #define HOMEWORK4_IMPORT __attribute__ ((dllimport))
  #else
    #define HOMEWORK4_EXPORT __declspec(dllexport)
    #define HOMEWORK4_IMPORT __declspec(dllimport)
  #endif
  #ifdef HOMEWORK4_BUILDING_LIBRARY
    #define HOMEWORK4_PUBLIC HOMEWORK4_EXPORT
  #else
    #define HOMEWORK4_PUBLIC HOMEWORK4_IMPORT
  #endif
  #define HOMEWORK4_PUBLIC_TYPE HOMEWORK4_PUBLIC
  #define HOMEWORK4_LOCAL
#else
  #define HOMEWORK4_EXPORT __attribute__ ((visibility("default")))
  #define HOMEWORK4_IMPORT
  #if __GNUC__ >= 4
    #define HOMEWORK4_PUBLIC __attribute__ ((visibility("default")))
    #define HOMEWORK4_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define HOMEWORK4_PUBLIC
    #define HOMEWORK4_LOCAL
  #endif
  #define HOMEWORK4_PUBLIC_TYPE
#endif
#endif  // HOMEWORK4__VISIBILITY_CONTROL_H_
// Generated 27-Nov-2024 14:05:18
// Copyright 2019-2020 The MathWorks, Inc.
