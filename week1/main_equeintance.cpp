#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, D;
    cin >> a >> b >> c;

    D = b * b - 4 * a * c;
    if (a != 0) {
        if (D == 0)
            cout << -b / (2 * a) << endl;
        else if (D > 0)
            cout << (-b - sqrt(D)) / (2 * a) << ' ' << (-b + sqrt(D)) / (2 * a) << endl;
    }
    else if (D >= 0 && b != 0)
        cout << -c / b << endl;
    return 0;
}