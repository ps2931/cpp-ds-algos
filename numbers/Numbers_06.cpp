#include <iostream>

// Calculate Binomial Coeffcient
// nCr = n! / ( (n-r)! * r! )

int factorial(int n) {
    int product = 1;

    for (int i=1; i<=n; i++){
        product *= i;
    }

    return product;
}

int main() {
    int n, r;

    std::cout << "Enter value of n: ";
    std::cin >> n;
    std::cout << "Enter value of r: ";
    std::cin >> r;

    int result = factorial(n) / (factorial(n-r) * factorial(r));
    std::cout << result << std::endl;

    return 0;
}

