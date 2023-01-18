class Printer
{
public:
    static std::string printerError(const std::string &s){
      int count = 0;
      for(auto c : s)
        if(tolower(c) >109) count++;
      return std::to_string(count) + "/" + std::to_string(s.length());
    }
};
