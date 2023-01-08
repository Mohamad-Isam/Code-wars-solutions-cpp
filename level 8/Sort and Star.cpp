#include <vector>
#include <string>

std::string twoSort(std::vector<std::string> s)
{
  std::string str;
  std::sort(s.begin(), s.end());
  for(int i = 0; i < s[0].length(); i++)
    {str += s[0][i];
    if(i != s[0].length() - 1) str += "***";}
    
    return str;
}
