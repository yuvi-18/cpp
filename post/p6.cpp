//q1. Write a program that takes a number as input and uses the ternary operator (? :) to check whether it is even or odd.

// #include <iostream>
// using namespace std;

// int main(){
//     int num;
//     cout << "Enter any number: ";
//     cin >> num;

//     (num % 2) == 0 ? cout << "Even Number" : cout << "Odd Number";
//     return 0;
// }


// q2. Write a C++ program to create a Simple Calculator that performs basic arithmetic operations (Addition, Subtraction, Multiplication, Division, and Modulus)


#include <iostream>
using namespace std;

int main() {
    char op;
    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    if(op == '%') {
        int a, b;
        cout << "Enter two integers: ";
        cin >> a >> b;
        if(b == 0) {
            cout << "Error: Division by zero is not allowed." << endl;
        } else {
            cout << a << " " << op << " " << b << " = " << (a % b) << endl;
        }
    }
    else {
        double num1, num2;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch(op) {
            case '+':
                cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
                break;
            case '/':
                if(num2 == 0) {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                else {
                    cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
                }
                break;
            default:
                cout << "Error: Invalid operator." << endl;
                break;
        }
    }
    
    return 0;
}
