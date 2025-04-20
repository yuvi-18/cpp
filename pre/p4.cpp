/*
q1. List IDE and tools required to be installed on a system to perform C++ Programming.

ans. To develop and run C++ programs, we'll need an Integrated Development Environment (IDE) or a code editor along with a compiler.

IDE:-
Visual Studio – A powerful IDE by Microsoft with excellent debugging tools(Insatlling some cpp extension will help).
Dev-C++ – Simple and beginner-friendly.

Compilers:-
GCC (GNU Compiler Collection) – Widely used, open-source compiler.
MinGW – A Windows-based port of GCC.



q2. Describe the concept of namespace and its significance in C++ programming.

ans.A namespace is simply a way to group related code together. It helps keep our code organized and prevents name clashes when different parts of our program (or different libraries) use the same names. For example, when we write std::cout, the std tells us that cout is part of the standard library.

Key Points about Namespaces

Avoiding Name Collisions: When two libraries or parts of our code define functions or classes with the same name, the compiler would normally raise errors due to ambiguity(Ambiguity in programming means there’s confusion about which function, variable, or class we're referring to when the same name appears in multiple places.). Namespaces solve this issue by qualifying each identifier with a namespace name. For example, we can have Math::Vector and Graphics::Vector in the same project without conflicts.

Structured Code Organization: By organizing code into namespaces, our programs become more readable and maintainable. It enables us to logically partition functionality, making it easier to understand which parts of the code belong to which module or library.

Scope Resolution Operator (::): The scope resolution operator is used with namespaces to allow access to the identifiers contained within them. For instance, accessing the cout object from the standard library involves std::cout, where std is the namespace.

Using Directives and Declarations: Although we can always refer to a member by explicitly qualifying it (e.g., std::cout), C++ provides the using directive to simplify code. However, we need to use it judiciously because importing an entire namespace can possibly lead to the same naming collisions we're trying to avoid. For example: */

#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}

/* The above code is shorter but, in larger projects or header files, it's usually better to avoid using namespace directives to keep our scope clear.
We can define different namespaces in C++ using the namespace keyword followed by a unique name and a block of code. */

#include <iostream>

namespace FirstNamespace {
    void greet() {
        std::cout << "Hello from FirstNamespace!" << std::endl;
    }
}

namespace SecondNamespace {
    void greet() {
        std::cout << "Hello from SecondNamespace!" << std::endl;
    }
}

int main() {
    // Access functions from the namespaces using the scope resolution operator ::
    FirstNamespace::greet();
    SecondNamespace::greet();
    return 0;
}

// In this example, we have two namespaces: FirstNamespace and SecondNamespace. Each contains its own greet() function. By using the scope resolution operator (::), we tell the compiler exactly which greet() function to call, avoiding ambiguity between names.

