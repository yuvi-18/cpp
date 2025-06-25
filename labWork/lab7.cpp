// 1. Create a class for handling bank accounts with constructors and destructors.

#include <iostream>
using namespace std;

class BankAccount {
    string name;
    int accNum;
    double balance;
public:
    BankAccount(string n, int a, double b) : name(n), accNum(a), balance(b) {
        cout << "Account created for " << name << endl;
    }
    ~BankAccount() {
        cout << "Account for " << name << " is closed." << endl;
    }
    void display() {
        cout << "Name: " << name << ", Acc#: " << accNum << ", Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc("Alice", 12345, 1000.0);
    acc.display();
    return 0;
}

// 2. Constructor Overloading Example

#include <iostream>
using namespace std;

class BankAccount {
    string name;
    int accNum;
    double balance;

public:
    BankAccount() {
        name = "Unknown";
        accNum = 0;
        balance = 0.0;
    }

    BankAccount(string n) {
        name = n;
        accNum = 0;
        balance = 0.0;
    }

    BankAccount(string n, int a, double b) {
        name = n;
        accNum = a;
        balance = b;
    }

    void display() {
        cout << "Name: " << name << ", Acc#: " << accNum << ", Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc1;
    BankAccount acc2("John");
    BankAccount acc3("Alice", 101, 1500.0);

    acc1.display();
    acc2.display();
    acc3.display();

    return 0;
}
