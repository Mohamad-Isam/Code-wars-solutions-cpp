std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {
  for(unsigned int i = 0; i < numbers.size(); i++)
  {
    for(unsigned int j = 0; j < numbers.size(); j++)
    {
      if(i == j)continue;
      if(numbers[i] + numbers[j] == target)
        return {i, j};
    }
  }
}
