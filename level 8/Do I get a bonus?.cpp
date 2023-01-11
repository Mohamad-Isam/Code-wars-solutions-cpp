#include<string>
using namespace std;

string bonus_time(int salary, bool bonus)
{
    return bonus ? "$" + std::to_string(10 * salary) : "$" + std::to_string(salary);
}
