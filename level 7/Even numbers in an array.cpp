#include <vector>

std::vector<int> evenNumbers(std::vector<int> arr, int n) {
  std::vector<int> v;
  int count = 0;
  for(int i = arr.size() - 1;; i--)
   { 
    if(count == n ) break;
    if(arr[i] % 2 == 0) {
      v.push_back(arr[i]);
      count++;
    }
    }
  reverse(v.begin(), v.end());
  return v;
}
