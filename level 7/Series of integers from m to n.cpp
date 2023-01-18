#include <vector>

std::vector<int> generate_integers(int m, int n)
{
  std::vector<int> v;
    for(int i = m; i <= n; i++)
      v.push_back(i);
  return v;
}
