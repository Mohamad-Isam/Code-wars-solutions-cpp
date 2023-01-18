class MaxDiffLength
{
public:
    static int mxdiflg(std::vector<std::string> &a1, std::vector<std::string> &a2);
};

bool compare(std::string &s1,std::string &s2)
{
    return s1.size() < s2.size();
}

int MaxDiffLength::mxdiflg(std::vector<std::string> &a1, std::vector<std::string> &a2){
  if (a1.empty() || a2.empty()) return -1 ; 
  std::sort(a1.begin(), a1.end(), compare);
  std::sort(a2.begin(), a2.end(), compare);
  return std::max(a1[a1.size()-1].length()-a2[0].length(),a2[a2.size()-1].length()-a1[0].length()); 
}
