int mango(int quantity, int price)
{
  int sum = 0;
  while(quantity > 2)
  {
    quantity -= 3;
    sum += 2 * price;
  }
  return sum + quantity * price;
}
