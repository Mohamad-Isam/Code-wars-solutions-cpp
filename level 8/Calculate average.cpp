#include <vector>

double calcAverage(const std::vector<int>& values){
double sum = 0;
  for(int x : values)
    sum += x;
  return sum / values.size();
}
