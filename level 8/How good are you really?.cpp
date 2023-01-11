#include <vector>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
  int sum = 0; 
  for(int x : classPoints)
    sum += x;
  return yourPoints > sum / classPoints.size();
}
