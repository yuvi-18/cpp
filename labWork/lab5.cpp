// Define a class Student with attributes like name, ID, and grades.

// #include <iostream>
// #include <string>

// using namespace std;

// class student{
//     public:
//     // data types
//     string name;
//     int id;
//     char grades;

//     // constructor
//     student(string n, int i, char g){
//          name = n;
//          id = i;
//          grades = g;
//     }

//     // member function
//     void display(){
//         cout << name << endl;
//         cout << id << endl;
//         cout << grades << endl;
//     }
// };

// int main(){
//     student s1("yuvraj", 23, 'c');
//     s1.display();
//     return 0;
// }


// Employee Management System Using Classes and Objects

// Implement a program to create a class of employee to store its detail (Emp no, name, designation, department, monthly salary). Take input of 5 such employees and print the details of all employees whose salary is > 60,000.

#include <iostream>
#include <string>

using namespace std;

class employee{
    private:
    int empNo;
    string empName;
    string designation;
    string department;
    int salary;

    public:
    employee(){}

    void getDetails(){
            cout << "Enter Details for Employee: " << endl ;
            cout << "Emp number: ";
            cin >> empNo;
            cin.ignore();
            cout << "Emp name: ";
            getline(cin, empName);
            cout << "Emp designation: ";
            getline(cin, designation);
            cout << "Emp department: ";
            getline(cin, department);
            cout << "Emp salary: ";
            cin >> salary;
    }

    void display() const {
        cout << "For Employ: " << empNo << endl;
        cout << "Name: " << empName << endl;
        cout << "designation: " << designation << endl;
        cout << "department: " << department << endl;
        cout << "salary: " << salary << endl;
    }
};

int main(){
    employee e1;
    e1.getDetails();
    
    employee e2;
    e2.getDetails();

    e1.display();
    e1.display();
    return 0;
} 