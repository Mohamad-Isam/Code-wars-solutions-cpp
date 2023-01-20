#include <string>

std::string group_by_commas(int n)
{
  std::string  s = std::to_string(n), str;
  if(s.length() < 4)return s;
  int x = 9;
    if(s.length() < 10) x = 6;
    if(s.length() < 7) x = 3;
    for(unsigned int i = 0; i < s.length(); i++)
    {
      if(i == s.length() - x && i > 0) {str+= ","; x -= 3;}
      str += s[i];
    }
  return str;

  
    
}
