#include "InterfaceFactory.h"
#include "Interface.h"
#include "../SDK/Factory.h"


SDK_NS::Factory<Interface_NS::Interface>& GetFactory( Interface_NS::Interface* )
{
  static SDK_NS::Factory<Interface_NS::Interface> s_factory;
  return s_factory;
}