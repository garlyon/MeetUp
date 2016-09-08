#include <iostream>
#include "../SDK/Factory.h"
#include "../SDK/Object.h"
#include <Windows.h>


void helloInstance()
{
  if( auto o = Align::GetFactory<Align::Object>().create( "Hello" ) )
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
  helloInstance();

  HMODULE res = ::LoadLibraryA( R"~(C:\Users\aterekhov\Documents\GitHub\MeetUp\Factory\Debug\Impl.dll)~" );

  helloInstance();

  ::FreeLibrary( res );

  helloInstance();

  return 0;
}

