//q1. Create a basic calculator using arithmetic and logical operators. 

// #include <iostream>
// using namespace std;

// int main() {
//     double num1, num2;
//     char op;
    
//     cout << "Enter first number: ";
//     cin >> num1;
//     cout << "Enter an operator (+, -, *, /, %): ";
//     cin >> op;
//     cout << "Enter second number: ";
//     cin >> num2;

//     if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%') {
//         cout << "Error: Invalid operator!" << endl;
//         return 1;
//     }
    
//     if ((op == '/' || op == '%') && num2 == 0) {
//         cout << "Error: Division or modulus by zero is not allowed." << endl;
//         return 1;
//     }
    
//     if (op == '%') {
//         // Convert the operands to integers for modulas
//         int intNum1 = static_cast<int>(num1);
//         int intNum2 = static_cast<int>(num2);
//         cout << intNum1 << " " << op << " " << intNum2 << " = " << (intNum1 % intNum2) << endl;
//     } else {
//         double result;
//         switch(op) {
//             case '+':
//                 result = num1 + num2;
//                 break;
                
//             case '-':
//                 result = num1 - num2;
//                 break;
                
//             case '*':
//                 result = num1 * num2;
//                 break;
                
//             case '/':
//                 result = num1 / num2;
//                 break;
//         }
//         cout << num1 << " " << op << " " << num2 << " = " << result << endl;
//     }
//     return 0;
// }

//q2. Write a C++ program that checks whether the two numbers entered by the user are equal or not. 

// #include <iostream>
// using namespace std;

// int main() {
//     double num1, num2;
//     cout << "Enter the first number: ";
//     cin >> num1;
//     cout << "Enter the second number: ";
//     cin >> num2;
    
//     if (num1 == num2) {
//         cout << "The two numbers are equal." << endl;
//     } else {
//         cout << "The two numbers are not equal." << endl;
//     }
//     return 0;
// }

//q3. write a C++ program to find the reverse of a number.

#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0, remainder;
    
    cout << "Enter a number: ";
    cin >> num;
    
    int original = num;
    
    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder; 
        num /= 10;
    }
    cout << "The reverse of " << original << " is " << reverse << endl;
    return 0;
}
