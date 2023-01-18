#include <string>

bool valid_spacing(const std::string& s) {
  for(size_t i = 0; i < s.length(); i++)
    if(s[i] == ' ' && s[i + 1] == ' ' || s[0] == ' ' || s[s.length() - 1] == ' ')return false;
  return true;
}
