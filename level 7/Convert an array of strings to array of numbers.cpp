#include <vector>
#include <string>

std::vector<float> to_float_array(const std::vector<std::string>& arr) {
  std::vector<float> v;
  for(int i = 0; i < arr.size(); i++)
    v.push_back(std::stof(arr[i]));
  return v;
}
