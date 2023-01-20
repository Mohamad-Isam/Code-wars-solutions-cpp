#include <vector>

int findOdd(const std::vector<int>& numbers){
  //your code here
  
  for(int i = 0; i < numbers.size(); i++)
  {
    int count = 0;
    for(int j = 0; j < numbers.size(); j++)
      if(numbers[i] == numbers[j])count++;
    if(count % 2 == 1)return numbers[i];
  }
}
