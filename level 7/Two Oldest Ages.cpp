#include <vector>
#include <array>

std::array<int, 2> two_oldest_ages(std::vector<int> ages)
{
  int max1 = 0, max2 = 0;
  for(auto n : ages)
    if(n > max1)
    {
      max2 = max1;
      max1 = n;
    }
    else if(n > max2) max2 = n;
    return {max2, max1};
}
