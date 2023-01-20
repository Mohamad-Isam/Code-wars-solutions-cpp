#include <string>
#include <bits/stdc++.h>

std::string alphabet_position(const std::string &text) {
  std::string s;
  int numOfLetters = 0;
  for(int i = 0; i < text.length(); i++) //this loop is to count numbers of letters
  {
    if(tolower(text[i]) >= 97 && tolower(text[i]) <= 122)
      numOfLetters++;
  }
  for(int i = 0; i < text.length(); i++)
  {
    if(tolower(text[i]) >= 97 && tolower(text[i]) <= 122)
    {
      s += std::to_string(tolower(text[i]) - 'a' + 1);
      if(numOfLetters > 1)
        s += ' ';
      numOfLetters--;
    }
  }
  return s;
}
