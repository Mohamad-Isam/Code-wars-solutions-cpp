#include <string>

std::string solve(const std::string& str){
  std::string s;
  int lower = 0, upper = 0;
    for(auto c : str)
      {if(c >= 'a' && c <= 'z') lower++;
      if(c >= 'A' && c <= 'Z') upper++;}
    for(int i = 0; i < str.length(); i++)
      if(lower >= upper) s += tolower(str[i]);
      else s += toupper(str[i]);
      return s;
}
