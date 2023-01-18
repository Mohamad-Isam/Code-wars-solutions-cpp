std::string capitalize(std::string s, std::vector<int> idxs)
{
  for(size_t i = 0; i < idxs.size(); i++)
  {
    if(idxs[i] < s.length())
      s[idxs[i]] = toupper(s[idxs[i]]);
  }
  return s;
}
