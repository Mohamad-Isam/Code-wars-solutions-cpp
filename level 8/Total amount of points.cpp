int points(const std::array<std::string, 10>& games) {
  int sum = 0;
  for(int i = 0; i < games.size(); i++)
  {
    if(games[i][0] - '0' > games[i][2] - '0') sum += 3;
    if(games[i][0] - '0' == games[i][2] - '0') sum += 1;
  }
    return sum;
}
