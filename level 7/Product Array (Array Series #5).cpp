#include <vector>

using namespace std; 

vector <int> productArray (vector <int> numbers)
{
  vector<int> v;
  int product = 1;
  for(size_t i = 0; i < numbers.size(); i++)
    product *= numbers[i];
  for(size_t i = 0; i < numbers.size(); i++)
    v.push_back(product / numbers[i]);
  return v;
}
