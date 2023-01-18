long long reverseNumber(long long n) {
  int num = 0;
  for(;n; n /= 10)
    num = num * 10 + n % 10;
  return num;
}
