#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;


void UpdateIfGreater(int first, int& second) {
    second = first > second ? first : second;
}

int main() {

    int a = 4;
    int b = 2;
    UpdateIfGreater(a, b);

    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
