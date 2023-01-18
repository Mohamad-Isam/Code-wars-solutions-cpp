#include <string>
#include <vector>

std::vector<int> digitize(const int& n) {
  int num = n;
  if(n == 0) return {0};
  std::vector<int> v;
  while(num)
  {
    v.push_back(num % 10);
    num /= 10;
  }
  std::reverse(v.begin(), v.end());
  return v;
}
