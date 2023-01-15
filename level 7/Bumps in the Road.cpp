#include <string>

std::string bumps(std::string road){
  int sum = 0;
  for(int i = 0; i < road.length(); i++)
    if(road[i] == 'n')sum++;
  return sum > 15 ? "Car Dead" : "Woohoo!";
}
