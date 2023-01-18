#include <vector>

using namespace std; 

vector<int> arrayLeaders(const vector<int>& numbers)
{
  vector<int> v;
  int sum = 0;
  for(size_t i = 0; i < numbers.size(); i++)
  {
    for(size_t j = i + 1; j < numbers.size(); j++)
      sum += numbers[j];
    if(numbers[i] > sum)
      v.push_back(numbers[i]);
    sum = 0;
  }
  return v;
}
