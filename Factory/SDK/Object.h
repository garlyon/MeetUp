#pragma once


namespace Align
{
  struct Object
  {
    virtual void hello() = 0;
    virtual ~Object() = default;
  };
}