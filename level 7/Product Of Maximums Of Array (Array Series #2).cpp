#include <vector>

using namespace std; 

int maxProduct (vector<int>numbers , int sub_size)
{
  int sum = 1;
  std::sort(numbers.rbegin(), numbers.rend());
  for(int i = 0; i < sub_size; i++)
    sum *= numbers[i];
  return sum;
}
