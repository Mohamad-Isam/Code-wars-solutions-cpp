#include <vector>
char add_letters(std::vector<char> letters) {
//   'a' == 97 && nums of letters 26.
  int num = 0;
  if(letters.size() < 1 || (letters.size() == 1 && letters[0] == 'z')) return 'z';
  for(int i = 0; i < letters.size(); i++)
  {
    letters[i] = letters[i] - 96;
    num += letters[i];
  }
  if(num % 26 == 0) return 'z';
  return num <= 26 ? num + 96 : num % 26 + 96;
}
