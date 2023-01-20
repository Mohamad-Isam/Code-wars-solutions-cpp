  bool isPrime(int num) {
  if (num < 2)
    return false;
  int x = sqrt(num);
  for (int i = 2; i <= x; i++)
    if (num % i == 0) return false;
  return true;
}
