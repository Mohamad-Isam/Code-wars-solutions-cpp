#include <vector>

std::vector<std::vector<int> > matrixAddition(std::vector<std::vector<int> > a,std::vector<std::vector<int> > b){
  std::vector<std::vector<int> > result;
  std::vector<int> v;
  for(unsigned int i = 0; i < a.size(); i++)
  {
    for(unsigned int j = 0; j < b.size(); j++)
      v.push_back(a[i][j] + b[i][j]);
    
    result.push_back(v);
    v.clear();
  }
  return result;
}
