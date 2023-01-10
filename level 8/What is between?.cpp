#include <vector>

std::vector<int> between(int start, int end) {
  std::vector<int> v;
  for(int i = start; i <= end; i++)
    v.push_back(i);
  return v;
}  
