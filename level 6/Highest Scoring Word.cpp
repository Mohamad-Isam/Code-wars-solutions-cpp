#include <string>

std::string highestScoringWord(const std::string &str)
{
  int score = 0, max = 0;
  std::string word, maxWord;
  for(unsigned int i = 0; i < str.size(); i++)
  {
    if(str[i] == ' ')
    {
      if(score > max){max = score; maxWord = word;}
      score = 0;
      word = "";
      continue;
    }
    word += str[i];
    score = score + (str[i] - 96);
  }
  if(score > max)
    maxWord = word;
  return maxWord;
}
