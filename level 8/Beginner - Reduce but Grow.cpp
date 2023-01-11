#include <vector>
int grow(std::vector<int> nums) {
  int mul = 1;
  for(int x : nums) mul *= x;
  return mul;
}
