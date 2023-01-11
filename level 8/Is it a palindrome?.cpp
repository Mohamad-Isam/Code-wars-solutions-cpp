#include <string>

bool isPalindrom (const std::string& str)
{
  
    for(int i = 0; i < str.length(); i++)
      if(tolower(str[i]) != tolower(str[str.length() - i - 1])) return false;
  return true;
  
}
