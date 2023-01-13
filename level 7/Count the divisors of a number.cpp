int divisors(int n){  
  int nums = 0;
  for(int i = 1; i <= n; i++)
    if(!(n % i)) nums++;
  return nums;
}
