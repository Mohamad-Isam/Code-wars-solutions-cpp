#include <vector>

using namespace std;
vector<vector<int>> multiplication_table(int n){
  vector<vector<int>> result;
  vector<int> v;
  int N = n;
  for(int i = 1; i <= n; i++)
  {
    N = n;
    for(int j = i; j <= n * i; j += i)
    {
      v.push_back(j);      
    }
    result.push_back(v);
    v.clear();
  }
  return result;
}
