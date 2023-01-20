#include <cmath>
bool narcissistic( int value ){
  int n = value, sum = 0, i = log10(value) + 1; //gets the number of digits
  while(n)
  { 
    sum += pow(n % 10, i);
    n /= 10; 
  } return sum == value;
}
