#include<bits/stdc++.h>
class TwoToOne
{
public:
    static std::string longest(const std::string &s1, const std::string &s2){
      std::string s = s1 + s2;
      sort(s.begin(), s.end());
      std::string str;
      for(int i = 0; i < s.length(); i++)
      { 
        if(s[i] == s[i - 1]) continue;
        str += s[i];
        
      }
      return str;
      
    }
};
