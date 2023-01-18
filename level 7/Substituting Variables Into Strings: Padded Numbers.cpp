#include <string>

std::string solution(int n) {
  std::string s = "Value is 00000";
    s[13] = (n % 10 + '0');
    s[12] = ((n / 10) % 10 + '0');
    s[11] = ((n / 100) % 10 + '0');
    s[10] = ((n / 1000) % 10 + '0');
    s[9] = ((n / 10000) % 10 + '0');
  return s;
}
