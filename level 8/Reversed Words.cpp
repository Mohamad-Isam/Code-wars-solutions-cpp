#include <string>

std::string reverse_words(const std::string& str) {
  std::vector<std::string> words;
  std::string word;
//   first we split the words in string , add them to a vector
  for(int i = 0; i < str.length(); i++)
  {
    if(str[i] == ' ')
    {
      words.push_back(word);
      word = "";
      continue;
    }
    word += str[i];
  }
  words.push_back(word);
  word = "";
//   now we have the words in the vector we need to bring them back
//   to the word string but from last to the first
  for(int i = words.size() - 1; i >= 0; i--)
  {
    word += words[i];
    if(i > 0)
      word += ' ';
  }
  return word;
}
