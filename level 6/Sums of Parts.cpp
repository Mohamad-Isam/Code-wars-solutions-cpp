#include<vector>
#include <numeric>

std::vector<unsigned long long> partsSum(const std::vector<unsigned long long>& ls){
  std::vector<unsigned long long> v;
  unsigned long long num = accumulate(ls.begin(), ls.end(), 0);
  v.push_back(num);
  for(unsigned int i = 0; i < ls.size(); i++)
  {
    num -= ls[i];
    v.push_back(num);
  }
  return v;
}
