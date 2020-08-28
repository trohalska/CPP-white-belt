#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

#include "mylib/mylib.h"

// void MoveStrings(vector<string>& a, vector<string>& b) {
//     vector<string> c;
//     std::merge(a.begin(), a.end(), c.begin(), c.end(), std::back_inserter(b));
//     a.clear();
// }

// void MoveStrings(vector<string>& a, vector<string>& b) {
//     for (auto i : a)
//         b.push_back(i);
//     a.clear();
// }

int main() {

    vector<string> source = {"a", "b", "c"};
    vector<string> destination = {"z"};
    printvector(source);
    printvector(destination);

    vectorJoinClean(source, destination);

    printvector(source);
    printvector(destination);
    return 0;
}