#pragma once


#ifdef INTERFACE_EXPORTS
#define EXPORT __declspec( dllexport )
#else
#define EXPORT __declspec( dllimport )
#endif


namespace Interface_NS
{
  //  Interface class exported from a library
  //  We'll make it factorable
  struct EXPORT Object
  {
    virtual void hello() = 0;
    virtual ~Object();
  };
}