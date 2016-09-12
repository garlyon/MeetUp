#pragma once


#include "Export.h"


namespace SDK_NS { template <typename> class Factory; }
namespace Interface_NS { struct Interface; }


EXPORT SDK_NS::Factory<Interface_NS::Interface>& GetFactory( Interface_NS::Interface* );
