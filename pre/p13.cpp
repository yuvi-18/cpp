// Differentiate between objects and classes.Write a program to define a class called Rectangle with attributes length and width. Include member functions to set and get the values of attributes, calculate the area and perimeter of the rectangle, and display the attributes.

//Class: A blueprint or template that defines data (attributes) and functions (methods).
//Object: An instance of a class that holds actual values for its attributes and can use its methods.

#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;
public:
    void setLength(double l) { length = l; }
    void setWidth(double w) { width = w; }
    double getLength() { return length; }
    double getWidth() { return width; }
    double area() { return length * width; }
    double perimeter() { return 2 * (length + width); }
    void display() {
        cout << "Length: " << length << "\nWidth: " << width
             << "\nArea: " << area() << "\nPerimeter: " << perimeter() << endl;
    }
};
int main() {
    Rectangle rect;
    rect.setLength(10);
    rect.setWidth(5);
    rect.display();
    return 0;
}