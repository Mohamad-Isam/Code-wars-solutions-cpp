std::vector<int> maps(const std::vector<int> & values) {
  std::vector<int> x;
  for(int i = 0; i < values.size(); i++)
    x.push_back(2 * values[i]);
  return x;
}
