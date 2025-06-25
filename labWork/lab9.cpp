// 1. Implement runtime polymorphism using virtual functions.

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a;
    Dog d;
    Cat c;

    a = &d;
    a->sound();

    a = &c;
    a->sound(); 

    return 0;
}


// 2. Animal Sound Simulator Using Polymorphism

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Some generic animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog says: Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat says: Meow!" << endl;
    }
};

class Cow : public Animal {
public:
    void makeSound() override {
        cout << "Cow says: Moo!" << endl;
    }
};

int main() {
    Animal* animal;

    Dog d;
    Cat c;
    Cow w;

    animal = &d;
    animal->makeSound();

    animal = &c;
    animal->makeSound();

    animal = &w;
    animal->makeSound();

    return 0;
}


// 3. Abstract Class Implementation for Payment Systems

#include <iostream>
using namespace std;

class Payment {
public:
    virtual void makePayment() = 0;
};

class CreditCard : public Payment {
public:
    void makePayment() override {
        cout << "Payment made using Credit Card." << endl;
    }
};

class PayPal : public Payment {
public:
    void makePayment() override {
        cout << "Payment made using PayPal." << endl;
    }
};

class UPI : public Payment {
public:
    void makePayment() override {
        cout << "Payment made using UPI." << endl;
    }
};

int main() {
    Payment* payment;

    CreditCard cc;
    PayPal pp;
    UPI upi;

    payment = &cc;
    payment->makePayment();

    payment = &pp;
    payment->makePayment();

    payment = &upi;
    payment->makePayment();

    return 0;
}
