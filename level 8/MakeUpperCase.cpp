#include <string>

std::string makeUpperCase (const std::string& input_str)
{
  std::string s;
  for(int i = 0; i < input_str.length(); i++)
  s += toupper(input_str[i]);
  return s;
}
