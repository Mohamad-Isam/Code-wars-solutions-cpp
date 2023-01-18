#include <vector>
#include <string>

std::vector<int> solve(const std::vector<std::string>& arr) {  
  // a = 97
  std::vector<int> v;
  int sum = 0;
  for(int i = 0; i < arr.size(); i++)
    {
    for(int j = 0; j < arr[i].length(); j++)
      if(tolower(arr[i][j]) - 97 == j) sum++;
    v.push_back(sum);
    sum = 0;
  }
    return v;
};
