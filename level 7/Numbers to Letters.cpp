#include <string>
#include <vector>

std::string switcher(const std::vector<std::string>& arr) {
//   124 - 1 = 123 = z, 124 - 26 = 97 --> a
  char a;
  std::string s;
  for(auto c : arr)
  {
    a = 123 - stoi(c);
    if(stoi(c) == 27)a = '!';
    if(stoi(c) == 28)a = '?';
    if(stoi(c) == 29)a = ' ';
    
    s += a;
  }
  return s;
}
