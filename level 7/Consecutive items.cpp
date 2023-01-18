bool consecutive(std::vector<int>arr, int a,int b){
  for(size_t i = 1; i < arr.size(); i++)
    if((arr[i] == a && arr[i - 1] == b) || (arr[i] == b && arr[i - 1] == a))
      return true;
  return false;
}
