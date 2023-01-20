#include <vector>

class Same {
public :
    static bool comp(std::vector<int>&a, std::vector<int>&b) {
      for(auto &v : a)
        v = v * v;
      std::sort(a.begin(), a.end());
      std::sort(b.begin(), b.end());
      return a == b;
    }
};
