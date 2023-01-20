#include <string>
#include <algorithm>
std::string spinWords(const std::string &str)
{
  std::string s;
  std::string word;
  for(int i = 0; i < str.length(); i++)
  {
    
    if(str[i] == ' ')
    {
      if(word.length() >= 5) std::reverse(word.begin(), word.end());
      s += word + " ";
      word = "";
      continue;
    }
    if(i + 1 == str.length())
    {
      word += str[i];
      if(word.length() >= 5) std::reverse(word.begin(), word.end());
      s += word;
    }
    word += str[i];
  }
  return s;
}
