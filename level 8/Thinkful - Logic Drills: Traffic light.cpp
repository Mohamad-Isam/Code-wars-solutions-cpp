#include <string>

std::string update_light(std::string current) {
  return current == "green" ? "yellow" : current == "yellow" ? "red" : "green";
}
