#include <string>
#include <vector>

std::vector<std::string> towerBuilder(unsigned nFloors) {
  std::vector<std::string> result;
  std::string s;
  for(int i = 0; i < nFloors; i++)
  {
    for(int j = i + 1; j < nFloors; j++)
      s += " ";
    
    for(int j = -i; j <= i; j++)
      s += "*";
    
    for(int j = i + 1; j < nFloors; j++)
      s += " ";
    
    result.push_back(s);
    s = "";
    
  }
  return result;
}
