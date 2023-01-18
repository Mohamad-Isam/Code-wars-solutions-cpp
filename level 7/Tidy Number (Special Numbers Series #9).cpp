#include <string>

using namespace std; 


bool tidyNumber (int number)
{
  int digit = number % 10, n = 1;
  for(;number; number /= 10) 
    (digit < number % 10) ? n = 0 : digit = number % 10;
  return n;
}
