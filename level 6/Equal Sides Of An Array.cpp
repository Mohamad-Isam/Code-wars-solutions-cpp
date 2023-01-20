#include <vector>

using namespace std;

int find_even_index (const vector <int> numbers) {
  int right = 0;
  for(int i : numbers)
    right += i;
  
  int left = 0;
  for(unsigned int i = 0; i < numbers.size(); i++)
  {
    right -= numbers[i];
    if(right == left) return i;
    left += numbers[i];
  }
  return -1;
}
