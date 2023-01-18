#include <iostream>

int main() {

    int foo[5];         // declaration of a new array
    int bar[] = { 10, 20, 30 }; // declare and initialize

    // sizeof returns the size of the passed variable or data in bytes
    std::cout << sizeof(foo) << std::endl;
    std::cout << sizeof(bar) << std::endl;

    // ----------------------------------
    // get number of elements in an array
    // method-1
    std::cout
        << "Lenght of array: "
        << std::end(bar) - std::begin(bar)
        << std::endl;

    // method-2
    std::cout
        << "Length of array: "
        << sizeof(bar)/sizeof(bar[0])
        << std::endl;

    // ----------------------------------
    // traversing an array
    // method-1
    for (int i=0; i<3; i++) {
        std::cout << bar[i] << std::endl;
    }

    // method-2
    for(int e: bar) {
        std::cout << e << std::endl;
    }

    // ----------------------------------
    return 0;
}

