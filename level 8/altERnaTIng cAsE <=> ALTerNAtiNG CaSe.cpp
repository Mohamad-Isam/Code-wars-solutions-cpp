std::string to_alternating_case(const std::string& str)
{
  std::string s;
  for(int i = 0; i < str.length(); i++)
  {
    if(islower(str[i])) 
    {s += toupper(str[i]); continue;}
    if(isupper(str[i])) 
    {s += tolower(str[i]); continue;}
    s += str[i];
  }
	return s;
}
