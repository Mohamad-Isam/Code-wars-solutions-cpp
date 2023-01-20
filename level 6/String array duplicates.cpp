std::vector<std::string> dup(std::vector<std::string> arr){    
    std::vector<std::string> v;
    std::string word;
  for(unsigned int i = 0; i < arr.size(); i++)
  {
    for(unsigned int j = 0; j < arr[i].length(); j++)
    {
      if(j == 0)word += arr[i][j];
      else if(arr[i][j] != arr[i][j - 1]) word += arr[i][j];
    }
    v.push_back(word);
    word = "";
  }
  return v;
}
