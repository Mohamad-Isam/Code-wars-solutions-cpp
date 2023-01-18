using namespace std;

class SequenceSum{
  int count;
  public:
  SequenceSum (int);
  string showSequence();
  
};

string SequenceSum::showSequence(){
  if(count == 0) return "0=0";
  if(count < 0) return to_string(count) + "<0";
  string s; int sum = 0;
    for(int i = 0; i < count; i++)
    {  sum += i;
       s += to_string(i) + "+";
       
    }
  s += to_string(count) + " = " + to_string(sum + count);
  return s;
}

SequenceSum::SequenceSum (int c) {
  count = c;
}
