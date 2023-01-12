#include <string>

std::string highAndLow(const std::string& numbers){
  std::vector<std::string> v;
  std::string num;
  for(int i = 0; i < numbers.length(); i++)
  {
    if(numbers[i] == ' ')
    {
      v.push_back(num);
      num = "";
      continue;
    }
    num += numbers[i];
  }
  v.push_back(num);
//   now we have all the numbers each one in a string we just need to compare 
//   each one with the rest.
  std::string low = v[0];
  std::string high = v[0];
  for(int i = 0; i < v.size(); i++)
  {
    if(std::stoi(v[i]) >= std::stoi(high)) high = v[i];
    if(std::stoi(v[i]) <= std::stoi(low)) low = v[i];
  }
  
  return high +" "+ low;
}
