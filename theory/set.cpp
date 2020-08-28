#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

#include "mylib/mylib.h"

int main() {
    // set<string> famous_persons;
    // famous_persons.insert("Stroustrup");
    // famous_persons.insert("Ritchie");
    // famous_persons.insert("Anton");
    // famous_persons.insert("Ritchie");
    // printSet(famous_persons);
    // famous_persons.erase("Anton");
    // printSet(famous_persons);

    // set<string> month = {"January", "February"};
    // set<string> month1 = {"January", "March", "February"};
    // set<string> month2 = {"February", "February", "January", "March", "February"};
    // cout << (month == month1) << endl;
    // cout << (month2 == month1) << endl;
    // cout << month2.count("February") << endl;

    vector<string> v = {"a", "b", "a"};
    set<string> s(begin(v), end(v));
    printSet(s);

    return 0;
}
