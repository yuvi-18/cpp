/* q1. Identify the prerequisite knowledge required for this course and demonstrate the installation and setup of essential C++ development tools (such as CodeBlocks, Dev-C++, or Visual Studio).

ans. We need basic programming concepts, logical reasoning, and some familiarity with computers. Understanding C is optional but can help, if we already know c, which we know since we worked with c language in the prev semester then it can help use to easliy understand c++ as only the syntax and some fucntionality is different but the logics, loops, function etc remains the same.
Install vs code from the official website and then open it, install gcc and set up it in the environmental variables then insatll c intelligence extension in vs code and we are all setup to code. */

// q2. Write a simple "Hello, World!" program.

#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

//q3. Swapping Two Numbers Without Using a Third Variable.

#include <iostream>
int main(){
    int a = 10,  b = 20;

    a = a + b;
    b = a - b;
    a = b + b;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    return 0;
}
