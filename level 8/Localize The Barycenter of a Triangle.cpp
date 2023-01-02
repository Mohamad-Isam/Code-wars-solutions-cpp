#include <utility>
#include<cmath>
using point = const std::pair<double, double>;
std::pair<double, double> barTriang(point p1, point p2, point p3) {
  double x = floor((p1.first + p2.first + p3.first) / 3 * 10000 + 0.5) / 10000;
  double y = floor((p1.second + p2.second + p3.second) / 3 * 10000 + 0.5) / 10000;
  return {x, y};
}
