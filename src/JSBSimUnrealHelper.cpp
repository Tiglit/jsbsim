#include "JSBSimUnrealHelper.h"

#include "input_output/FGXMLElement.h"


namespace JSBSim {

const std::string& XMLElementWrapper::GetAttributeValue(const std::string& name)
{
  if (wrapped == nullptr)
  {
    buffer.clear();
    return buffer;
  }
  buffer = wrapped->GetAttributeValue(name);
  return buffer;
}

const std::string& XMLElementWrapper::FindElementValue(const std::string& name)
{
  if (wrapped == nullptr)
  {
    buffer.clear();
    return buffer;
  }
  buffer = wrapped->FindElementValue(name);
  return buffer;
}

const std::string& XMLElementWrapper::ReadFrom()
{
  if (wrapped == nullptr)
  {
    buffer.clear();
    return buffer;
  }
  buffer = wrapped->ReadFrom();
  return buffer;
}

}

