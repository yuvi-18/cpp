// Write a C++ program to design a base class Person (name, address, phone_no). Derive a class Employee (eno, ename) from Person. Derive a class Manager (designation, department name, basic-salary) from Employee. Write a menu driven program to: i. Accept all details of 'n' managers. ii Display manager having highest salary. 

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person {
public:
    string name;
    string address;
    string phone_no;
};

class Employee : public Person {
public:
    int eno;
    string ename;
};

class Manager : public Employee {
public:
    string designation;
    string dept_name;
    double basic_salary;
};

int main() {
    vector<Manager> managers;
    int choice;
    do {
        cout << "1. Accept details of managers\n";
        cout << "2. Display manager with highest salary\n";
        cout << "3. Exit\n";
        cin >> choice;
        cin.ignore();
        if(choice == 1) {
            int n;
            cout << "Enter number of managers: ";
            cin >> n;
            cin.ignore();
            managers.resize(n);
            for(int i = 0; i < n; i++) {
                cout << "\nManager " << i+1 << ":\n";
                cout << "Name: ";
                getline(cin, managers[i].name);
                cout << "Address: ";
                getline(cin, managers[i].address);
                cout << "Phone no: ";
                getline(cin, managers[i].phone_no);
                cout << "Employee number: ";
                cin >> managers[i].eno;
                cin.ignore();
                cout << "Employee name: ";
                getline(cin, managers[i].ename);
                cout << "Designation: ";
                getline(cin, managers[i].designation);
                cout << "Department name: ";
                getline(cin, managers[i].dept_name);
                cout << "Basic salary: ";
                cin >> managers[i].basic_salary;
                cin.ignore();
            }
        }
        else if(choice == 2) {
            if(managers.empty()) {
                cout << "No manager data available.\n";
            }
            else {
                int maxIndex = 0;
                for(size_t i = 1; i < managers.size(); i++) {
                    if(managers[i].basic_salary > managers[maxIndex].basic_salary)
                        maxIndex = i;
                }
                Manager m = managers[maxIndex];
                cout << "\nManager with highest salary:\n";
                cout << "Name: " << m.name << "\n";
                cout << "Address: " << m.address << "\n";
                cout << "Phone no: " << m.phone_no << "\n";
                cout << "Employee number: " << m.eno << "\n";
                cout << "Employee name: " << m.ename << "\n";
                cout << "Designation: " << m.designation << "\n";
                cout << "Department name: " << m.dept_name << "\n";
                cout << "Basic salary: " << m.basic_salary << "\n";
            }
        }
    } while(choice != 3);
    return 0;
}
