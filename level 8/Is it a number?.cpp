bool is_digit(std::string s) {
  for(int i = 0; i < s.length(); i++)
  {
    switch(s[i])
    {
        case '.' : case '0' ... '9': continue;
        case '-' : if(i == 0)continue;
        default : return false;
    }
  }
  return s.size();
}
