std::string is_sorted_and_how(std::vector<int> array)
{
  int sum = 1000;
    for(int i = 1; i < array.size(); i++)
      if(array[i] >= array[i - 1]) continue;
      else sum--;
  return sum == 1000 ? "yes, ascending" : sum + array.size() - 1 == 1000 ? "yes, descending" : "no"; 
}
