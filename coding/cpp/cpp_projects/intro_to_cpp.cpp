#include <iostream>

// This is our first C++ program
// It demonstrates some key differences between C and C++

int main() {
    // In C++, we use cout for output instead of printf
    // Note the use of the "<<" operator and the "std::" namespace
    std::cout << "Hello from C++!" << std::endl;
    
    // We can also use the "using" directive to avoid typing "std::" repeatedly
    // But for now, let's keep it explicit to understand what's happening
    
    // In C++, we can declare variables anywhere in the code
    int age = 25;
    std::cout << "I am " << age << " years old." << std::endl;
    
    // In C++, we have references (which are like aliases) in addition to pointers
    int x = 10;
    int& ref = x; // ref is a reference to x
    std::cout << "x = " << x << ", ref = " << ref << std::endl;
    
    // Let's modify the reference
    ref = 20;
    std::cout << "After modifying ref: x = " << x << ", ref = " << ref << std::endl;
    
    return 0;
}