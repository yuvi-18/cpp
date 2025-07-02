#include <iostream>
#include <exception>
using namespace std;

// Define a custom exception class
class DivideByZeroException : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Division by zero is not allowed!";
    }
};
// Function that throws the custom exception
double divide(int a, int b) {
    if (b == 0) {
        throw DivideByZeroException();
    }
    return static_cast<double>(a) / b;
}

int main() {
    int x = 10, y = 0;

    try {
        double result = divide(x, y);
        cout << "Result: " << result << endl;
    } catch (const DivideByZeroException& e) {
        cout << "Caught exception: " << e.what() << endl;
    }

    return 0;
}
