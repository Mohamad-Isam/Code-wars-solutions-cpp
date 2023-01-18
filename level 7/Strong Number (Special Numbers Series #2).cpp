#include <string>
using namespace std; 

int factorial(int num){
  int fact = 1;
  for(int i = 1; i <= num; i++)
    fact *= i;
  return fact;
}

string strong_num (int number )
{
    int n = number, sum = 0;
  while(n){
    sum += factorial(n % 10);
    n /= 10;
  }
  return sum == number ? "STRONG!!!!" : "Not Strong !!";
}
