#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

// #include "mylib/mylib.h"

template<typename T>
std::vector<T> Reversed(const vector<T>& v) {
    std::vector<T> b;
    for (auto i = v.rbegin(); i != v.rend(); ++i)
        b.push_back(*i);
    return b;
}

// int main() {

//     vector<int> numbers = {1, 5, 3, 4, 2};
//     vector<int> numbers1 = Reversed(numbers);
//     printvector(numbers);
//     printvector(numbers1);
//     return 0;
// }
