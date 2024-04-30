#include <algorithm>
#include <string>
#include <iostream>
#include <utility>
#include <cmath>
#include <array>
#include <vector>
#include <tuple>

int zad1(std::vector<int> input){
    int sum{0};
    for(auto i : input){
        if(i%2==0)
            sum += i;
    }
    return sum;
}

std::string zad2(std::string input){
    std::string r = input;
    std::for_each(r.begin(), r.end(), [](char& chr){
        if(islower(chr))
            chr = toupper(chr);
        else if(isupper(chr))
            chr = tolower(chr);
    });
    return r;
}

// void zad3(std::unordered_map<int, int>& input){
//     input.erase(std::remove_if(input.begin(), input.end(), [](const std::pair<const int, int>& p){
//         return p.second & 2 != 0;
//     }), input.end());
// }

std::function<int(int)> zad4(int numb){
    return [numb](int i)-> int { return pow(i, numb);};
}

template<typename T, size_t S>
std::array<T, S> zad5(std::array<T, S> input, std::function<void(T)> func){
    std::array<T, S> arr = input;
    std::for_each(arr.begin(), arr.end(), func);
    return arr;
}

std::unordered_map<int, int> zad7(std::vector<std::unordered_map<int, int>> input){
    std::unordered_map<int, int> sum{};
    for(auto i : input){
        for(auto j : i)
        {
            sum[j.first] += j.second;
        }
    }
    return sum;
}

int zad8(std::vector<int> input){
    std::sort(input.begin(), input.end());
    return input[0];
}

template<typename T>
void zad9(std::vector<std::tuple<T, T>> input, std::function<void(T&)> f){
    std::for_each(input.begin(), input.end(), [&f](std::tuple<T, T>& t){
        f(std::get<0>(t));
        f(std::get<1>(t));
    });
}

void zad10(std::vector<int> input){
    do{
        for(auto i : input)
            std::cout << i << ' ';
        std::cout << '\n';
    }while(std::next_permutation(input.begin(), input.end()));
}

int main(){
    return 0;
}