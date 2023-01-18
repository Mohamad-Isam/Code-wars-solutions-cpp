#include <vector>

using namespace std; 

int adjacentElementsProduct(vector<int> v) 
  {
      int maximum = v[0] * v[1];
  for(int i = 2; i < v.size(); i++)
    if(v[i] * v[i - 1] >= maximum) maximum =  v[i] * v[i - 1];
        return maximum ;
  }
