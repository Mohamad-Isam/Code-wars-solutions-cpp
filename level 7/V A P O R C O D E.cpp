#include<string>

std::string vaporcode(const std::string &str) {
  std::string s, w;
  for(int i = 0; i < str.length(); i++)
  {
    if(str[i] == ' ')continue;
    s += toupper(str[i]);
  }
  for(int i = 0; i < s.length(); i++)
    {
    w += s[i];
    if(i + 1 != s.length()) w += "  ";
    }
  return w;
}
