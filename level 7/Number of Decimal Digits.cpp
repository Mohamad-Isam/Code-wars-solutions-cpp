#include <stdint.h>

int digits(uint64_t n) {
  int num = 0;
  do
  {
    n /= 10;
    num++;
  } while(n);
  return num ;
}
