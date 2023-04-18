#include <string>
#include <vector>

class LongestConsec
{
public:
    static std::string longestConsec(const std::vector<std::string> &s, int k)
    {
      std::string result, word;
      if(s.size() == 0 || k > s.size()) return result;
      for(int i = 0; i <= (int)s.size() - k; i++)
      {
        for(int j = 0; j < k; j++)
          word += s[i + j];
        
        if(word.size() > result.size())
          result = word;
        word = "";
      }
      return result;
    }
};
