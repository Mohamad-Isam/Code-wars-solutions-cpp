#include <string>
int find_short(std::string str){
  int min = 270, counter = 0;
  for(auto ch : str)
    {if(ch == ' ') min > counter? min = counter : counter = 0;
    else counter++;}
  return min < counter ? min : counter;
}
