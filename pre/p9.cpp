/*
q1. What is the default access level in a class? Provide an example.

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

/*q2. What are the benefits of using recursion in C++?

ans.
Recursion simplifies solutions by:
Breaking problems into smaller, identical subproblems.
Providing elegant code for tasks like tree traversals and backtracking.
Often reducing the amount of code compared to iterative methods.
*/