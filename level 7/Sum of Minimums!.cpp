#include <vector>

int sum_of_minimums(const std::vector<std::vector<int>> &numbers)
{
  std::vector<std::vector<int>> v = numbers;
  int sum = 0;
  for(int i = 0; i < v.size(); i++)
  {
    std::sort(v[i].begin(), v[i].end());
    sum += v[i][0];
  }
    return sum;
}
