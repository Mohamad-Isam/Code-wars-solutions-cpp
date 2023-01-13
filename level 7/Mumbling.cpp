class Accumul
{
public:
    static std::string accum(const std::string &s) {
      std::string str;
      for(int i = 0; i < s.length(); i++)
      {
        for(int j = i; j >= 0; j--)
          if(j == i)
            str += toupper(s[i]);
          else
            str += tolower(s[i]);
        
        if(i + 1 < s.length())
          str += "-";
      }
      return str;
    }
};
