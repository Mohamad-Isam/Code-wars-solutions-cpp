int sumTriangularNumbers(int n) {
  int sum = 1, total = 0, count = 2;
  for(int i = 1; i <= n; i++, count++)
    {
    total += sum;
    sum += count;
    }
  return total;
}
