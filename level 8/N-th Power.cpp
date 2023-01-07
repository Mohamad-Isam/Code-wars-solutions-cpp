#include <vector>
#include<cmath>
int index(const std::vector<int> &vector, int n) {
  return (n + 1 > vector.size()) ? -1 : pow(vector[n], n);
}
