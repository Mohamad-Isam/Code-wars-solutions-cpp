#include<cmath>
double square_area(double A) {
  double r = A * 2 / M_PI;
  return floor(r * r * 100 + 0.5) / 100.0;
};
