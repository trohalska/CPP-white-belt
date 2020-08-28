#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

// template<typename T>
// void printvector(std::vector<T> v) {
//     for (auto i : v)
//         std::cout << i << " ";
//     std::cout << std::endl;
// }

bool IsPalindrom(const string x) {
    if (x[0] == '\0' || x == string(x.rbegin(), x.rend()))
        return true;
    return false;
}

vector<string> PalindromFilter(const vector<string> words, int minLength ) {
    vector<string> res;

    for (auto& w : words) {
        if ((int)w.size() >= minLength && IsPalindrom(w))
            res.push_back(w);
    }
    return res;
}

// int main() {
//     vector<string> words = {"abacaba", "aba"};
//     int minLength = 5;
//     vector<string> res = PalindromFilter(words, minLength);
//     printvector(res);

//     words = {"abacaba", "aba"};
//     minLength = 2;
//     res = PalindromFilter(words, minLength);
//     printvector(res);

//     words = {"weew", "bro", "code"};
//     minLength = 4;
//     res = PalindromFilter(words, minLength);
//     printvector(res);

//     return 0;
// }
