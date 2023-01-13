#include <cmath>
long int findNextSquare(long int sq) {
  return sqrt(sq) == floor(sqrt(sq)) ? pow(sqrt(sq) + 1, 2) : -1;
}
