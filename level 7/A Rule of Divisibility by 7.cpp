class DivSeven
{
public:
    static std::pair <long long, long long> seven(long long m){
      int count = 0;
      while(m >= 100)
      {
        m = m / 10 - 2 * (m % 10);
        count++;
      }
      return {m, count};
    }
};
