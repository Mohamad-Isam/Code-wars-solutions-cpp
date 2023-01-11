bool PythagoreanTriple(const int a, const int b, const int c)
{
  if( a*a + b*b == c*c) return true;
  if(a*a + c*c == b*b) return true;
  if(b*b + c*c == a*a) return true;
  return false;
}
