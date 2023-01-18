using namespace std;

int solve(string s){
	int count = 0, res = 0;
  for(size_t i = 0; i < s.length(); i++)
  {
    if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
    {
      if(res < count)res = count;
      count = 0;
      continue;
    }
    count++;
    
  }
  if(res < count)res = count;
  return res;
}
