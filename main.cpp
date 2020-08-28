#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

#include "mylib/mylib.h"

bool gt1(int x) {
    return x < 3;
}

int main() {
    // cout << min(2,3) << endl;
    // cout << max(2,3) << endl;
    // cout << min("abc", "bca") << endl;
    // cout << max("abc", "bca") << endl;

    // vector<int> a = {9,1,2,3,5,4,8};
    // sort(a.begin(), a.end());
    // printVector(a);

    // vector<int> a = {9,1,2,3,2,5,4,2,8};
    // cout << count(a.begin(), a.end(), 2) << endl;

    vector<int> a = {9,1,2,3,2,5,4,2,8};
    cout << count_if(a.begin(), a.end(), gt1) << endl;

    int thr = 2;
    cout << count_if(a.begin(), a.end(), [thr](int& x) { return x < thr; });
    cout << endl;




    return 0;
}
