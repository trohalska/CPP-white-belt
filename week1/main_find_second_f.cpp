#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string s;
    int f = -2;
    cin >> s;

    for (unsigned long i = 0; i < s.length(); ++i) {
        if (s[i] == 'f' && f == -2)
            f = -1;
        else if (s[i] == 'f' && f == -1) {
            f = i;
            break;
        }
    }
    cout << f << endl;

    return 0;
}