#pragma once
#include <iostream>
#include <functional>
#include <cmath>
#include <array>
#include <vector>
#include <optional>
#include <algorithm>
#include <chrono>
#include <tuple>

namespace pakiet
{
    void applyTwice(double value, std::function<double(double)> func);
    std::function<double(double, double)> makeMultiplier(double a, double b);
    template<size_t C>
    std::vector<int> filterEvenNumbers(const std::array<int, C>& arr);
    template<typename B, typename C>
    double measureExecutionTime(std::function<void(B,C)> func, B arg1, C arg2);

    auto currying_add(int a);
    std::tuple<int, char> twoFuncComposition(std::function<int(int)> funcA, std::function<char(char)> funcB,
        int val1, char val2);
    
    void longFuncDemo(int a, int b, int c);

    template<typename T>
    T dopasowanieDoWzorca(T type);
}

template<size_t C>
std::vector<int> pakiet::filterEvenNumbers(const std::array<int, C>& arr){
    std::vector<int> vec{};
    std::copy_if(arr.begin(), arr.end(), std::back_inserter(vec), [](int curr){return curr%2==0;});
    return vec;
}

template<typename B>
double measureExecutionTime(std::function<void(B, B)> func, B arg1, B arg2){
    using namespace std::chrono;
    auto start = high_resolution_clock::now();
    func(arg1, arg2);
    auto stop = high_resolution_clock::now(); 

    auto duration = duration_cast<microseconds>(stop - start);
    std::cout << "execution time (in microseconds): " << duration.count();
}

void sortIt(std::vector<std::string>& arr);

int calculate_factorial(int a);
