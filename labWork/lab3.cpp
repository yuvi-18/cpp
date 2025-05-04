// q1. Pattern Printing Using Loops (e.g., pyramid, diamond patterns)


#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter Number choice for increasing star(1), pyramid(2), reversed star(3), reversed pyramid(4), diamod pattern(5): " << endl;
    cin >> num ;
    
    if(num != 1 && num != 2 && num != 3 && num != 4 && num != 5){
        cout << "Enter a valid choice between 1 and 5" << endl;
        return 0;
    }
    
    int rows;
    cout << "Enter number of rows in the pattern" << endl;
    cin >> rows;
    
    
    // simple increasing star pattern
    if(num == 1){
        cout << "simple increasing star pattern: " << endl;

        for(int i = 1; i <= rows; i++){
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        return 0;
    } 
    
    // pyramid pattern
    if(num == 2){
        cout << "Pyramid pattern: " << endl;

        for(int i = 1; i <= rows; i++){
            for(int j = 1; j <= (rows - i); j++){
                cout << " ";
            }
            for(int k = 1; k <= (2 * i) - 1 ; k++ ){
                cout << "*";
            } 
            cout << endl;
        }
        return 0;
    }


    // reveresed star pattern
    if(num == 3){
        cout << "Reversed star pattern: " << endl;

        for (int i = rows; i >= 1; i--) { // Start from the max rows and decrease
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl; // Move to the next line
        }
        return 0;
    }


    // reversed pyramid pattern
    if(num == 4){
        cout << "Reversed pyramid pattern: " << endl;

        for( int i =  rows ; i >= 1 ; i--){
            for(int j = 0; j < rows - i; j++){
                cout << " ";
            }
            for(int k = 0; k < (2 * i) - 1; k++){
                cout << "*";
            }
            cout << endl;
        }
        return 0;
    }


    // diamond pattern 
    if(num == 5){
        cout << "Diamond Pattern" << endl;

        for(int i = 1; i <= rows; i++){
            for(int j = 1; j <= rows - i; j++){
                cout << " ";
            }
            for(int k = 1; k <= (2 * i) - 1; k++){
                cout << "*";
            }
            cout << endl;
        }
        for(int i = (rows -1) ; i >= 1; i--){
            for(int j = 0; j < rows - i; j++){
                cout << " ";
            }
            for(int k = 0; k < (2 * i) - 1; k++){
                cout << "*";
            }
            cout << endl;
        }
        return 0;
    }
    return 0;
}

// q2. Develop a number-guessing game using loops and conditional statements.


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;

    cout << "Guess a number" ;
    
    while (true)
    {
        cin >> guess;
        if (guess < secretNumber)
        {
            cout << "Too low!, Try again: " << endl;
        }
        else if (guess > secretNumber)
        {
            cout << "Too high!, Try again: " << endl;
        }
        else {
            cout << "You guessed the number: " << secretNumber;
            break;
        }
    }
    return 0;
}