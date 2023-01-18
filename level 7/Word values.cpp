std::vector<int> wordValue(std::vector <std::string> arr){
	std::vector<int> v;int total = 0;
  for(size_t j = 0; j < arr.size(); j++)
  {
    for(size_t i = 0; i < arr[j].length(); i++)
      if(arr[j][i] != ' ') total += (arr[j][i] - 96);
    v.push_back(total * (j + 1));
    total = 0;
  }
  return v;
    
}
