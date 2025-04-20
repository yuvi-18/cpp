/*
q1. Explain the concept and importance of namespaces in C++.

ans.
Namespaces in C++ provide a way to group related identifiers (like variables, functions, and classes) into a unique scope. This grouping helps us avoid naming conflicts and organize our code better. For example, the standard library is enclosed in the std namespace.


q2. What is the default access level in a class? Provide an example.

ans.
if we don't specify an access modifier for members in a class, they are private by default.
This means that the data members and member functions are accessible only within the class itself (or by friend functions/classes).
*/

#include <iostream>
using namespace std;

class MyClass {
    int x;  // this is private by default

public:
    MyClass(int val) {
        x = val;
    }
    void display() {
        cout << "x = " << x << endl;
    }
};

int main() {
    MyClass obj(10);
    // obj.x = 20; // This would produce a compile error because x is private.
    obj.display();  // Output: x = 10
    return 0;
}