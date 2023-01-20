float find_uniq(const std::vector<float> &arr)
{
  if(arr[0] != arr[1] && arr[0] != arr[2]) return arr[0];
  for(unsigned int i = 1; i < arr.size(); i++)
    if(arr[i] != arr[0]) return arr[i];
}
