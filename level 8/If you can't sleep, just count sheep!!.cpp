#include <string>

std::string countSheep(int number) {
  std::string s;
  for(int i = 1; i <= number; i++)
  {
    s += std::to_string(i);
    s += " sheep...";
  }
  return s;
}
