#include "pakiet.h"
#include <functional>
#include <cmath>
#include <iostream>
#include <optional>
#include <vector>

using namespace pakiet;
int main(){

    std::function<double(double)> powerOfTwo = [](double val){return pow(val, 2);};
    applyTwice(2, powerOfTwo);
////////////////////////////////////////////
    auto a = makeMultiplier(4, 5);
    double b = a(4, 5);
    std::cout << b << '\n';
////////////////////////////////////////////
    std::vector<int> filteredEvens{filterEvenNumbers(std::array<int, 10>{1, 2, 3, 4, 5, 6, 7, 8, 9})};
///////////////////////////////////////////

    return 0;
}