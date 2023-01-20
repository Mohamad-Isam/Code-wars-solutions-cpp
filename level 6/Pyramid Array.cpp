#include <vector>
#include <cstdlib>

std::vector<std::vector<int>> pyramid(std::size_t n) {
  std::vector<std::vector<int>> v;
  std::vector<int> seg;
  for(int i = 1; i <= n; i++)
  {
    for(int j = 1; j <= i; j++)
      seg.push_back(1);
    v.push_back(seg);
    seg.clear();
  }
  return v;
}
