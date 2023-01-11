#include <vector>
#include <string>

std::vector<std::string> string_to_array(const std::string& s) {
  std::string word = "";
  std::vector<std::string> v;
  if(s.length() < 1) v.push_back(word);
  for(int i = 0; i < s.length(); i++)
  {
    if(s[i] == ' ')
    {
      v.push_back(word);
      word = "";
      continue;
    }
    word += s[i];
    if(i == s.length() - 1)
      v.push_back(word);
  }
  return v;
}
