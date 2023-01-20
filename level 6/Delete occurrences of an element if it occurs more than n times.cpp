std::vector<int> deleteNth(std::vector<int> arr, int n)
{
  int count = 0;
  for(unsigned int i = 0; i < arr.size(); i++)
  {
    for(unsigned int j = i; j < arr.size(); j++)
    {
      if(arr[i] == arr[j]) count++;
      if(arr[i] == arr[j] && count > n)
      {
        arr.erase(arr.begin() + j);
        j--;
      }
    }
    count = 0;
  }
  return arr;
}
