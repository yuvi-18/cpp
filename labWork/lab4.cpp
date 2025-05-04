//1. Implement a recursive function to calculate the factorial of a number.

// #include <iostream>
// using namespace std;

// long long factorial(int num){
//     if(num == 1 || num == 0){
//         return 1;
//     }
//     return num * factorial(num -1);
// }

// int main(){
//     int num;
//     cout << "Enter a Number: " ;
//     cin >> num ;

//     if(num < 0){
//         cout << "Enter a positive number"; 
//         return 0;
//     }

//     long long result = factorial(num);
//     cout << result;
//     return 0;
// }


// 2. Develop a number-guessing game using loops and conditional statements.

// #include <iostream>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// int main() {
//     srand(time(0)); 
//     int secretNumber = rand() % 100 + 1;
//     int guess;
    
//     cout << "Guess the number (between 1 and 100): ";
//     while (true) {
//         cin >> guess;
//         if (guess < secretNumber)
//             cout << "Too low. Try again: ";
//         else if (guess > secretNumber)
//             cout << "Too high. Try again: ";
//         else {
//             cout << "Congratulations! You guessed the number." << endl;
//             break;
//         }
//     }
    
//     return 0;
// }


// 3. Palindrome Checker for Strings.

// #include <iostream>
// #include <string>

// using namespace std;

// bool isPalindrome(string word){
//     int left = 0, right = word.length() - 1;
//     while (left < right)
//     {
//         if(word[left] != word[right]){
//             return false;
//         }
//         right--;
//         left++;
//     }
//     return true;
// }

// int main(){
//     string word;
//     cout << "Enter a Word: " ;
//     cin >> word;

//     if (isPalindrome(word))
//     {
//         cout << "The word is a palindrome";
//     }
//     else {
//         cout << "The word is not a palindrome";
//     }
//     return 0;
// }



// 4. Create a program to reverse a string and sort an array.

#include <iostream>
#include <string>
using namespace std;

void reverseString(string &str) {
    int left = 0, right = str.length() - 1;

    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    string input;
    int size;
    cout << "Enter a string: ";
    getline(cin, input);

    reverseString(input);
    cout << "Reversed string: " << input << endl;

    cout << "Enter the number of elements: ";
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    sortArray(arr, size);
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}
