#pragma once
#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <set>
#include <map>
#include <sstream>
#include <algorithm>
#include <iterator>

#include "myvector.h"
#include "mymap.h"
#include "myset.h"

int strToInt(std::string s);

template <class Container>
void split(const std::string& str, Container& cont, char delim = ' ') {
    std::stringstream ss(str);
    std::string token;
    while (std::getline(ss, token, delim)) {
        cont.push_back(token);
    }
}
