#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// int Factorial(int f) {
//     int res = 1;

//     if (f <= 0) res = 1;
//     else {
//         while (f > 0) {
//             res *= f;
//             f--;
//         }
//     }
//     return res;
// }

int Factorial(int x) {
  if (x <= 1) {
    return 1;
  } else {
    return x * Factorial(x - 1);
  }
}

int main() {
    int a;
    cin >> a;

    cout << Factorial(a) << '\n';

    return 0;
}