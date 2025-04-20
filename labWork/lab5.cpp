// Define a class Student with attributes like name, ID, and grades.

// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// class Student {
// public:
//     string name;
//     int id;
//     vector<double> grades; // Stores multiple grades
// };

// int main() {
//     Student s;
//     s.name = "Alice";
//     s.id = 101;
//     s.grades = {90.5, 85.0, 78.2};

//     cout << "Student Name: " << s.name << "\n";
//     cout << "Student ID: " << s.id << "\nGrades: ";
//     for (double grade : s.grades)
//         cout << grade << " ";
//     cout << "\n";

//     return 0;
// }


// Employee Management System Using Classes and Objects

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Employee {
    int id;
    string name;
    double salary;
public:
    Employee(int i, const string &n, double s) : id(i), name(n), salary(s) {}
    void display() const {
        cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << "\n";
    }
};

int main() {
    vector<Employee> employees;
    int choice;
    
    do {
        cout << "\nEmployee Management System Menu:\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if(choice == 1) {
            int id;
            double salary;
            string name;
            cout << "Enter Employee ID: ";
            cin >> id;
            cin.ignore(); // Clear newline character from input buffer
            cout << "Enter Employee Name: ";
            getline(cin, name);
            cout << "Enter Employee Salary: ";
            cin >> salary;
            employees.push_back(Employee(id, name, salary));
        }
        else if(choice == 2) {
            if(employees.empty())
                cout << "No employees found.\n";
            else {
                for(const auto &emp : employees)
                    emp.display();
            }
        }
    } while(choice != 3);
    
    return 0;
}
