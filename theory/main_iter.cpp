#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void print() {
    std::string s = "abcdefg";
    for (char c : s) {
        std::cout << c << ", ";
    }
    std::cout << '\n';


    vector<int> nums = {1, 2, 3, 4, 5};
    for (int c : nums)
        std::cout << c << ", ";
    std::cout << '\n';


    vector<string> ns = {"1", "2", "3", "4+"};
    for (auto c : ns)
        std::cout << c << ", ";
    std::cout << '\n';


    vector<int> nn = {9, 5, 1, 4, 5};
    for (auto c : nn)
        std::cout << c << " ";
    std::cout << '\n';

    int q = count(begin(nn), end(nn), 5);
    std::cout << "count 5 = " << q << '\n';
    sort(begin(nn), end(nn));
    for (auto c : nn)
        std::cout << c << " ";
    std::cout << '\n';
}

int main() {
    print();
    return 0;
}