#include <vector>
#include <utility>

using namespace std; 

pair<int,int> rowWeights (const vector <int> &weights)
{
  int team1 = 0, team2 = 0;
  for(int i = 0; i < weights.size(); i++)
  {
    if(i % 2 == 0) team1 += weights[i];
    if(i % 2 != 0) team2 += weights[i];
  }
  return {team1, team2};
}
