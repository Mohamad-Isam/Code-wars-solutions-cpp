unsigned int squaresNeeded(long long n) {
  int count = 0;
  for(;n; n /= 2)
    count++;
  
  return count;
}
