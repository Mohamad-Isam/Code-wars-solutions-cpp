#include <string>

std::string multi_table(int number)
{
  std::string s;
    for(int i = 1; i <= 10; i++)
    {
      s += std::to_string(i) + " * " + std::to_string(number) + " = " + std::to_string(number * i);
      if(i != 10) s += "\n";
    }
  return s;
}
