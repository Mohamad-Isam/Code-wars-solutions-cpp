std::vector<double> averages(std::vector<int> numbers)
{
    std::vector<double> result;
  if(numbers.empty()) return result;
  for(int i = 0; i < numbers.size() - 1; i++)
    result.push_back((numbers[i] + numbers[i + 1]) / 2.0);

    return result;
}
