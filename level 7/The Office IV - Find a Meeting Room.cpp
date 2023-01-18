#include <vector>

int meeting(const std::vector<char>& rooms) {
  for(size_t i = 0; i < rooms.size(); i++)
    if(rooms[i] == 'O') return i;
  return -1;
}
