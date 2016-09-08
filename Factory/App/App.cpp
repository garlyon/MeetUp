#include <iostream>
#include "../SDK/Factory.h"
#include "../Interface/Object.h"
#include <Windows.h>


void helloInstance()
{
  if( auto o = SDK_NS::GetFactory<Interface_NS::Object>().create( "Hello" ) )
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
  HMODULE res = ::LoadLibraryA( R"~(C:\Users\aterekhov\Documents\GitHub\MeetUp\Factory\Debug\Impl.dll)~" );
  helloInstance();

  //  3. Implementation is unloaded
  ::FreeLibrary( res );
  helloInstance();

  return 0;
}

