#include <vector>

int save(std::vector<int> sizes, int hd) {
  int count = 0, sum = 0;
  for(size_t i = 0; i < sizes.size(); i++)
  {
    sum += sizes[i];count++;
    if(sum > hd){--count; break;}
  }
  return count;
}
