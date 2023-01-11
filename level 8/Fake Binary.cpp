#include <string>

std::string fakeBin(std::string str){
  std::string s;
  for(char ch : str)
  {
    (ch - '0' < 5)? s += '0': s += '1'; 
  }
  return s;
}
