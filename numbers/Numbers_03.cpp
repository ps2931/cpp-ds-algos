#include <iostream>
#include <pthread.h>

// Check if a number is armstrong or not
// 153 = 1^3 + 5^3 + 3^3

int main() {
    int n;
    std::cout << "Enter an integer number: ";
    std::cin >> n;

    int sum = 0;
    int number = n;
    while (n > 0){
        int r = n % 10;
        sum += r*r*r;
        n = n/10;
    }

    if(sum == number) {
        std::cout << "Number is armstrong" << std::endl;
    } else {
        std::cout << "Number is not armstrong" << std::endl;
    }

    return 0;
}

