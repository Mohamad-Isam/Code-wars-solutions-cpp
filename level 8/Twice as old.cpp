int twice_as_old(int dad, int son) {
  int x = dad - son, y = 0;
  while(y < 100)
  {
    if(2 * y == x) return abs(son - y);
    y++;
    x++;
  }
}
