#include <vector>

std::vector<int> get_even_numbers(const std::vector<int>& arr) {
std::vector<int> v;
  for(int i = 0; i < arr.size(); i++)
    if(arr[i] % 2 == 0) v.push_back(arr[i]);
  return v;
  
}
