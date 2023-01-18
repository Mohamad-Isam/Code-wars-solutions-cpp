#include <array>

using namespace std;

array<int, 10> paint_letterboxes(int start, int end)
{
    string s; int count = 0; array<int, 10> arr;
  for(size_t i = start; i <= end; i++)
    s += to_string(i);
  for(int j = 0; j <= 9; j++)
  {
   for(char a : s) {if(j == (a - '0'))count++;}
    arr[j] = count;
    count = 0;
  }
  return arr;
}
