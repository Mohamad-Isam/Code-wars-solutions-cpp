std::string cleanString(const std::string &s) {
  std::string result = "";
    for(char a : s)
    {
      if(a == '#')
      {
        if(result.length() >= 1)
          result.pop_back();
        continue;
      }
      result += a;
    }
  return result;
}
