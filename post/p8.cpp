//q1. Write a C++ program that checks if a given string is a palindrome (reads the same forward and backward).

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    bool isPalindrome = true;
    int len = str.length();

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "\"" << str << "\" is a palindrome." << endl;
    else
        cout << "\"" << str << "\" is not a palindrome." << endl;

    return 0;
}
