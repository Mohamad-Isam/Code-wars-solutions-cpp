std::string get_middle(std::string input) 
{
  std::string s;
  int x = input.length();
  return x % 2 ?  s += input[x / 2] : s + input[x / 2 - 1] + input[x / 2];
    
}
