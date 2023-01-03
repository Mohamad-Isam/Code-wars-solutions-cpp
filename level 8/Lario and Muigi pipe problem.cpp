#include <vector>

std::vector<int> pipe_fix(const std::vector<int>& nums) {
  std::vector<int> v = nums;
  std::sort(v.begin(), v.end());
  double n = v.size();
  int x = v[0], y = v[n - 1];
  v = {};
  for(int i = x; i <= y; i++)
    v.push_back(i);
  return v;
}
