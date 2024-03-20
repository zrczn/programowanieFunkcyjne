#include "pakiet.h"
#include <functional>
#include <cmath>
#include <iostream>
#include <optional>
#include <vector>
#include <numeric>

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
    for (auto& i: filteredEvens)
    {
        std::cout << i << " ";
    }
///////////////////////////////////////////
    
    std::function<void(double, double)> pointlessFunc = 
        [](double a, double b){
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; i < b; i++)
                {
                    pow(i, j);
                }   
            }           
        };

    std::cout << '\n' << measureExecutionTime(pointlessFunc, 1000.0, 1000.0)<< '\n';
///////////////////////////////////////////////

    std::array<int, 5> arrPow{1, 2, 3, 4, 5};
    std::for_each(arrPow.begin(), arrPow.end(), [](int& i){i = pow(i, 2);});
    for (auto& i : arrPow)
    {
        std::cout << i << ' ';        
    }
//////////////////////////////////////////////

    std::vector<std::string_view> words{"greatherthan5", "home", "cat", "purple",
        "chair"};

    auto filtered = std::remove_if(words.begin(), words.end(), [](std::string_view s){
        return std::size(s)-1 < 6;
    });
    words.erase(filtered, words.end());
    std::cout << '\n';
    for(auto& w: words){
        std::cout << w << ' ';
    }
//////////////////////////////////////////////

    int sum = std::accumulate(arrPow.begin(), arrPow.end(), 0);
    std::cout << '\n' << sum;
////////////////////////////////////////////
    
    return 0;
}