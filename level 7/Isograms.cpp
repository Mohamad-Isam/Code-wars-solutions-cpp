bool is_isogram(std::string str) {
  for(int i = 0; i < str.length(); i++)
    for(int j = i + 1; j < str.length(); j++)
      if(tolower(str[i]) == tolower(str[j])) return false;

  return true;
}
