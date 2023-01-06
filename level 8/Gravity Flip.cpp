#include <vector>

std::vector<int> flip(const char dir, const std::vector<int>& arr) {
  std::vector<int> v = arr;
    dir == 'R' ? std::sort(v.begin(), v.end()) : std::sort(v.rbegin(), v.rend());
  return v;
}
