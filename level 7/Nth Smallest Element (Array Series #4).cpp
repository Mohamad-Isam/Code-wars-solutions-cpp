#include <vector>
using namespace std ;

int nthSmallest (vector<int> passed , int nSmallest)
{
sort(passed.begin(), passed.end());
return passed[nSmallest - 1]; 
}
