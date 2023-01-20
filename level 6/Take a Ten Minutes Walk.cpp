#include<vector>

bool isValidWalk(std::vector<char> walk) {
  if(walk.size() != 10) return false;
  int sum = 0;
  for(int x : walk)
  {
    if(x == 'n')sum++;
    else if(x == 's')sum--;
    else if(x == 'e')sum += 2;
    else if(x == 'w')sum -= 2;
  }
  return sum == 0;
}
