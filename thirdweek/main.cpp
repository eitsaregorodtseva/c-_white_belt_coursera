#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cctype>
#include <map>
#include <list>
using namespace std;

/*bool condition(int i, int j)
{
    return (abs(i) < abs(j));
}

int main()
{
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
        cin >> numbers[i];
    sort(begin(numbers), end(numbers), condition);
    for (auto& item : numbers)
        cout << item << " ";
    return 0;
}*/


/*int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (auto& item : s)
        cin >> item;
    sort(begin(s), end(s),
            [](const string& r, const string& l){
        return lexicographical_compare(
                begin(r), end(r),
                begin(l), end(l),
                [](char cr, char cl){
                    return tolower(cr) < tolower(cl);
                }
                );
    }
    );
    for (auto& item : s)
        cout << item << " ";
    return 0;
}*/


/*class SortedStrings {
public:
    void AddString(const string& s) {
        strings.push_back(s);
    }
    vector<string> GetSortedStrings() {
        sort(begin(strings), end(strings));
        return strings;
    }
private:
    vector<string> strings;
};*/


/*class Person {
public:
    void ChangeFirstName(int year, const string& first_name) {
        data_first[year] = first_name;
    }
    void ChangeLastName(int year, const string& last_name) {
        data_last[year] = last_name;
    }
    string GetFullName(int year) {
        string save_first, save_last;
        for (auto &item : data_first) {
            if (item.first <= year && item.first != 0)
                save_first = item.second;
        }
        for (auto &item : data_last) {
            if (item.first <= year && item.first != 0)
                save_last = item.second;
        }
        if (save_first.size() == 0){
            if (save_last.size() == 0)
                return "Incognito";
            else
                return save_last + " with unknown first name";
        }
        else{
            if (save_last.size() == 0)
                return save_first + " with unknown last name";
            else
                return save_first + " " + save_last;
        }
    }
private:
    map<int, string> data_first;
    map<int, string> data_last;
};*/


/*string FindNameByYear(const map<int, string>& names, int year) {
    string name;
    for (const auto& item : names) {
        if (item.first <= year) {
            name = item.second;
        } else {
            break;
        }
    }
    return name;
}

string GetHistoryByYear(const map<int, string>& all_names, const string& name, int year){
    string names = "";
    auto test_name = name;
    auto i = all_names.rbegin();
    while (i != all_names.rend()) {
        if (i->first <= year && i->second != test_name) {
            test_name = i->second;
            names += test_name + ", ";
        }
        i++;
    }

    if (names.size() > 0)
        names.resize(names.size() - 2);
    if (names == name)
        names.resize(0);
    if (names.size() != 0)
        names = "(" + names + ")";
    return names;
}

class Person {
public:
    void ChangeFirstName(int year, const string& first_name) {
        first_names[year] = first_name;
    }
    void ChangeLastName(int year, const string& last_name) {
        last_names[year] = last_name;
    }
    string GetFullName(int year) {
        const string first_name = FindNameByYear(first_names, year);
        const string last_name = FindNameByYear(last_names, year);

        if (first_name.empty() && last_name.empty()) {
            return "Incognito";
        } else if (first_name.empty()) {
            return last_name + " with unknown first name";
        } else if (last_name.empty()) {
            return first_name + " with unknown last name";
        } else {
            return first_name + " " + last_name;
        }
    }
    string GetFullNameWithHistory(int year){
        const string first_name = FindNameByYear(first_names, year);
        const string last_name = FindNameByYear(last_names, year);
        const string some_first_names = GetHistoryByYear(first_names, first_name, year);
        const string some_last_names = GetHistoryByYear(last_names, last_name, year);
        if (first_name.empty() && last_name.empty()) {
            return "Incognito";
        } else if (first_name.empty()) {
            return last_name + " " + some_last_names + " with unknown first name";
        } else if (last_name.empty()) {
            return first_name + " " + some_first_names + " with unknown last name";
        } else if (some_first_names.empty() && some_last_names.empty()){
            return first_name + " " + last_name;
        } else if (some_last_names.empty()) {
            return first_name + " " + some_first_names + " " + last_name;
        } else if (some_first_names.empty()){
            return first_name + " " + last_name + " " + some_last_names;
        } else{
            return first_name + " " + some_first_names + " " + last_name + " " + some_last_names;
        }
    }

private:
    map<int, string> first_names;
    map<int, string> last_names;
};
*/
/*class ReversibleString {
public:
    ReversibleString() {};
    ReversibleString(const string& str) {
        string_ = str;
    };
    void Reverse() {
        reverse(string_.begin(), string_.end());
    };
    string ToString() const {
        return string_;
    };
private:
    string string_;
};
int main() {
    ReversibleString s("live");
    s.Reverse();
    cout << s.ToString() << endl;

    s.Reverse();
    const ReversibleString& s_ref = s;
    string tmp = s_ref.ToString();
    cout << tmp << endl;

    ReversibleString empty;
    cout << '"' << empty.ToString() << '"' << endl;

    return 0;
}*/

/*string FindNameByYear(const map<int, string>& names, int year) {
    string name;
    for (const auto& item : names) {
        if (item.first <= year) {
            name = item.second;
        } else {
            break;
        }
    }
    return name;
}

string GetHistoryByYear(const map<int, string>& all_names, const string& name, int year){
    string names = "";
    auto test_name = name;
    auto i = all_names.rbegin();
    while (i != all_names.rend()) {
        if (i->first <= year && i->second != test_name) {
            test_name = i->second;
            names += test_name + ", ";
        }
        i++;
    }

    if (names.size() > 0)
        names.resize(names.size() - 2);
    if (names == name)
        names.resize(0);
    if (names.size() != 0)
        names = "(" + names + ")";
    return names;
}

class Person {
public:
    Person(string first_name, string last_name, int year) {
        this->year_ = year;
        ChangeFirstName(year, first_name);
        ChangeLastName(year, last_name);
    }
    void ChangeFirstName(int year, const string& first_name) {
        if (year >= this->year_)
            first_names[year] = first_name;
    }
    void ChangeLastName(int year, const string& last_name) {
        if (year >= this->year_)
            last_names[year] = last_name;
    }
    string GetFullName(int year) const {
        if (year < this->year_) {
            return "No person";
        }
        else {
            const string first_name = FindNameByYear(first_names, year);
            const string last_name = FindNameByYear(last_names, year);

            if (first_name.empty() && last_name.empty()) {
                return "Incognito";
            } else if (first_name.empty()) {
                return last_name + " with unknown first name";
            } else if (last_name.empty()) {
                return first_name + " with unknown last name";
            } else {
                return first_name + " " + last_name;
            }
        }
    }
    string GetFullNameWithHistory(int year) const {
        if (year < this->year_) {
            return "No person";
        }
        else {
            const string first_name = FindNameByYear(first_names, year);
            const string last_name = FindNameByYear(last_names, year);
            const string some_first_names = GetHistoryByYear(first_names, first_name, year);
            const string some_last_names = GetHistoryByYear(last_names, last_name, year);
            if (first_name.empty() && last_name.empty()) {
                return "Incognito";
            } else if (first_name.empty()) {
                return last_name + " " + some_last_names + " with unknown first name";
            } else if (last_name.empty()) {
                return first_name + " " + some_first_names + " with unknown last name";
            } else if (some_first_names.empty() && some_last_names.empty()) {
                return first_name + " " + last_name;
            } else if (some_last_names.empty()) {
                return first_name + " " + some_first_names + " " + last_name;
            } else if (some_first_names.empty()) {
                return first_name + " " + last_name + " " + some_last_names;
            } else {
                return first_name + " " + some_first_names + " " + last_name + " " + some_last_names;
            }
        }
    }

private:
    int year_;
    map<int, string> first_names;
    map<int, string> last_names;
};


int main() {
    Person person("Polina", "Sergeeva", 1960);
    for (int year : {1959, 1960}) {
        cout << person.GetFullNameWithHistory(year) << endl;
    }

    person.ChangeFirstName(1965, "Appolinaria");
    person.ChangeLastName(1967, "Ivanova");
    for (int year : {1965, 1967}) {
        cout << person.GetFullNameWithHistory(year) << endl;
    }

    return 0;
}
*/
/*
int main() {
    struct Incognizable {
        int x = 0;
        int y = 0;
    };
    Incognizable a;
    Incognizable b = {};
    Incognizable c = {0};
    Incognizable d = {0, 1};
    return 0;
}*/