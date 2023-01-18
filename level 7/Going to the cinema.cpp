#include<cmath>
class Movie
{
public:
    static int movie(int card, int ticket, double perc){
      int sumA = ticket, counter = 0; double ticketB = ticket , sumB = card + ticket;
      while(sumA <= ceil(sumB)){
        sumA += ticket;
        ticketB *= perc;
        sumB += ticketB;
        counter++;
      }
      return counter;
    }
};
