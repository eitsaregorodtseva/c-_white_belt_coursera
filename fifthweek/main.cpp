#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <iomanip>
#include <exception>

using namespace std;

class Date {
public:
    Date() = default;
    Date(int year, int month, int day) {
        this->year_ = year;
        this->month_ = month;
        this->day_ = day;
    };
    int GetYear() const {
        return this->year_;
    };
    int GetMonth() const {
        return this->month_;
    };
    int GetDay() const {
        return this->day_;
    };
private:
    int year_, month_, day_;
};

bool operator<(const Date& lhs, const Date& rhs) {
    if (lhs.GetYear() == rhs.GetYear()) {
        if (lhs.GetMonth() == rhs.GetMonth()) {
            return lhs.GetDay() < rhs.GetDay();
        }
        return lhs.GetMonth() < rhs.GetMonth();
    }
    return lhs.GetYear() < rhs.GetYear();
}

istringstream& operator>>(istringstream& stream, Date& date) {
    string line;
    stream >> line;
    istringstream ss;
    ss.str(line);
    int year, month, day;
    ss >> year;
    if (ss.peek() != '-')
        throw runtime_error("Wrong date format: " + line);
    else
        ss.ignore(1);

    ss >> month;
    if (ss.peek() != '-')
        throw runtime_error("Wrong date format: " + line);
    else
        ss.ignore(1);

    set<char> ch_vec = { '-', '+', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

    if (ch_vec.count(char(ss.peek())) == 0)
        throw runtime_error("Wrong date format: " + line);
    else
        ss >> day;

    if (ss.peek() != EOF)
        throw runtime_error("Wrong date format: " + line);
    else
    {
        if (month < 1 || month > 12)
            throw runtime_error("Month value is invalid: " + to_string(month));
        if (day < 1 || day > 31)
            throw runtime_error("Day value is invalid: " + to_string(day));
        date = Date(year, month, day);
        return stream;
    }
}

ostream& operator<<(ostream& stream, const Date& date) {
    stream << setw(4) << setfill('0') << date.GetYear() << "-" <<
           setw(2) << setfill('0') << date.GetMonth() << "-" <<
           setw(2) << setfill('0') << date.GetDay();
    return stream;
}

ostream& operator<<(ostream& stream, const set<string>& events) {
    for (const string& event : events) {
        stream << event << endl;
    }
    return stream;
}

class Database {
public:
    void AddEvent(const Date& date, const string& event) {
        this->database_[date].insert(event);
    };

    bool DeleteEvent(const Date& date, const string& event) {
        if (this->database_.count(date)) {
            if (this->database_[date].count(event)) {
                this->database_[date].erase(event);
                return true;
            }
        }
        return false;
    };

    int  DeleteDate(const Date& date) {
        int num = 0;
        if (this->database_.count(date)) {
            num = this->database_[date].size();
            this->database_.erase(date);
        }
        return num;
    };

    set<string> Find(const Date& date) const {
        if (this->database_.count(date))
            return this->database_.at(date);
        else
            return {};
    };

    void Print() const {
        for (const auto& item : this->database_) {
            for (const string& event : item.second) {
                cout << item.first << " " << event << endl;
            }
        }
    };

private:
    map<Date, set<string>> database_;
};

int main() {
    Database db;
    string command;

    while (getline(cin, command)) {
        string cmd;
        istringstream ss;
        ss.str(command);

        ss >> cmd;
        if (cmd == "Add") {
            try {
                Date date;
                string event;
                ss >> date >> event;
                db.AddEvent(date, event);
            }
            catch (exception& e) {
                cout << e.what() << endl;
            }
        }
        else if (cmd == "Del") {
            try {
                Date date;
                string event;
                ss >> date >> event;
                if (event != "") {
                    if (db.DeleteEvent(date, event))
                        cout << "Deleted successfully" << endl;
                    else
                        cout << "Event not found" << endl;
                }
                else
                    cout << "Deleted " << db.DeleteDate(date) << " events" << endl;
            }
            catch (exception& e) {
                cout << e.what() << endl;
            }
        }
        else if (cmd == "Find") {
            try {
                Date date;
                ss >> date;
                cout << db.Find(date) << endl;
            }
            catch(exception& e) {
                cout << e.what() << endl;
            }
        }
        else if (cmd == "Print") {
            db.Print();
        }
        else if (!cmd.empty()) {
            cout << "Unknown command: " << cmd << endl;
        }
    }

    return 0;
}
