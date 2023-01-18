#include <utility>
#include <vector>
#include <iostream>
using namespace std;

unsigned int number(const vector<pair<int, int>>& busStops){
  int sum = 0;
  for(int i = 0; i < busStops.size(); i++)
    sum = sum + busStops[i].first - busStops[i].second;
  return sum;
}
