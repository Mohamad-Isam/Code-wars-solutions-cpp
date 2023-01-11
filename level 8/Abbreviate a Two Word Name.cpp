#include <string>

std::string abbrevName(std::string name)
{
  std::string s;
   s += toupper(name[0]);
  s += '.';
  s += toupper(name[name.find(' ') + 1]);
  return s;
}
