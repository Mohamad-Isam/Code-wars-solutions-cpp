#include <vector>

unsigned int most_frequent_item_count(const std::vector<int>& v) {
  int result = 0;
  for(int i = 0; i < v.size(); i++)
  {
    int count = 0;
    for(int j = 0; j < v.size(); j++)
      if(v[i] == v[j])count++;
    if(count > result) result = count;
    count = 0;
  }
  return result;
}
