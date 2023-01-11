#include <vector>

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
  int sum = 0;
  for(auto x : a)
    sum += x;
  for(auto x : b)
    sum += x;
  return sum;
}
