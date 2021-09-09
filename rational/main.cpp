#include <iostream>
#include <sstream>
#include <set>
#include <vector>
#include <map>
#include <stdexcept>
#include <exception>

using namespace std;

class Rational {
public:
    Rational() {
        this->numerator_ = 0;
        this->denominator_ = 1;
    };
    Rational(int numerator, int denominator) {
        if (denominator == 0)
            throw 1;
        if (numerator == 0) {
            this->numerator_ = numerator;
            this->denominator_ = 1;
            return;
        }
        if ((numerator < 0 && denominator < 0) || (numerator > 0 && denominator < 0)) {
            numerator = -numerator;
            denominator = -denominator;
        }
        auto a = abs(numerator);
        auto b = abs(denominator);
        while (a && b) {
            if (a > b)
                a %= b;
            else
                b %= a;
        }
        this->numerator_ = numerator / (a + b);
        this->denominator_ = denominator / (a + b);
    };

    int Numerator() const {
        return this->numerator_;
    };
    int Denominator() const {
        return this->denominator_;
    };
private:
    int numerator_;
    int denominator_;
};

bool operator==(const Rational& r1, const Rational& r2) {
    return (r1.Numerator() == r2.Numerator() && r1.Denominator() == r2.Denominator());
};

Rational operator+(const Rational& r1, const Rational& r2) {
    return Rational(r1.Numerator() * r2.Denominator() + r2.Numerator() * r1.Denominator(), r1.Denominator() * r2.Denominator());
};

Rational operator-(const Rational& r1, const Rational& r2) {
    return Rational(r1.Numerator() * r2.Denominator() - r2.Numerator() * r1.Denominator(), r1.Denominator() * r2.Denominator());
};

Rational operator*(const Rational& r1, const Rational& r2) {
    return Rational(r1.Numerator() * r2.Numerator(), r1.Denominator() * r2.Denominator());
};

Rational operator/(const Rational& r1, const Rational& r2) {
    if (r2.Numerator() == 0)
        throw 2;
    return Rational(r1.Numerator() * r2.Denominator(), r1.Denominator() * r2.Numerator());
};

istream& operator>>(istream& stream, Rational& r) {
    int num, den;
    char c;
    if (stream >> num && stream >> c && stream >> den)
        if (c == '/')
            r = {num, den};
    return stream;
};

ostream& operator<<(ostream& stream, const Rational& r) {
    stream << r.Numerator() << "/" << r.Denominator();
    return stream;
};

bool operator<(const Rational& r1, const Rational& r2) {
    return (r1.Numerator() / (double)r1.Denominator()) < (r2.Numerator() / (double)r2.Denominator());
};

int main() {
    try
    {
        Rational a, b;
        char ch;
        cin >> a >> ch >> b;
        if (ch == '+')
            cout << a + b << endl;
        else if (ch == '-')
            cout << a - b << endl;
        else if (ch == '*')
            cout << a * b << endl;
        else
            cout << a / b << endl;
    }
    catch (int f) {
        if (f == 1)
            cout << "Invalid argument" << endl;
        else
            cout << "Division by zero" << endl;
    }

    return 0;
}
