#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


bool isPalindrom(string str){
    int len = str.length();
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            return false;
        }
        return true;
    }
}

int main(){
    // cout << "Hello" << endl;
    // cout << "World" ;


    // int myNum =  15;
    // myNum = 10;
    // cout << myNum; // this will change the values of the myNum variable.

    // int age = 10;

    // cout << "My age is " << age << " years old.";

    // srand(time(0));
    // int number = rand () % 100 + 1;
    // int guess;
    // cout << "Guess a number bteween 1 and 100: ";
    // do
    // {
    //     cin >> guess;
    //     if (guess > number)
    //     {
    //         cout << "Too high! try again: ";
    //     } else if (guess < number)
    //     {
    //         cout << "Too low! try again: ";
    //     } else
    //     {
    //         cout << "Congratulations! You guessed the number. \n";
    //     }
    // } while (guess != number);

    // string str;
    // cout << "Enter a string: ";
    // cin >> str;
    // if (isPalindrom(str))
    // {
    //     cout << "The string is a palindrome." << endl;
    // } else
    // {
    //     cout << "The string is not a palindrome." << endl;
    // }



    return 0;
}