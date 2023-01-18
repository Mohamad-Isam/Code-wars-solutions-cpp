#include <string>
#include <cmath>

using namespace std; 

string jumpingNumber (int number)
{
  string s = to_string(number);
  for(size_t i = 0; i < s.length() - 1; i++)
    if(abs(s[i] - s[i + 1]) != 1) return "Not!!";
  return "Jumping!!";
}
