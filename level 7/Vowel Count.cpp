#include <string>

using namespace std;

int getCount(const string& inputStr){
  int num_vowels = 0;
  //your code here
  for(int i = 0; i < inputStr.length(); i++)
  {
    if(inputStr[i] == 'a' || inputStr[i] == 'A')
    {
      num_vowels++;
    }
    if(inputStr[i] == 'e' || inputStr[i] == 'E')
    {
      num_vowels++;
    }
    if(inputStr[i] == 'i' || inputStr[i] == 'I')
    {
      num_vowels++;
    }
    if(inputStr[i] == 'o' || inputStr[i] == 'O')
    {
      num_vowels++;
    }
    if(inputStr[i] == 'u' || inputStr[i] == 'U')
    {
      num_vowels++;
    }
  }
  return num_vowels;
}
