#include <string>
using namespace std ; 

string reverseString (string str )
{
  std::string s;
  for (int i = str.length() - 1; i >= 0; i--)
    s += str[i];
  return s ;
}
