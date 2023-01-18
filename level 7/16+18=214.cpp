unsigned add(unsigned x, unsigned y)
{
  std::string s;
  if(!x && !y)return 0;
  int sum = 0;
  while(x || y){
    sum = x % 10 + y % 10;
    x /= 10; y /= 10;
    s.insert(0, std::to_string(sum));
    sum = 0;
  }
  return stoi(s);
}
