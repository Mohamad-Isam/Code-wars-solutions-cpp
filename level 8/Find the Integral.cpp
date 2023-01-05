#include <string>
std::string integrate(const int& coefficient,const int& exponent){
  int x = coefficient, y = exponent;
  return std::to_string(x / (y + 1)) + "x^" + std::to_string(y + 1);
}
