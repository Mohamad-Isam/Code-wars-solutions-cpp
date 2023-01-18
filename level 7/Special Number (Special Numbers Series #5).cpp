#include <string>

using namespace std; 

string specialNumber (int number)
{
  for(;number;number /= 10)
    if((number % 10) > 5) return "NOT!!";
  
  return "Special!!";
}
