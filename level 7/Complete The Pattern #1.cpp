#include <string>
std::string pattern(int n){
  std::string s;
  for(int i = 1; i <= n; i++)
    {
    for(int j = 1; j <= i; j++)
      {
      s += std::to_string(i);
      }
    if(i != n)s += "\n";
    }
  return s;
}
