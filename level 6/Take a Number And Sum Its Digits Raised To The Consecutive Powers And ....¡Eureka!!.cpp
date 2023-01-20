#include <vector>
#include <cmath>
bool eureka(int n){
  int N = n;
  int p = log10(n) + 1, y = 0;
  while(n){
    y += pow(n % 10, p);
    n /= 10;
    p--;
  }
  return y == N;
}

std::vector<unsigned int> sumDigPow(unsigned int a, unsigned int b) {
  std::vector<unsigned int> v;
  for(unsigned int i = a; i <= b; i++)
  {
    if(eureka(i))v.push_back(i);
  }
  return v;
}
