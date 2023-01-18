#include <string>
#include <math.h> 

using namespace std; 

string autoMorphic (int number)
{
  int n = log10(number) + 1;
  int numsOfDigits = pow(10, n);
  return ((number * number) % numsOfDigits == number)? "Automorphic" : "Not!!";
}
