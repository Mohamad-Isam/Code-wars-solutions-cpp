#include <utility>
#include <vector>

std::vector<std::pair<int, int>> twos_difference(const std::vector<int> &vec) {
  std::vector<std::pair<int, int>> v;
  std::vector<int> list = vec;
  sort(list.begin(), list.end());
  
  for(int i = 0; i < list.size(); i++)
  {
    for(int j = i; j < list.size(); j++)
      if(list[i] - list[j] == 2 || list[j] - list[i] == 2)
        v.push_back({list[i], list[j]});
  }
  return v;
}
