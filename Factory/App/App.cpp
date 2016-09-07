#include <iostream>
#include "../SDK/Factory.h"
#include "../SDK/Object.h"


void helloInstance()
{
  if( auto o = Align::Factory<Align::Object>::Get().create( "Hello" ) )
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

  return 0;
}

