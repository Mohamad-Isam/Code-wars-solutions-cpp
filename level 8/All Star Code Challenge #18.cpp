#include <string>

unsigned int strCount(std::string word, char letter){
  int counter = 0;
  for(int i = 0; i < word.length(); i++)
    if(word[i] == letter) counter++;
  return counter;
}
