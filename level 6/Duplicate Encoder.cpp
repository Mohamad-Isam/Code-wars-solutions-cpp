#include <string>
std::string duplicate_encoder(const std::string& word){
  std::string s;
  for(int i = 0; i < word.length(); i++)
  {
    int repeated = 0;
    for(int j = 0; j < word.length(); j++)
    {
      if(i == j) continue;
      if(tolower(word[i]) == tolower(word[j]))
      {
        s += ')';
        repeated = 1;
        break;
      }
    }
    if(!repeated)
      s += '(';
  }
  return s;
}
