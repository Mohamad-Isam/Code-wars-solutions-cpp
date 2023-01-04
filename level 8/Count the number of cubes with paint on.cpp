#include<cmath>
int countSquares(int cuts)
{
   return cuts? pow(cuts + 1, 3) - pow(cuts - 1, 3) : 1;
}
