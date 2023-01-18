#include <string>

int largest_five_digits(const std::string &s)
{
int maxi = 0, num;
  for(int i = 0; i < s.length() - 4; i++)
  {
    num = (s[i] - '0') * 10000 + (s[i + 1] - '0') * 1000 + (s[i + 2] - '0') * 100 + (s[i + 3] - '0') * 10 + (s[i + 4] - '0');
    if(num >= maxi)
    {
      maxi = num;
      num = 0;
    }
  }
  return maxi;
}
