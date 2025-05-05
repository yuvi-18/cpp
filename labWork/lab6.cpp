// Implement a class with static member functions and data members.

// #include <iostream>
// using namespace std;

// class example{
//     public:
//     static int count;

//     static void increment(){
//         count++;
//     }

//     static void display(){
//         cout << count;
//     }
// };

// int example::count = 0;

// int main(){
//     example::increment();
//     example::increment();
//     example::display();
//     return 0;
// }



// 2. Library Management System Using Static Data Members

#include <iostream>
using namespace std;

class Library {
private:
    static int totalBooks;  // Static data member

public:
    Library() {
        totalBooks++;  // Increment when a new book is added
    }

    static void displayTotalBooks() {  // Static function
        cout << "Total books in the library: " << totalBooks << endl;
    }
};

// Initialize static data member
int Library::totalBooks = 0;

int main() {
    Library book1, book2, book3;  // Adding three books
    Library::displayTotalBooks(); // Display total book count

    return 0;
}
