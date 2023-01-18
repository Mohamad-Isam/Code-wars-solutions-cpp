#include<cmath>
std::string seriesSum(int n)
{
  double sum = 0;
    for(int i = 0; i < n; i++)
      sum += (1.0 / (1 + 3 * i));
  std::string s = std::to_string(floor(sum * 100 + 0.5) / 100);
  s.erase(4);
  return s;
}
