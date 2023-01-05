#include <string>

bool isOpposite(const std::string& s1, const std::string& s2) {
  
    for(int i = 0; i < s1.length(); i++)
      if(s1[i] + 32 != s2[i] && s1[i] - 32 != s2[i]) 
        return false;
  
  return s1.length() == 0 || s1.length() != s2.length() ? false : true;
}
