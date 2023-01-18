#include <iostream>

// When a variable is declared as a reference, it becomes an alternative name
// for an existing variable.
int main() {
    int a = 10;
    int& ref = a;

    ref++;

    std::cout <<"a: " << a << '\n'; // 11

    return 0;
}

