unsigned int cookingTime(unsigned int eggs) {
  return eggs == 0 ? 0 : eggs % 8 == 0 ? eggs / 8 * 5 : (eggs / 8 + 1) * 5;
}
