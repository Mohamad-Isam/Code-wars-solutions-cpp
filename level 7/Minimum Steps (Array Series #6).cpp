#include <vector>

using namespace std; 

int minimumSteps (vector <int> numbers ,  int input)
{
  sort(numbers.begin(), numbers.end());
  int count = 0, sum = numbers[0];
  for(size_t i = 1; sum < input; i++, count++)
    sum += numbers[i];
  
  return count;
}
