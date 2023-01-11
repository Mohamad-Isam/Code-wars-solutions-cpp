#include<vector>
using namespace std;

int sum(vector<int> numbers)
{ int sum = 0;
 if(numbers.empty()) return 0;
    std::sort(numbers.begin(), numbers.end());
  for(int i = 1; i < numbers.size() - 1; i++) sum += numbers[i];
 return sum;
  
}
