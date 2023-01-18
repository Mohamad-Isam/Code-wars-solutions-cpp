#include <vector>

using namespace std; 

int maxTriSum (vector <int> numbers)
{
  std::sort( numbers.begin(), numbers.end() );
numbers.erase( unique( numbers.begin(), numbers.end() ), numbers.end() );
  std::sort(numbers.rbegin(), numbers.rend());
  return numbers[0] + numbers[1] + numbers[2];
}
