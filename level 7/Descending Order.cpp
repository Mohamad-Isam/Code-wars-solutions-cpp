#include <cinttypes>
#include <string>

uint64_t descendingOrder(uint64_t a)
{
  std::vector<int> c;
  for(a; a > 0; a /= 10)
    c.push_back(a % 10);
    for(int i = 0; i < c.size(); i++)
      for(int j = i; j < c.size(); j++)
        if(c[i] < c[j])
          std::swap(c[i], c[j]);
  a = 0;
  for(int i = 0; i < c.size(); i++)
    a = a * 10 + c[i];
  return a;
}
