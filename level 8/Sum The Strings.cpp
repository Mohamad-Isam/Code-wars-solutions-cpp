#include <string>

std::string sum_str(const std::string& a, const std::string& b) {
    int sum = 0;
  if(a == "" && b == "") return "0";
  if(a == "") return b;
  if(b == "") return a;
  sum = std::stoi(a) + std::stoi(b);
  return std::to_string(sum);
}
