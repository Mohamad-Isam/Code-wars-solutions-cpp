#include <vector>
#include <cstdint>
#include<cmath>
std::vector<uint64_t> powers_of_two(int n) {
  std::vector<uint64_t> v;
  for(int i = 0; i <= n; i++)
    v.push_back(pow(2, i));
  return v;
}
