int countSmileys(std::vector<std::string> arr)
{
  int count = 0;
  for(int i = 0; i < arr.size(); i++)
  {
    if(arr[i] == ":D" || arr[i] == ";D" || arr[i] == ":-D" || arr[i] == ";-D" || arr[i] == ":~D" || arr[i] == ";~D" || arr[i] == ":)" || arr[i] == ";)" || arr[i] == ":-)" || arr[i] == ";-)" || arr[i] == ":~)" || arr[i] == ";~)") count++;
  }
  return count;
}
