#include <vector>

using namespace std;

int minSum (vector<int>passed)
{
  int sum = 0;
  sort(passed.begin(), passed.end());
  for(int i = 0; i < passed.size() / 2; i++)
    sum += passed[i] * passed[passed.size() - 1 - i];
  return sum;
}
