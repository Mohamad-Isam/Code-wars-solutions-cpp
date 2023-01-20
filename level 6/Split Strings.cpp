std::vector<std::string> solution(const std::string &s)
{
  std::vector<std::string> v;
  for(int i = 0; i < s.length(); i += 2)
    v.push_back(s.substr(i, 2));
  if(s.length() % 2) v[v.size() - 1] += "_";
    return v; }
