#include "pakiet.h"

void pakiet::applyTwice(double value, std::function<double(double)> func){
    std::cout << func(func(value)) << std::endl;
}

std::function<double(double, double)> pakiet::makeMultiplier(double a, double b){
    return ([](double c, double d){return c*d;});
}

template<size_t C>
std::vector<int> pakiet::filterEvenNumbers(const std::array<int, C>& arr){
    std::vector<int> vec{};
    std::copy_if(arr.begin(), arr.end(), vec.begin(), [](int curr){return curr%2==0;});
    return vec;
}