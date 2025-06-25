// 1. Overload + operator for a Complex Number class.

#include <iostream>
using namespace std;

class Complex {
    float real;
    float imag;

public:
    Complex() {
        real = 0;
        imag = 0;
    }

    Complex(float r, float i) {
        real = r;
        imag = i;
    }

    Complex operator + (const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2.5, 3.5);
    Complex c2(1.5, 4.5);
    Complex c3;

    c3 = c1 + c2;

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Sum: ";
    c3.display();

    return 0;
}


// 2. Overloading Comparison Operators for a Date Class

#include <iostream>
using namespace std;

class Date {
    int day, month, year;

public:
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    bool operator == (const Date& other) const {
        return day == other.day && month == other.month && year == other.year;
    }

    bool operator < (const Date& other) const {
        if (year < other.year) return true;
        if (year == other.year && month < other.month) return true;
        if (year == other.year && month == other.month && day < other.day) return true;
        return false;
    }

    bool operator > (const Date& other) const {
        return !(*this < other || *this == other);
    }

    void display() const {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date d1(15, 6, 2025);
    Date d2(18, 6, 2025);

    cout << "Date 1: ";
    d1.display();
    cout << "Date 2: ";
    d2.display();

    if (d1 == d2)
        cout << "Dates are equal" << endl;
    else if (d1 < d2)
        cout << "Date 1 is earlier" << endl;
    else
        cout << "Date 1 is later" << endl;

    return 0;
}

