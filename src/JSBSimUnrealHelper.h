#ifndef ASUAHELPER_H
#define ASUAHELPER_H

/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
INCLUDES
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/

#include <string>

#include "JSBSim_API.h"

/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
CLASS DECLARATION
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/

namespace JSBSim {
class Element;

class XMLElementWrapper
{
public:
  JSBSIM_API explicit XMLElementWrapper(Element * el)
    : wrapped(el)
  {}

  JSBSIM_API ~XMLElementWrapper() { wrapped = nullptr; }

  JSBSIM_API void SetElement(Element* el) { wrapped = el; }

  JSBSIM_API const std::string& GetAttributeValue(const std::string& name);
  JSBSIM_API const std::string& FindElementValue(const std::string& name);
  JSBSIM_API const std::string& ReadFrom();

private:
  Element* wrapped;
  std::string buffer;
};

}

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

#endif
