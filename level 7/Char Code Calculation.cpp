#include <string>

int calc(const std::string& x) {
  int sum = 0;
  for(auto a : x)
  {
    if(a % 10 == 7) sum += 6;
    if(a / 10 % 10 == 7) sum += 6;
  }
  return sum;
}
