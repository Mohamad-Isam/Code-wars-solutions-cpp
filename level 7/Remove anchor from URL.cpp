std::string replaceAll(std::string str) {
  std::string s;
  for(int i = 0; i < str.length(); i++)
  {
    if(str[i] == '#')break;
    s = s +  str[i];
  }
  return s;
}
