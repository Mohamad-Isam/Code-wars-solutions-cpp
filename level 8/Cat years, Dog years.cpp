#include <vector>

std::vector<int> humanYearsCatYearsDogYears(int humanYears) {
  int cat = 0, dog = 0, n = humanYears;
  while(humanYears > 0)
  {
    if(humanYears == 1)
    {
      cat += 15;
      dog += 15;
      break;
    }
    if(humanYears == 2)
    {
      cat += 9;
      dog += 9;
      humanYears--;
      continue;
    }
    cat += 4;
    dog += 5;
    humanYears--;
  }
  return {n, cat, dog};
}
