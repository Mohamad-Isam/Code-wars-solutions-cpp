using namespace std;

string sortMyString(const string &s)
{
    string str1, str2;
  for(size_t i = 0; i < s.length(); i++)
    i % 2 == 0 ? str1 += s[i] : str2 += s[i];
  return str1 + " " + str2;
}
