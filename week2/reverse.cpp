#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

// #include "mylib/mylib.h"

template<typename T>
void Reverse(std::vector<T>& a) {
    int n = a.size();
    for (int i = 0; i < n / 2; ++i) {
        swap(a[i], a[n - 1 - i]);
    }
}

// int main() {

//     vector<int> numbers = {1, 5, 3, 4, 2};
//     Reverse(numbers);
//     printvector(numbers);

//     return 0;
// }
