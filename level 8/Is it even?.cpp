#include<cmath>
bool is_even(double n)
{
  return ceil(n) > n ? false : int(n) % 2 == 0? true : false;
}
