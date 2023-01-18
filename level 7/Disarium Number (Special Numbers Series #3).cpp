#include <string>
#include <cmath>
using namespace std; 

string disariumNumber (int number )
{
  int n = to_string(number).length(), sum = 0, m = number;
  for(int i = n; i > 0; i--, m /= 10)
    sum += pow(m % 10, i);
  return number == sum ? "Disarium !!" : "Not !!";
}
