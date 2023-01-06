#include <vector>
int sumOfDifferences(const std::vector<int>& arr){
  std::vector <int> v = arr;
  if(v.size() <= 1) return 0;
  std::sort(v.rbegin(), v.rend());
  int sum = 0;
  for(int i = 0; i < v.size() - 1; i++)
    sum += (v[i] - v[i + 1]);
  return sum;
}
