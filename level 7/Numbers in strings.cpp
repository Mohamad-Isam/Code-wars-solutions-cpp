int solve(std::string s){
  std::string num = "0";
  int maxim = 0;
    for(size_t i = 0; i < s.length(); i++)
    {
      if(!(s[i] >= 'a' && s[i] <= 'z')) num += s[i];
      else{
        if(maxim < stoi(num))  maxim = stoi(num);
        num = "0";
        }
    }
  if(maxim < stoi(num))
          maxim = stoi(num);
  return maxim;
}
