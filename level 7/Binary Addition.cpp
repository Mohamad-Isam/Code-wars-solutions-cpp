#include <cstdint>
#include <string>

std::string add_binary(uint64_t a, uint64_t b) {
  uint64_t c = a + b;
  std::string s;
  if(a ==0 && b == 0) return "0";
  while(c > 0)
  {
  
    s = std::to_string(c % 2) + s;
    c /= 2; 
  }
    return s;
}
