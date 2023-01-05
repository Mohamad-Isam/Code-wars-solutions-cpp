std::string evil(int n)
{
  int sum = 0;
  while(n > 0)
  {
    sum += n % 2;
    n /= 2;
  }
  return sum % 2 ?  "It's Odious!" : "It's Evil!";
}
