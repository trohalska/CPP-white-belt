#pragma once
#include "mylib.h"

template<typename T>
void printSet(const std::set<T>& s) {
    for (auto x : s)
        std::cout << x << '\n';
}
