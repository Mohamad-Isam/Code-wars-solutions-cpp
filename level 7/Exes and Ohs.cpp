bool XO(const std::string& str)
{
  int x = 0, o = 0;
  for(int i = 0; i < str.length(); i++)
  {
    if(tolower(str[i]) == 'x') x++;
    if(tolower(str[i]) == 'o') o++;
  }
  return x == o;
}
