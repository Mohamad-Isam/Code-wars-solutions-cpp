#include<cmath>
uint32_t amount_of_pages(uint32_t summary){
  uint32_t i, sum = 0;
  for(i = 0; sum < summary; i++)
    sum += log10(i) + 1;
  
  return --i;
}
