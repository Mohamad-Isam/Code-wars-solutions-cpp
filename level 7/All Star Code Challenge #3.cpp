#include <string>

std::string remove_vowels(const std::string& str) {
  std::string s;
  for(auto a : str)
    if(a != 'a' && a != 'e' && a != 'i' && a != 'o' && a != 'u') s += a;
  return s;
}
