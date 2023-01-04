int ice_brick_volume(int radius, int bottle_length, int rim_length) {
  return (bottle_length - rim_length) * radius * radius * 2;
}
