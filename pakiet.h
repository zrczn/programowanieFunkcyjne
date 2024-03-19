#pragma once
#include <iostream>
#include <functional>
#include <cmath>
#include <array>
#include <vector>
#include <optional>
#include <algorithm>

namespace pakiet
{
    void applyTwice(double value, std::function<double(double)> func);
    std::function<double(double, double)> makeMultiplier(double a, double b);
    template<size_t C>
    std::vector<int> filterEvenNumbers(const std::array<int, C>& arr);
}
