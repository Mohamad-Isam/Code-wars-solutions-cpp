#include <string>

bool isAnagram(std::string test, std::string original){
  for(int i = 0; i < test.length(); i++)
  {
    test[i] = tolower(test[i]);
    original[i] = tolower(original[i]);
  }
  std::sort(test.begin(), test.end());
  std::sort(original.begin(), original.end());
  return test == original;
}
