#include <iostream>

// Reverse a number
// E.g 1234 => 4321

int main() {
    int n;

    std::cout << "Enter an integer number: ";
    std::cin >> n;

    int reverse_number=0;

    while(n >0) {
        int r = n%10;
        reverse_number = reverse_number * 10 + r;
        n = n/10;
    }

    std::cout << "Reversed number is " << reverse_number << std::endl;

    return 0;
}

