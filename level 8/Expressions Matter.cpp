unsigned short int expressionsMatter (unsigned short int a , unsigned short int b , unsigned short int c)
{
  int num1 = a * (b + c);
  int num2 = a * b * c;
  int num3 = a + b * c;
  int num4 = (a + b) * c;
  int num5 = a + b + c;
  if(num1 >= num2 && num1 >= num3 && num1 >= num4 && num1 >= num5) return num1;
  if(num2 >= num1 && num2 >= num3 && num2 >= num4 && num2 >= num5) return num2;
  if(num3 >= num2 && num3 >= num1 && num3 >= num4 && num3 >= num5) return num3;
  if(num4 >= num2 && num4 >= num3 && num4 >= num1 && num4 >= num5) return num4;
  if(num5 >= num2 && num5 >= num3 && num5 >= num1 && num5 >= num4) return num5;
  
}
