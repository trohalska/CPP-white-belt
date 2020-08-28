#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printvector(const vector<bool> v) {
    int i = 0;
    for (auto s : v) {
        cout << i << ": " << s << endl;
        ++i;
    }
}

int main() {
    // -------------------

    // int n;
    // cin >> n; // посчитать количество
    // vector<string> v(n);
    // for (string& s : v) {
    //     cin >> s;
    // }
    // printvector(v);

    // -------------------

    // vector<int> days_in_month = {31, 28, 31 , 30 , 31};
    // if (true) {
    //     days_in_month[1]++;
    // }
    // printvector(days_in_month);

    // -------------------
    vector<bool> is_holiday(28, false);
    is_holiday[22] = true;
    printvector(is_holiday);

    is_holiday.resize(31);
    printvector(is_holiday);

    is_holiday.assign(31, false);
    is_holiday[7] = true;
    printvector(is_holiday);

    return 0;
}
