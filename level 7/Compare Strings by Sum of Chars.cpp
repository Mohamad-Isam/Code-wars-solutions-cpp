bool compare(std::string s1, std::string s2)
{
  int sum1 = 0, sum2 = 0;
    for(auto a : s1)
      {
      if(toupper(a) >= 'A' && toupper(a) <= 'Z')
        sum1 += toupper(a);
      else{sum1 = 0; break;}
      }

    for(auto b : s2)
      {
      if(toupper(b) >= 'A' && toupper(b) <= 'Z')
        sum2 += toupper(b);
      else{sum1 = 0; break;}
    }

  return sum1 == sum2;
}
