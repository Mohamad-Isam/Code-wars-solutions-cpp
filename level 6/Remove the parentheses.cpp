#include <string>

std::string remove_parentheses(const std::string &str)
{
    std::string s;
  int count = 0;
  for(char a : str)
  {
    if(a == '(') --count;
    if(a == ')') {count++; continue;}
    if(count >= 0) s += a;
  }
  return s;
}
