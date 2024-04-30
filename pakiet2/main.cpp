#include <functional>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
std::vector<std::vector<char>> zad1(const std::vector<char> &arr1, const std::vector<char> &arr2)
{
    std::vector<std::vector<char>> k{};
    for (auto &i : arr1)
    {
        for (auto &j : arr2)
        {
            k.push_back({i, j});
        }
    }
    return k;
}

std::vector<std::vector<char>> zad2(std::vector<char> arr1)
{

    auto x = arr1.begin();
    std::vector<std::vector<char>> ansArr{};

    for (int i{}; i < arr1.size(); ++i)
    {
        x += i;
        for (auto j = arr1.begin(); j != arr1.end(); j++)
        {
            std::vector<char> inArr{};
            inArr.push_back(*x);
            inArr.push_back(*j);
            ansArr.push_back(inArr);
        }
    }
    return ansArr;
}

int zad3(int n)
{
    if (n <= 1)
        return n;
    return zad3(n - 1) + zad3(n - 2);
}

std::vector<int> zad3b(int a)
{
    std::vector<int> v{};
    for (int i{}; i < a; ++i)
        v.push_back(zad3(i));
    return v;
}

std::vector<double> zad4(const std::vector<int> &input)
{
    std::vector<double> ans;
    std::for_each(input.begin(), input.end(), [&ans](const int &val)
    {
        if(val > 10)
        {
            ans.push_back(std::pow(val, 2));
        } 
    });
}

bool zad5(const std::string& input){
    int i = input[input.size()-1];
    std::for_each(input.begin(), input.end(), [&i](char c)
    {
        if(c != i)
            return false;
        --i;
    });
    return true;
}

void zad6(int i1, int i2){
    try
    {
        if(i2 == 0)
            throw std::overflow_error("divided by 0");
        float a = i1/i2;
    }
    catch(std::overflow_error& e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "runs anyway" << std::endl;
}

auto zad8 = [](int a, int b, int c) -> float { return (a + b + c) / 3; };

template<size_t S>
std::array<std::array<int, S>, S> zad9()
{
    int val{};
    std::array<std::array<int, S>, S> arr{};
    std::for_each(arr.begin(), arr.end(), [&val](std::array<int, S>& ar){
        std::for_each(ar.begin(), ar.end(), [&val](int& v){v = val; ++val;});
    });
    return arr;
}



int main()
{
    std::cout << zad8(1, 2, 3) << '\n';
    std::cout << zad8(4, 5, 6) << '\n';
    std::cout << zad8(7,8,9) << '\n';

    auto z9 = zad9<3>();
    for(auto i: z9){
        for(auto j : i){
            std::cout << j << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}