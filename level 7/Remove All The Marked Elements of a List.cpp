#include <vector>

std::vector<int> remove_values(std::vector<int> integers, std::vector<int> values) {
  for(size_t i = 0; i < values.size(); i++)
  {
    for(auto j = integers.begin(); j != integers.end(); j++)
      if(values[i] == *j) {integers.erase(j); --j;}
  }
  return integers;
}
