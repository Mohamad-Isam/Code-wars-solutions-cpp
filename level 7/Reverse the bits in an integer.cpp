#include <cmath>
unsigned int reverse_bits(unsigned int n) {
  std::string s;
  for(;n; n /= 2)
    s += std::to_string((n % 2));
  
  int i = s.length() - 1;
  
  for(size_t j = 0 ; i >= 0; i--, j++)
    if((s[j] - '0') == 1)
      n += pow(2, i);
  
  return n;
}
