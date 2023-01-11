#include <string>

bool is_uppercase(const std::string &s) {
  for(auto c : s)
    if(islower(c)) return false;
  return true;
}
