#include <string>

std::string no_space(const std::string& x)
{
  std::string s;
  for(char ch: x) if(ch != ' ')s += ch;
   return s;
}
