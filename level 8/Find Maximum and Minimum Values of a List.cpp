#include <vector>
using namespace std;

int min(vector<int> list){
  int smallest = list[0];
  for(int x : list)
    if(x < smallest) smallest = x;
    
    return smallest;
}

int max(vector<int> list){
    int greatest = list[0];
  for(int x : list)
    if(x > greatest) greatest = x;
    return greatest;
}
