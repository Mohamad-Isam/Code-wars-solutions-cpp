#include <vector>

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
  long lowone = 0x7fffffff;
  long lowtwo = 0x7fffffff;
  for(auto x : numbers)
    if(x < lowone)
    {
      lowtwo = lowone;
      lowone = x;
    }
    else if(x < lowtwo)
      lowtwo = x;
  return lowone + lowtwo ; 
}
