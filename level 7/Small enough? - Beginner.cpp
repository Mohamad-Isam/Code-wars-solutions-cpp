#include <vector>

bool small_enough(std::vector<int> arr, int limit) {
  for(int i = 0; i < arr.size(); i++) if(arr[i] > limit) return false;
  return true;
}
