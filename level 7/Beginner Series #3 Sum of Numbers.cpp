int get_sum(int a, int b)
{
  int sum = 0;
  if(b <= a) std::swap(a, b);
    for(int i = a; i <= b; i++)
      sum += i;
  return sum;
}
