#include <string>
bool solution(std::string const &str, std::string const &ending) {
  for(int i = ending.length() - 1; i >= 0; i--)
    if(ending[i] != str[i + str.length() - ending.length()])
      return false;
    return true;
}
