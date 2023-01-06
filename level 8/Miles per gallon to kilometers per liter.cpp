#include<cmath>
double converter(int mpg)
{
    return int(round(mpg * 1.609344 / 4.54609188 * 100)) / 100.0;
}
