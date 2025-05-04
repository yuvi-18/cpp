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

    void getDetails(int i){
        for (int i = 1; i <= 5; i++)
        { 
            cout << "Enter Details for " << i << " Employee: " << endl ;
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
    }

    void display() const {
        cout << "For Employ: " << empNo << endl;
        cout << empName << endl;
        cout << designation << endl;
        cout << department << endl;
        cout << salary << endl;
    }
};

int main(){
    const int numEmployees = 5;
    employee employees[numEmployees];
    for (int i = 0; i < numEmployees; i++) {
        employees[i].getDetails(i);
    }
    for (int i = 0; i < numEmployees; i++) {
        employees[i].display();
    }
    return 0;
} 



// not finished 