std::string reverse_words(std::string str)
{
  std::string word;
  std::string s;
  for(int i = 0; i < str.length(); i++)
  {
    if(str[i] == ' ')
    {
      s += word + str[i];
      word = "";
      continue;
      
    }
//     summing the letter before the word.
    word = str[i] + word;
  }
  s += word;
  return s;
}
