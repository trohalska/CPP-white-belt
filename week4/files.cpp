#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

// ---------- чтение из файла

// int main() {
//     ifstream input ("input.txt");
//     if (input.is_open()) {
//         string out;
//         while (getline(input, out))
//             cout << out << endl;
//     }
//     return 0;
// }

// ---------- чтение и запись в файл
// int main() {
//     ifstream input("input.txt");
//     ofstream output("output.txt");

//     if (input) {
//         string out;
//         while (getline(input, out))
//             output << out << endl;
//     }
//     return 0;
// }

// ---------- вивід з точністю
// int main() {
//     ifstream input ("input.txt");
//     if (input) {
//         double a;
//         cout << fixed << setprecision(3);
//         while (input >> a)
//             cout << a << endl;
//     }
//     return 0;
// }

// ---------- зчитування і вивід таблиці
int main() {
    ifstream input("input.txt");
    int N, M, OUT;

    input >> N;
    input >> M;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            input >> OUT;
            cout << setw(10) << OUT;
            input.ignore(1);
            if (j != M - 1)
                cout << " ";
        }
        if (i != N - 1)
            cout << endl;
    }
    return 0;
}