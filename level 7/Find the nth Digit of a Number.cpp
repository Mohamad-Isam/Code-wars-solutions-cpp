int findDigit(int num, int nth){
  if(nth <= 0) return -1;
    for(int i = 0; i < nth; i++, num /= 10)
      if(i + 1 == nth) return (abs(num) % 10);
}
