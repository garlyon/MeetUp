#include "Hello.h"
#include <iostream>
#include "../SDK/Registrator.h"


void Impl_NS::Hello::hello()
{
  std::cout << "Hello, World!" << std::endl;
}


namespace
{
  //  register implementation in the factory, bind with a name
  SDK_NS::Registrator<Impl_NS::Hello> g_reg( "Hello" );
}