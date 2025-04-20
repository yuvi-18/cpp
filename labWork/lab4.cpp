//1. Implement a recursive function to calculate the factorial of a number.

// #include <iostream>
// using namespace std;

// unsigned long long factorial(int n) {
//     if(n <= 1)
//         return 1;
//     return n * factorial(n - 1);
// }

// int main() {
//     int number;
//     cin >> number;
//     cout << factorial(number);
//     return 0;
// }

// 2. Develop a number-guessing game using loops and conditional statements.

// #include <iostream>
// #include <cstdlib>

// using namespace std;

// int main() {
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

// bool isPalindrome(const string &str) {
//     int start = 0, end = str.size() - 1;
//     while (start < end) {
//         if (str[start] != str[end])
//             return false;
//         start++;
//         end--;
//     }
//     return true;
// }

// int main() {
//     string input;
//     cout << "Enter a string: ";
//     getline(cin, input);
    
//     if (isPalindrome(input))
//         cout << "\"" << input << "\" is a palindrome." << endl;
//     else
//         cout << "\"" << input << "\" is not a palindrome." << endl;

//     return 0;
// }


// 4. Create a program to reverse a string and sort an array.

// #include <iostream>
// #include <string>
// using namespace std;

// void reverseString(string &str) {
//     int start = 0, end = str.size() - 1;
//     while (start < end) {
//         char temp = str[start];
//         str[start] = str[end];
//         str[end] = temp;
//         start++;
//         end--;
//     }
// }

// void sortArray(int arr[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     string input;
//     cout << "Enter a string: ";
//     getline(cin, input);

//     reverseString(input);
//     cout << "Reversed string: " << input << endl;
    
//     int n;
//     cout << "Enter number of elements in the array: ";
//     cin >> n;
//     int *arr = new int[n];
//     cout << "Enter " << n << " numbers: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
    
//     sortArray(arr, n);
//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;
    
//     delete[] arr;
//     return 0;
// }
