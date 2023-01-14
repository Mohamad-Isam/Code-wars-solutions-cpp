int hasD(int num, int d){
      int count = 0;
      for(num = num * num; num > 0; num /= 10)
        {if(num % 10 == d) count++;}
      return count;
    }
class CountDig
{
public:
    
    static int nbDig(int n, int d){
      int counter = 0;
      for(int i = 0; i <= n; i++)
        counter += hasD(i, d);
      if(d == 0)counter++;
      return counter;
    }
};
