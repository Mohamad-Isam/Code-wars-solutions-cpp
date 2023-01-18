std::string solve(std::string a, std::string b) {
    std::string s1, s2;
    size_t a1 = a.length(), b1 = b.length();
  for(size_t i = 0; i < a1; i++)
    for(size_t j = 0; j < b1; j++)
      {if(a[i] == b[j])break;
      if(j + 1 == b1) s1 += a[i];}
  for(size_t i = 0; i < b1; i++)
    for(size_t j = 0; j < a1; j++)
      {if(b[i] == a[j])break;
      if(j + 1 == a1) s2 += b[i];}
  return s1 + s2;
}
