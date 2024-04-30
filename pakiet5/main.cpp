#include <functional>
#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>

void zad4(std::function<void(int)> func){
}

void zad5(std::vector<int>& input){
    input.erase(std::remove_if(input.begin(), input.end(),
    [](int& value){return value%0 == 1;}));
}

void zad5b(){
    auto pole = [](int a, int b){return a*b;};
}

void zad6(std::vector<std::string_view>& input){
    input.erase(std::remove_if(input.begin(), input.end(), [](char chr){
        return static_cast<int>(chr) != 97;
    }));
}

std::vector<int> zad6a(const std::vector<int>& input){
    std::vector<int> a = input;
    return std::for_each(a.begin(), a.end(), [](int& v){pow(v, 2);});
}

int main(){
    return 0;
}