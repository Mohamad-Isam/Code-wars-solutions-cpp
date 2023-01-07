#include <array>
#include <string>

std::array<std::string, 3> fixTheMeerkat(std::array<std::string, 3> arr) {
  std::string temp;
  temp = arr[0];
  arr[0] = arr[2];
  arr[2] = temp;
  return arr;
}
