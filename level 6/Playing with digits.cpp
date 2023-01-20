#include <math.h>
class DigPow
{
public:
  static int digPow(int n, int p)
  {
    int num = n, sum = 0, i = log10(n);//gets the number of digits - 1.
    for(num; num > 0; num /= 10)
    {
      sum += pow(num % 10, p + i);//start counting from the right to left.
      i--;
    }
        return (sum % n == 0)?(sum/n):-1;
    }
};
