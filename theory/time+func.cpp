#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <chrono>
using namespace std;
using namespace std::chrono;

// template<typename T>
// void printvector(const std::vector<T>& v) {
//     for (auto i : v)
//         std::cout << i << " ";
//     std::cout << std::endl;
// }

struct Person {
    string name;
    string surname;
    int age;
};

vector<Person> GetPopulation() {
    vector<Person> res;
    Person one = {"vasya", "pupkin", 47};
    res.push_back(one);
    return res;
}

void PrintPopulationSize(const vector<Person>& p) {
    cout << "There are " << p.size() << " people." << endl;
}

int main() {

    // auto start = steady_clock::now();
    // vector<Person> people = GetPopulation();
    // auto finish = steady_clock::now();
    // cout << "GetPopulation() "
    //     << duration_cast<milliseconds>(finish - start).count() << "ms.";

    // start = steady_clock::now();
    // PrintPopulationSize(people);
    // finish = steady_clock::now();
    // cout << "PrintPopulationSize() "
    //     << duration_cast<milliseconds>(finish - start).count() << "ms.";

    auto start = steady_clock::now();
    PrintPopulationSize(GetPopulation()); // !!!!! це можна тільки по конст ссилці
    auto finish = steady_clock::now();
    cout << "PrintPopulationSize() "
        << duration_cast<milliseconds>(finish - start).count() << "ms.";
    return 0;
}
