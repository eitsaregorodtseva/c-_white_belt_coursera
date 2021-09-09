#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
#include <iomanip>
#include <exception>
using namespace std;

/*struct Specialization {
    string value;
    explicit Specialization(const string& new_sp) {
        value = new_sp;
    }
};
struct Course {
    string value;
    explicit Course(const string& new_c) {
        value = new_c;
    }
};
struct Week {
    string value;
    explicit Week(const string& new_w) {
        value = new_w;
    }
};
struct LectureTitle {
    string specialization;
    string course;
    string week;

    LectureTitle(Specialization new_sp, Course new_c, Week new_w) {
        specialization = new_sp.value;
        course = new_c.value;
        week = new_w.value;
    }
};
int main() {
    LectureTitle title(
    Specialization("C++"),
    Course("White belt"),
    Week("4th")
);
    return 0;
}*/

/*
class FunctionPart {
public:
    FunctionPart(char new_operation, double new_value) {
        operation = new_operation;
        value = new_value;
    }
    double Apply(double source_value) const {
        if (operation == '+') {
            return source_value + value;
        } else if (operation == '-') {
            return source_value - value;
        } else if (operation == '*') {
            return source_value * value;
        } else if (operation == '/') {
            return source_value / value;
        }
    }
    void Invert() {
        if (operation == '+') {
            operation = '-';
        } else if (operation == '-') {
            operation = '+';
        } else if (operation == '*') {
            operation = '/';
        } else if (operation == '/') {
            operation = '*';
        }
    }
private:
    char operation;
    double value;
};

class Function {
public:
    void AddPart(char operation, double value) {
        parts.push_back({operation, value});
    }
    double Apply(double value) const {
        for (const FunctionPart& part : parts) {
            value = part.Apply(value);
        }
        return value;
    }
    void Invert() {
        for (FunctionPart& part : parts) {
            part.Invert();
        }
        reverse(begin(parts), end(parts));
    }
private:
    vector<FunctionPart> parts;
};
*/
/*
struct Image {
  double quality;
  double freshness;
  double rating;
};

struct Params {
  double a;
  double b;
  double c;
};

Function MakeWeightFunction(const Params& params,
                            const Image& image) {
  Function function;
  function.AddPart('*', params.a);
  function.AddPart('-', image.freshness * params.b);
  function.AddPart('+', image.rating * params.c);
  return function;
}

double ComputeImageWeight(const Params& params, const Image& image) {
  Function function = MakeWeightFunction(params, image);
  return function.Apply(image.quality);
}

double ComputeQualityByWeight(const Params& params,
                              const Image& image,
                              double weight) {
  Function function = MakeWeightFunction(params, image);
  function.Invert();
  return function.Apply(weight);
}

int main() {
  Image image = {10, 2, 6};
  Params params = {4, 2, 6};
  cout << ComputeImageWeight(params, image) << endl;
  cout << ComputeQualityByWeight(params, image, 52) << endl;
  return 0;
}*/
/*
int main() {
    ifstream input("input.txt");
    int n, m;
    string number;
    if (input) {
        input >> n >> m;
        input.ignore(1);

        for (int i = 0; i < n; i++) {
            for (int j = 1; j < m; j++) {
                getline(input, number, ',');
                cout << setw(10) << number << " ";
            }
            getline(input, number);
            cout << setw(10) << number << endl;
        }
    }
    return 0;
}*/
/*
struct Student {
    string first_name;
    string last_name;
    int day;
    int month;
    int year;
};
int main() {
    int n, m;
    cin  >> n;

    vector<Student> vect;
    Student temp;

    string line;
    int number;

    for (int i = 0; i < n; i++) {
        cin >> temp.first_name;
        cin >> temp.last_name;
        cin >> temp.day;
        cin>> temp.month;
        cin >> temp.year;
        vect.push_back(temp);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> line;
        cin >> number;
        if (line == "name" && number <= vect.size() && number > 0) {
            cout << vect[number - 1].first_name << " " << vect[number - 1].last_name << endl;
        } else {
            if (line == "date" && number <= vect.size() && number > 0) {
                cout << vect[number - 1].day << "." << vect[number - 1].month << "." << vect[number - 1].year << endl;
            } else
                cout << "bad request" << endl;
        }
    }
    return 0;
}*/



/*void EnsureEqual(const string& left, const string& right) {
    if (left != right) {
        stringstream ss;
        ss << left << " != " << right;
        throw runtime_error(ss.str());
    }
}
int main() {
    try {
        EnsureEqual("C++ White", "C++ White");
        EnsureEqual("C++ White", "C++ Yellow");
    } catch (runtime_error& e) {
        cout << e.what() << endl;
    }
    return 0;
}*/
string AskTimeServer() {
    throw system_error(error_code());
}

class TimeServer {
public:
    string GetCurrentTime() {
        try {
            last_fetched_time = AskTimeServer();
            return last_fetched_time;
        }
        catch (const system_error& e) {
            return last_fetched_time;
        }
    };
private:
    string last_fetched_time = "00:00:00";
};

int main() {
    TimeServer ts;
    try {
        cout << ts.GetCurrentTime() << endl;
    } catch (exception& e) {
        cout << "Exception got: " << e.what() << endl;
    }
    return 0;
}