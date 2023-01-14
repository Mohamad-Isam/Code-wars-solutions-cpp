#include <string>
#include <utility>

std::pair<std::string, std::string> capitalize(const std::string &s)
{
  std::string str1 = s;
  std::string str2 = s;
  for(int i = 0; i < s.length(); i += 2)
    str1[i] = toupper(str1[i]);
  for(int i = 1; i < s.length(); i += 2)
    str2[i] = toupper(str2[i]);
    return {str1, str2};
}
