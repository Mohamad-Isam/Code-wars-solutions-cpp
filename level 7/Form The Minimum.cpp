#include <vector>

using namespace std; 

unsigned long long minValue (vector <int> values)
{
  
  std::sort(values.begin(), values.end());
  int sum = values[0];
  for(int i = 1; i < values.size(); i++)
  {
    if(values[i] == values[i - 1]) continue;
    sum *= 10;
    sum += values[i];
  }
 return sum ; 
}
