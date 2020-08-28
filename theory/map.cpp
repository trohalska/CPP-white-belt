#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

#include "mylib/mylib.h"

int main() {
    // map<int, string> events;
    // events[1950] = "Bjarne Stroustrup's birthday";
    // events[1941] = "Dennis Ritchie's birthday";
    // events[1970] = "UNIX epoch start";
    // cout << "Size = " << events.size() << endl;
    // printmap(events);
    // cout << events[1950] << endl;
    // events.erase(1970);
    // printmap(events);
    // map<string, int> nmap = reversemap(events);
    // printmap(nmap);

    // map<string, int> m = {{"one", 1}, {"two", 2}, {"three", 3}};
    // printmap(m);
    // m.erase("three");
    // printmap(m);

    // vector<string> v = {"one", "two", "three", "one"};
    // map<string, int> map;
    // for (const string& word : v) {
    //     ++map[word];
    // }
    // map["a"];
    // printmap(map);

    // vector<string> words = {"one", "two", "three", "owl"};
    // map<char, vector<string>> grouped_words;
    // for (const string& word : words) {
    //     grouped_words[word[0]].push_back(word);
    // }
    // for (const auto& i : grouped_words) {
    //     cout << i.first << endl;
    //     for (const string& word : i.second) {
    //         cout << word << ' ';
    //     }
    //     cout << endl;
    // }

    map<string, int> m = {{"one", 1}, {"two", 2}, {"three", 3}};
    for (const auto& [key, value] : m) {
        key, value;
    }


    return 0;
}
