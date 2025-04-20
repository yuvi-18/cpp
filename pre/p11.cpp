/*
q1. Analyse how the use of functions with a variable number of arguments enhances flexibility in C++ programming, and discuss potential challenges in their implementation.

ans.
Functions with a variable number of arguments (often called variadic functions) let us write functions that can accept different numbers of parameters at runtime. This design increases flexibility, as we can write a single function to handle multiple input cases without having to overload the function for every possible argument count.ex:-

double average(int count, ...) {
    va_list args;
    va_start(args, count);
    double sum = 0;
    for (int i = 0; i < count; ++i) {
        // Assume all arguments are double
        sum += va_arg(args, double);
    }
    va_end(args);
    return sum / count;
}

int main() {
    // Calculates the average of 3 numbers
    cout << "Average: " << average(3, 4.0, 5.0, 6.0) << endl;
    return 0;
}


q2.Compare runtime and compile-time polymorphism with suitable examples.

ans. 
Compile-Time Polymorphism
Decisions about which function or operator to use are made at compile time. This is achieved through mechanisms like function overloading, operator overloading, and templates.
*/

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    cout << "Add integers: " << add(10, 20) << endl;      // Calls add(int, int)
    cout << "Add doubles: " << add(10.5, 20.5) << endl;     // Calls add(double, double)
    return 0;
}

//In the above example, the correct version of add is determined during compilation based on the types of the arguments provided.


// Runtime Polymorphism
//Here, the decision of which function to call is made at runtime using dynamic binding. This is generally achieved through inheritance and the use of virtual functions.

#include <iostream>
using namespace std;

class Animal {
public:
    // Declare a virtual function for dynamic binding
    virtual void speak() {
        cout << "Animal speaks." << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();
    
    // Calls the appropriate function based on the actual object type
    a1->speak();   // Outputs "Dog barks."
    a2->speak();   // Outputs "Cat meows."
    
    delete a1;
    delete a2;
    return 0;
}

// In this example, even though a1 and a2 are pointers to the base class Animal, the overridden speak() functions in Dog and Cat are invoked at runtime through dynamic binding.