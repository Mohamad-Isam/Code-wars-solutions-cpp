#include <string>

std::string balancedNum (unsigned long long int number )
{
   std::string str = std::to_string(number);
  int balance = 0;
  for(int i = 0, j = str.size()/2 + 1; j < str.size(); ++i, ++j)
  {
    balance += str[i];
    balance -= str[j];
  }
  return balance == 0? "Balanced" : "Not Balanced";
}
