#include <vector>
#include <stdexcept>
#include <cmath>

class NewAverage
{
public:
   static long long newAvg(std::vector<double> &arr, double navg){
     double sum = 0.0; long double x;
     for(size_t i = 0; i < arr.size(); i++)
       sum += arr[i];
     x = navg * (arr.size() + 1) - sum;
     if(x > 0) return ceil(x);
     else throw std::logic_error("NewAverage::newAvg(arr1, 2)");
     
     
   }
};
