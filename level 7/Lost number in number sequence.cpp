using namespace std;
#include <numeric>
int findDeletedNumber(list<int> l, list<int> ml)
{
    return l.size() * (l.size() + 1) / 2 - accumulate(ml.begin(), ml.end(), 0);;
}
