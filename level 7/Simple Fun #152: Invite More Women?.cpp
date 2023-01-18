#include <vector>
#include <numeric>
bool invite_more_women(const std::vector<int> &invited) {
  
  return accumulate(invited.begin(), invited.end(), 0) > 0;
}
