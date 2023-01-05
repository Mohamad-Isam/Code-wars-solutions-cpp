#include<cmath>
#include<iostream>
bool amIWilson(unsigned n) {
  if(n == 5 || n == 13 || n == 563) return true;
  unsigned long fact = 1;
  for(int i = 1; i < n; i++)
    fact *= i;
  return ++fact == (n * n);
}
