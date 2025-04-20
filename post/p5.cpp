// q1. Write a C++ program demonstrating the use of different data types (primitive, derived, and user-defined).

#include <iostream>
using namespace std;

struct person{
    string name;
    int age;
};

int main(){
    // Primitve
    int a = 10;
    float b = 10.22;
    char c = 'h';

    // Derived data type

    int array[4] = {1, 2, 3, 4};
    int *ptr = &a;
    int &ref = a;
    /*
    int a = 10;
    int &alias = a;  // 'alias' becomes another name for 'a'
    alias = 20;      // Changes the value of 'a' to 20 
    */


    // User-defined
    person p1 = {"Dhruv", 20};
}