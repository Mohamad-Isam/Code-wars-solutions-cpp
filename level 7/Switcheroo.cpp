#include <string>

std::string switcheroo(const std::string &s) {
  std::string str;
  for(int i = 0; i < s.length(); i++)
    {
    if(s[i] == 'a') str = str + 'b';
    else if(s[i] == 'b') str += 'a';
    else str += s[i];
  }
  return str;
}
