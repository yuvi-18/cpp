/*q1. How is input and output handled in C++?
ans.
Input and output in C++ are handled using streams from the <iostream> library. We use std::cin with the extraction operator (>>) to read input and std::cout with the insertion operator (<<) to display output.

q2. Explain the concept and importance of namespaces in C++.
ans.
Namespaces in C++ provide a way to group related identifiers (like functions, classes, and variables) into a named scope. This helps avoid naming conflicts that occur when different parts of the program or libraries use the same names. For example, the Standard Library is enclosed in the std namespace, so we access its components with std::, which prevents clashes with user-defined names.

q3. Write a program demonstrating an array of `Student` objects.*/

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;
    float marks;

    void getDetails() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << ", Marks: " << marks << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student students[n];
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Student " << i + 1 << ":" << endl;
        students[i].getDetails();
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; i++) {
        students[i].display();
    }
    
    
    return 0;
}
