#include <string>

std::string createPhoneNumber(const int arr [10]){
  std::string s = "(";
  for(int i = 0; i < 10; i++)
  {
    s += arr[i] + '0';
    if(i == 2)
      s += ") ";
    if(i == 5)
      s += "-";
  }
  return s;
}
