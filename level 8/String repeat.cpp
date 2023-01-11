#include <string>

std::string repeat_str(size_t repeat, const std::string& str) {
  std::string s;
  for(int i = 0; i < repeat; i++)
    s += str;
  return s;
}
