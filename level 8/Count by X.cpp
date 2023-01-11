#include <vector>
std::vector<int> countBy(int x,int n){
  std::vector<int> v;
  for(int i = x; i <= x * n; i += x)
    v.push_back(i);
  return v;
}
