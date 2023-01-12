# include <string>

std::string disemvowel(const std::string& str) {
  std::string s;
  for(int i = 0; i < str.length(); i++)
  {
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
      continue;
    s += str[i];
  }
    return s;
}
