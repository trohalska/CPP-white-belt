#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

string vector_to_string(vector<string>& buffer) {
    string hystory;
    int size = buffer.size();

    if (size > 0) {
        hystory = buffer[size - 1];
        if (size > 1 && size < 3) {
            hystory += " (" + buffer[size - 2] + ")";
        }
        else if (size > 2) {
            hystory += " (";
            for (int i = size - 2; i >= 0; --i) {
                if (i != 0) {
                    hystory += buffer[i] + ", ";
                }
                else {
                    hystory += buffer[i];
                }
            }
            hystory += ")";
        }
    }
    return hystory;
}

string GetHystory(const map<int, string>& data, int year) {
    string hystory;
    vector<string> buffer;

    for(const auto& [key, value] : data) {
        if (key <= year){
            if (buffer.size() == 0) {
                buffer.push_back(value);
            }
            if (buffer.size() > 0 && buffer[buffer.size() - 1] != value) {
                buffer.push_back(value);
            }
        }
        else {
            break;
        }
    }
    hystory = vector_to_string(buffer);
    return hystory;
}

string GetName(const map<int, string>& data, int year) {
    string name;

    for(const auto& [key, value] : data) {
        if (key <= year)
            name = value;
        else
            break;
    }
    return name;
}

class Person {
    // int birth_year;
    map<int, string> fnames;
    map<int, string> lnames;

public:
    // Person (const string& name, const string& last_name, int year) {
    //     birth_year = year;
    //     fnames[year] = name;
    //     lnames[year] = last_name;
    // }

    bool check_year(const map<int, string>& data, int year) const {
        auto buffer = begin(data);

        if (data.size() > 0 && buffer->first > year)
            return 0;
        return 1;
    }

    void ChangeFirstName(int year, const string& first_name) {
        auto buffer = begin(fnames);

        if (fnames.size() > 0 && buffer->first <= year)
            fnames[year] = first_name;

        // for output map names
        // for (const auto& [key, value] : names)
        //  cout << key << " " << value << endl;
    }

    void ChangeLastName(int year, const string& last_name) {
        auto buffer = begin(lnames);

        if (lnames.size() > 0 && buffer->first <= year)
            lnames[year] = last_name;

        // for output map last_names
        // for (const auto& [key, value] : last_names)
        //  cout << key << " " << value << endl;
    }

    string GetFullName(int year) const {
        string full_name;
        string name = GetName(fnames, year);
        string last_name = GetName(lnames, year);

        // if (check_year(fnames, year) && check_year(lnames, year)) {
        //     if (!name.empty() && !last_name.empty())
        //         full_name = name + " " + last_name;
        // }
        // else
        //     full_name = "No person";

        // previous version class
        if (!name.empty() && !last_name.empty()) {
            full_name = name + " " + last_name;
        } else if ((name.empty() && !last_name.empty())){
            full_name = last_name + " with unknown first name";
        } else if ((!name.empty() && last_name.empty())){
            full_name = name + " with unknown last name";
        } else {
            full_name = "Incognito";
        }
        return full_name;
    }

    string GetFullNameWithHistory(int year) const {
        string full_name;
        string name = GetHystory(fnames, year);
        string last_name = GetHystory(lnames, year);

        // if (check_year(fnames, year) && check_year(lnames, year)) {
        //     if (!name.empty() && !last_name.empty())
        //         full_name = name + " " + last_name;
        // }
        // else {
        //     full_name = "No person";
        // }

        // previous version class
        if (!name.empty() && !last_name.empty()) {
            full_name = name + " " + last_name;
        } else if ((name.empty() && !last_name.empty())){
            full_name = last_name + " with unknown first name";
        } else if ((!name.empty() && last_name.empty())){
            full_name = name + " with unknown last name";
        } else {
            full_name = "Incognito";
        }
        return full_name;
    }
};

int main() {
  Person person;

  person.ChangeFirstName(1900, "Eugene");
  person.ChangeLastName(1900, "Sokolov");
  person.ChangeLastName(1910, "Sokolov");
  person.ChangeFirstName(1920, "Evgeny");
  person.ChangeLastName(1930, "Sokolov");
  cout << person.GetFullNameWithHistory(1940) << endl;

  return 0;
}