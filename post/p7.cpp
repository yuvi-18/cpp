/*
q1. What will be the output of the following loop?
for (int i = 1; i < 5; i += 2) {

    cout << i << " ";

}

ans. 
1 and 3
reson:-
the loop starts with 1 and then adds 2 so it becomes 3 and then it becomes 5 and i < 5 so ouput remains 1 and 3
*/

// q2. Write a while loop to print even numbers from 2 to 10.

#include <iostream>
using namespace std;

int main(){
    int i = 2;
    cout << "Even numbers from 2 to 10:- " << endl;

    while (i <= 10) {
        cout << i << " ";
        i += 2;
    }
    return 0;
}