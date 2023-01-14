bool hasFive(int num)
{
  for(num = abs(num); num > 0; num /= 10){
    if(num % 10 == 5) 
      return true;
    }
  return false;
}


int dontGiveMeFive(int start, int end)
{
  int count  = 0;
  for(int i = start; i <= end; i++)
    if(!hasFive(i))count++;
  return count;
}
