#include <vector>

std::vector<int> arr(int n = 0) {
  std::vector<int> v;
  for(int i = 0; i < n; i++)
    v.push_back(i);
  return v;
}
