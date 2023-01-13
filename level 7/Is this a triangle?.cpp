namespace Triangle
{
  bool isTriangle(long a, long b, long c)
  {
    if(a <= 0 || b <= 0 || c <= 0) return false;
    if(a + b <= c || a + c <= b || b + c <= a)return false;
    return true;
  }
};
