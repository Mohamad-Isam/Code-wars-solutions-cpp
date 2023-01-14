std::string reverse_letter(const std::string &str)
{
  std::string s;
  for(int i = 0; i < str.length(); i++)
    if(str[i] >= 'a' && str[i] <= 'z') s = str[i] + s;
    return s; 
}
