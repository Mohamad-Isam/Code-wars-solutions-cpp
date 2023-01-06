long pillars(int num_of_pillars, int distance, int width) {
  return num_of_pillars > 1 ? distance * (num_of_pillars - 1) * 100 + width * (num_of_pillars - 2) : 0;
}
