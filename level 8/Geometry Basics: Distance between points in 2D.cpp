#include<cmath>
double distance_between_two_points(const Point& a, const Point& b) {
    return sqrt(pow(a.x - b.x , 2) + pow(a.y - b.y, 2));
}
