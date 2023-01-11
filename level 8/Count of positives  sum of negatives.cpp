#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
  std::vector<int> v;
  if(input.size() < 1) return v;
    int sum = 0, count = 0;
  for(int i = 0; i < input.size(); i++)
    if(input[i] < 0)
      sum += input[i];
    else if(input[i] > 0)
      count++;
  v.push_back(count);
  v.push_back(sum);
  return v;
}
