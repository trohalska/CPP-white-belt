#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

bool IsPalindrom(const string x) {
    if (x[0] == '\0' || x == string(x.rbegin(), x.rend()))
        return true;
    return false;
}

// int main() {
//     string x;
//     cin >> x;
//     cout << IsPalindrom(x) << endl;

//     return 0;
// }
