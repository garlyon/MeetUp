#pragma once


#ifdef INTERFACE_EXPORTS
  #define EXPORT __declspec( dllexport )
#else
  #define EXPORT __declspec( dllimport )
#endif