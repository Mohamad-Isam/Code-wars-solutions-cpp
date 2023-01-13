std::vector<std::string> number(const std::vector<std::string> &lines)
{
  std::vector<std::string> v;
  for(int i = 0; i < lines.size(); i++)
  {
    v.push_back(std::to_string(i + 1) + ": " + lines[i]);
  }
    return v;
}
