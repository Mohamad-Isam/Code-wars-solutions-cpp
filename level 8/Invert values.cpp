#include <vector>

std::vector<int> invert(std::vector<int> values)
{
  std::vector<int> v;
for(int x : values)
  v.push_back(-x);
    return v;
}
