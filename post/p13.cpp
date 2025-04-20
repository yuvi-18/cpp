/*q1. How is input and output handled in C++?
ans.
Input and output in C++ are handled using streams from the <iostream> library. We use std::cin with the extraction operator (>>) to read input and std::cout with the insertion operator (<<) to display output.

q2. Explain the concept and importance of namespaces in C++.
ans.
Namespaces in C++ provide a way to group related identifiers (like functions, classes, and variables) into a named scope. This helps avoid naming conflicts that occur when different parts of the program or libraries use the same names. For example, the Standard Library is enclosed in the std namespace, so we access its components with std::, which prevents clashes with user-defined names.

q3. Write a program demonstrating an array of `Student` objects.*/

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int roll;
    Student(string n = "", int r = 0) : name(n), roll(r) {}
    void display() const { cout << name << " " << roll << "\n"; }
};

int main() {
    Student students[3] = { Student("Alice", 101), Student("Bob", 102), Student("Charlie", 103) };
    for (const auto &s : students)
        s.display();
    return 0;
}
