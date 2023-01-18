std::vector<int> solve(std::string s){
    int up = 0, low = 0, nums = 0, special = 0;
  for(auto a : s)
  {
    if(a >= 'A' && a <= 'Z')up++;
    else if(a >= 'a' && a <= 'z')low++;
    else if(a >= '0' && a <= '9')nums++;
    else special++;
  }
  return {up, low, nums, special};
}
