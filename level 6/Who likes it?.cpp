std::string likes(const std::vector<std::string> &names)
{
  if(names.size() < 1)return "no one likes this";
  if(names.size() == 1) return (names[0] + " likes this");
  if(names.size() == 2)
  {
    std::string s = names[0] + " and ";
    s += names[1];
    s += " like this";
    return s;
  }
  if(names.size() == 3)
  {
    std::string s = names[0] + ", ";
    s += names[1] + " and ";
    s += names[2] + " like this";
    return s;
  }
  if(names.size() > 3)
  {
   std::string s = names[0] + ", ";
    s += names[1] + " and ";
    s += std::to_string(names.size() - 2);
    s += " others like this";
    return s;
  }
    return ""; // Do your magic!
}
