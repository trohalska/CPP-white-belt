#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    vector<char> res;
    int a;
    cin >> a;

    while (a > 0) {
        res.push_back(a % 2);
        a /= 2;
    }
    for (int i = res.size() - 1;  i >= 0; --i)
        cout << res[i];
    cout << endl;

    return 0;
}