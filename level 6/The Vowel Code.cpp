#include <string>

std::string encode(const std::string &str) {
  std::string s;
  for(char a : str)
  {
    if(a == 'a') s += '1';
    else if(a == 'e') s += '2';
    else if(a == 'i') s += '3';
    else if(a == 'o') s += '4';
    else if(a == 'u') s += '5';
    else s += a;
  }
  return s;
}

std::string decode(const std::string &str) {
  std::string s;
  for(char a : str)
  {
    if(a == '1') s += 'a';
    else if(a == '2') s += 'e';
    else if(a == '3') s += 'i';
    else if(a == '4') s += 'o';
    else if(a == '5') s += 'u';
    else s += a;
  }
  return s;
}
