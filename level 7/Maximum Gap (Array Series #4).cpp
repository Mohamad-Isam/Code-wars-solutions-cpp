#include <vector>

using namespace std; 

int maxGap (vector <int> numbers)
{
  sort(numbers.begin(), numbers.end());
  int res = 0, dif = 0;
  for(size_t i = 1; i < numbers.size(); i++)
  {
    dif = abs(numbers[i] - numbers[i - 1]);
    if(dif > res)res = dif;
  }
  return res;
}
