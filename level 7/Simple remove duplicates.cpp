#include <vector>
using namespace std;
vector<int> solve(vector<int> vec){    
    for(int i = 0; i < vec.size() - 1; i++)
      for(int j = i + 1; j < vec.size(); j++)
        if(vec[i] == vec[j])
          vec.erase(vec.begin() + i--);
  return vec;
}
