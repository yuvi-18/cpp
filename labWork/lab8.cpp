// 1. Matrix Operations Using Classes (Addition, Subtraction, Multiplication)

#include <iostream>
using namespace std;

class Matrix {
    int a[2][2];

public:
    void input() {
        cout << "Enter 4 elements (2x2 matrix):\n";
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                cin >> a[i][j];
    }
    void display() {
        cout << "Matrix:\n";
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
    Matrix add(Matrix m) {
        Matrix result;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                result.a[i][j] = a[i][j] + m.a[i][j];
        return result;
    }
    Matrix subtract(Matrix m) {
        Matrix result;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                result.a[i][j] = a[i][j] - m.a[i][j];
        return result;
    }
    Matrix multiply(Matrix m) {
        Matrix result;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++) {
                result.a[i][j] = 0;
                for (int k = 0; k < 2; k++)
                    result.a[i][j] += a[i][k] * m.a[k][j];
            }
        return result;
    }
};

int main() {
    Matrix m1, m2, sum, diff, prod;

    cout << "Matrix 1:\n";
    m1.input();
    cout << "Matrix 2:\n";
    m2.input();

    sum = m1.add(m2);
    diff = m1.subtract(m2);
    prod = m1.multiply(m2);

    cout << "\nAddition:\n";
    sum.display();

    cout << "\nSubtraction:\n";
    diff.display();

    cout << "\nMultiplication:\n";
    prod.display();

    return 0;
}


// 2 Create a base class Shape and derive classes like Circle, Square.

#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Circle : public Shape {
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

class Square : public Shape {
    float side;

public:
    Square(float s) {
        side = s;
    }

    void area() {
        cout << "Area of Square: " << side * side << endl;
    }
};

int main() {
    Shape* shape;

    Circle c(5.0);
    Square s(4.0);

    shape = &c;
    shape->area();

    shape = &s;
    shape->area();

    return 0;
}


// 3 Vehicle Management System Using Inheritance

#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
    int year;

public:
    void setDetails(string b, int y) {
        brand = b;
        year = y;
    }

    void showDetails() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

class Car : public Vehicle {
    int doors;

public:
    void setCarDetails(string b, int y, int d) {
        setDetails(b, y);
        doors = d;
    }

    void showCar() {
        showDetails();
        cout << "Type: Car, Doors: " << doors << endl;
    }
};

class Bike : public Vehicle {
    string type;

public:
    void setBikeDetails(string b, int y, string t) {
        setDetails(b, y);
        type = t;
    }

    void showBike() {
        showDetails();
        cout << "Type: Bike, Category: " << type << endl;
    }
};

int main() {
    Car c;
    Bike b;

    c.setCarDetails("Toyota", 2022, 4);
    b.setBikeDetails("Yamaha", 2021, "Sports");

    cout << "Vehicle Info:\n";
    c.showCar();
    b.showBike();

    return 0;
}
