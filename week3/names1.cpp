#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

class Person {
public:
    void ChangeFirstName(int year, const string& first_name) {
        fname[year] = first_name;
    }
    void ChangeLastName(int year, const string& last_name) {
        lname[year] = last_name;
    }
    string GetFullName(int year) {
        string First = "", Last = "";

        for (const auto& [key, value] : fname)
            if (key <= year)
                First = value;
        for (const auto& [key, value] : lname)
            if (key <= year)
                Last = value;

        if (First == "" && Last == "")
            return "Incognito";
        else if (First != "" && Last == "")
            return First + " with unknown last name";
        else if (First == "" && Last != "")
            return Last + " with unknown first name";
        else
            return First + " " + Last;
    }
private:
    map<int, string> fname;
    map<int, string> lname;
};

int main() {
  Person person;

  person.ChangeFirstName(1965, "Polina");
  person.ChangeLastName(1967, "Sergeeva");
  for (int year : {1900, 1965, 1990}) {
    cout << person.GetFullName(year) << endl;
  }

  person.ChangeFirstName(1970, "Appolinaria");
  for (int year : {1969, 1970}) {
    cout << person.GetFullName(year) << endl;
  }

  person.ChangeLastName(1968, "Volkova");
  for (int year : {1969, 1970}) {
    cout << person.GetFullName(year) << endl;
  }

  return 0;
}