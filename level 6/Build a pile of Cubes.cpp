class ASum
{
  public:
  static long long findNb(long long m){
    long long n = 1;
    while(m > 0)
    {
      m -= (n * n * n);
      n += 1;
    }
    return !m ? --n : -1;
  }
};
