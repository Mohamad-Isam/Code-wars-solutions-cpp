class Arge
{
  public:
  static int nbYear(int p0, double percent, int aug, int p){
    int year;
    for(year = 0; p0 < p; year++)
    {
      p0 = p0 + p0 * percent / 100 + aug;
    }
    return year;
  }
};
