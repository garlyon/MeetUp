#include "../SDK/Factory.h"           //  here is my template factory
#include "../Interface/Interface.h"   //  here is my interface
#include <Windows.h>
#include <iostream>


void helloInstance()
{
  if( auto o = SDK_NS::GetFactory<Interface_NS::Interface>().create( "Hello" ) )
  {
    o->hello();
  }
  else
  {
    std::cout << "No Hello implementation found" << std::endl;
  }
}


int main()
{
  //  1. Implementation is not available
  helloInstance();

  //  2. Implementation is loaded
  HMODULE res = ::LoadLibraryA( "Impl.dll" );
  helloInstance();

  //  3. Implementation is unloaded
  ::FreeLibrary( res );
  helloInstance();

  return 0;
}

