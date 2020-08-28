#pragma once
#include "mylib.h"

template<typename key, typename val>
void printMap(const std::map<key, val>& m) {
    for (auto [mkey, mval] : m)
        std::cout << mkey << " => " << mval << '\n';
}

template<typename key, typename val>
map<val, key> reverseMap(const std::map<key, val>& m) {
    map<val, key> res;
    for (auto item : m) {
        res[item.second] = item.first;
    }
    return res;
}
