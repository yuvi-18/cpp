/*q1. Show the difference between abstraction and encapsulation? Give a real-world analogy.
ans.Abstraction involves showing only the necessary features and hiding the complex details. Think of it as a car’s dashboard: we use the steering, accelerator, and brake without knowing how the engine works.
Encapsulation means bundling data and methods together and hiding the internal state from outside interference. It’s like the car’s engine: its inner workings are protected and not exposed to the driver.
In short, abstraction simplifies interaction by hiding complexity, while encapsulation protects the internal state of an object.

q2. Design a Car class with encapsulated attributes (model, speed) and abstracted methods (accelerate (), brake ()).*/
#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string model;
    int speed;
public:
    Car(string m) : model(m), speed(0) { }
    void accelerate() { speed += 10; }
    void brake() { if(speed >= 10) speed -= 10; }
    void display() { cout << "Model: " << model << ", Speed: " << speed << endl; }
};

int main() {
    Car myCar("Toyota");
    myCar.display();
    myCar.accelerate();
    myCar.display();
    myCar.brake();
    myCar.display();
    return 0;
}
