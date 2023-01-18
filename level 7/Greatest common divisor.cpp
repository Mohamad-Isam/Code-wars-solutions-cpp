long long mygcd(long long a, long long b) {
  while(a != b)
    (a > b)? a -= b : b -= a;
  return a;
}
