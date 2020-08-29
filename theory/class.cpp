#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

#include "mylib/mylib.h"

class Route {
    private: // даем доступ к полям
        string source;
        string dest;
        int len;
        void UpdateLen() {
            // len = ComputeDest(source, dest);
            len = 35;
        }
    public: // не даем полный доступ к полям
        string GetSource() { return source; }
        string GetDest() { return dest; }
        int GetLen() { return len; }
        void SetSource(const string& newsource) {
            source = newsource;
            UpdateLen();
        }
        void SetDest(const string& newdest) {
            dest = newdest;
            UpdateLen();
        }
};

int main() {

    return 0;
}
