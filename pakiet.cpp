#include "pakiet.h"

void pakiet::applyTwice(double value, std::function<double(double)> func){
    std::cout << func(func(value)) << std::endl;
}

std::function<double(double, double)> pakiet::makeMultiplier(double a, double b){
    return ([](double c, double d){return c*d;});
}
