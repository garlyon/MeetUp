#include "../SDK/Object.h"
#include "../SDK/Factory.h"
#include <iostream>


namespace Align
{
  struct Hello : public Object
  {
    virtual void hello() override
    {
      std::cout << "Hello, World!" << std::endl;
    }
  };
}