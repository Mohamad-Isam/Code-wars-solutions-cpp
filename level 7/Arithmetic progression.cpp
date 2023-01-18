#include <string>

std::string arithmeticSequenceElements(int a, int d, int n)
{
  std::string s;
  while(--n){
    s = s + std::to_string(a) + ", ";
    a += d;
  }
  s += std::to_string(a);
  return s;
}
