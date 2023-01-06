using namespace std;

string replace(const string &s)
{
  string str = s;
    for(int i = 0; i < s.length(); i++)
      if(tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u') str[i] = '!';
  return str;
}
