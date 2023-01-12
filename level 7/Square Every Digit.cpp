#include <string>
int square_digits(int num) {
  std::string s = std::to_string(num);
  std::string ans;
  for(char ch : s){
    int i = ch - '0';
    ans += std::to_string(i * i);
  }
 return std::stoi(ans);
}
