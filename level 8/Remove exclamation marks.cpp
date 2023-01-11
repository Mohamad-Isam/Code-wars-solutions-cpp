#include <string>

std::string removeExclamationMarks(std::string str){
  std::string s;
  for(auto c : str)
  {
    if(c == '!')continue;
    s += c;
  }
  return s;
}
