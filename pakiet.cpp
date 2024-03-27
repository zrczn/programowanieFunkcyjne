#include "pakiet.h"

void pakiet::applyTwice(double value, std::function<double(double)> func)
{
    std::cout << func(func(value)) << std::endl;
}

std::function<double(double, double)> pakiet::makeMultiplier(double a, double b)
{
    return ([](double c, double d)
            { return c * d; });
}

void sortIt(std::vector<std::string> &arr)
{
    std::sort(arr.begin(), arr.end(),
              [](const std::string &a, const std::string &b)
              {
                  return a.size() < b.size();
              });
}

int calculate_factorial(int a)
{
    if (a <= 0)
        return 1;

    return a * calculate_factorial(a - 1);
}

auto pakiet::currying_add(int a)
{
    return [=](int b)
    {
        return a + b;
    };
}

std::tuple<int, char> pakiet::twoFuncComposition(
    std::function<int(int)> funcA, std::function<char(char)> funcB,
    int val1, char val2)
{
    return std::tuple<int, char>{funcA(val1), funcB(val2)};
}

void pakiet::longFuncDemo(int a, int b, int c){
    std::cout << a << ',' << b << ',' << c;
}