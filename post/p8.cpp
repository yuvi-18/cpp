//q1. Write a C++ program that checks if a given string is a palindrome (reads the same forward and backward).

#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string word){
    int left = 0, right = word.length() - 1;
    while (left < right)
    {
        if(word[left] != word[right]){
            return false;
        }
        right--;
        left++;
    }
    return true;
}

int main(){
    string word;
    cout << "Enter a Word: " ;
    cin >> word;

    if (isPalindrome(word))
    {
        cout << "The word is a palindrome";
    }
    else {
        cout << "The word is not a palindrome";
    }
    return 0;
}