#include <string>

long long filter_string(const std::string &value)
{
    std::string s;
  for(int i = 0; i < value.size(); i++)
    if(value[i] == '0' || value[i] == '1' || value[i] == '2' || value[i] == '3' || value[i] == '4' || value[i] == '5' || value[i] == '6' || value[i] == '7' || value[i] == '8' || value[i] == '9')
      s += value[i];
  return stol(s);
}
