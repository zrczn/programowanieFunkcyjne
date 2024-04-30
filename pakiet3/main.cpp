
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <functional>
#include <cmath>
#include <utility>

std::vector<int> double_list_elements(const std::vector<int>& input){
    std::vector<int> v{};
    std::for_each(input.begin(), input.end(), [&v](int i){v.emplace_back(i*2);});
    return v;
}

std::vector<std::string> filter_long_words(std::vector<std::string> input){
    
    int lengthTotal{}, numb{};
    std::vector<std::string> ans{};
    
    for(auto word : input){
        lengthTotal += word.size();
        numb++;
    }

    float srednia = lengthTotal / numb;

    std::copy_if(input.begin(), input.end(), ans.begin(), [srednia](const std::string str)
        {return str.size() > srednia;});
}

int recursive_sum(std::vector<std::vector<int>> nested, int curr){
    if(nested.empty())
        return curr;
    
    auto& v = nested.back();

    if(v.empty())
    {
        nested.pop_back();
        return recursive_sum(nested, curr);
    }

    curr += v.back();
    v.pop_back();

    return recursive_sum(nested, curr);
}

template<typename T>
void remove_duplicates(std::vector<T>& v){
    std::unordered_map<T, int> repetitions;
    v.erase(std::remove_if(v.begin(), v.end(), [&repetitions](T t)
    {
        return ++repetitions[t] > 1;
    }));
}

void map_nested(std::vector<std::vector<int>>& input){
    auto someFunc = [](int& i){ return i+=1;};
    std::for_each(input.begin(), input.end(), [someFunc](std::vector<int>& n)
    {std::for_each(n.begin(), n.end(), [someFunc](int& i){
        return someFunc(i);
    });});
}

std::vector<int> flatten_list(std::vector<std::vector<int>> input){
    
    std::vector<int> flat{};
    
    for(auto row : input){
        for(auto item : row){
            flat.push_back(item);
        }    
    }
    return flat;
}

template<typename T>
std::vector<std::vector<int>> partition_list(std::vector<int> input, std::function<bool(T)> predykata){
    std::vector<T> l{}, r{};
    for(auto item : input){
        if(predykata(item)){
            l.push_back(item);
        }
        else{
            r.push_back(item);
        }
    }
    std::vector<std::vector<int>> fin{};
    fin.push_back(l);
    fin.push_back(r);
    return fin;
}

template<typename T>
std::unordered_map<int, T> zip_with_index(std::vector<T> input){
    std::unordered_map<int, T> uoMap{};
    for(int i{}; i < input.size(); ++i)
        uoMap[i] = input[i];
    return uoMap;
}

std::vector<int> cumulative_sum(const std::vector<std::string>& input){
    std::vector<int> cum{};
    for(auto item : input)
        cum.push_back(item.size());
    return cum;
}

int find_max_min_diff(std::vector<int> input){
    int p1{}, p2{};
    for(int i : input){
        if(p1 < i)
            p1 = i;
        if(p2 > i)
            p2 = i;
    }
    return abs(input[p1]-input[p2]);
}

void rotate_list(std::vector<int>& input, int times){
    for(int i{}; i < times; ++i){
        input.pop_back();
        input.insert(input.begin(), 0);
    }
}

template<typename T>
std::vector<std::vector<T>> split_list(std::vector<T> input, int elLength){
    std::vector<std::vector<T>> fin{};
    std::vector<T> currV{};
    
    for(auto element : input){
        currV.push_back(element);
        if(currV.size() == elLength){
            fin.push_back(currV);
            currV.clear();
        }
    }

    return fin;
}

int count_unique_elements(std::vector<int> v){
    std::unordered_map<int, int> doubles;
    int uniques{};

    for(auto i : v){
        doubles[i]++;
        uniques++;
        if(doubles[i] > 1)
            uniques--;
    }
    return uniques;
}

std::string remove_whitespace(const std::string& input){
    std::string res = input;
    res.erase(std::remove(res.begin(), res.end(), ' '), res.end());
    return res;
}

#include <string>

void capitalize_all_words(std::string& input) {
    if (!input.empty() && islower(input[0])) {
        input[0] = toupper(input[0]);
    }
    for (size_t i = 1; i < input.size(); ++i) {
        if (input[i - 1] == ' ' && islower(input[i])) {
            input[i] = toupper(input[i]);
        }
    }
}

std::vector<std::vector<int>> transpose_matrix(const std::vector<std::vector<int>>& input){
    std::vector<std::vector<int>> transposed(input[0].size(), std::vector<int>(input.size()));
    for(int i{0}; i < input.size(); ++i){
        for(int j{0}; j < input[0].size(); ++j){
            transposed[i][j] = input[j][i];
        }
    }
    return transposed;
}

int sum_of_squares_of_odds(std::vector<int> input){
    std::vector<int> vals = input;
    int sumOfSquares{0};
    vals.erase(std::remove_if(vals.begin(), vals.end(), [](int& i){return i%2==0;}), vals.end());
    std::for_each(vals.begin(), vals.end(), [&sumOfSquares](int& i){sumOfSquares += pow(i,2);});
    return sumOfSquares;
}

int main(){
    
    return 0;
}