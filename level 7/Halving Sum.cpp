unsigned halving_sum(unsigned n) {
  int sum = 0;
  for(; n; n /= 2)
    sum += n;
  return sum;
}
