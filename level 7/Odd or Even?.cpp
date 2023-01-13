#include <string>
#include <vector>

std::string odd_or_even(const std::vector<int> &arr)
{
  int sum = 0;
  for(int i = 0; i < arr.size(); i++)
    sum += arr[i];
    return sum % 2 ? "odd" : "even";
}
