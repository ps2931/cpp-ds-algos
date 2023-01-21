#include <iostream>
#include <cmath>

// Find all prime numbers between given two numbers

bool isPrime(int num) {
    for (int i=2; i <= sqrt(num); i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    int a{}, b{};
    std::cout <<
        "Enter two integer (first should be less than second)"
        << std::endl;;
    std::cin >> a;
    std::cin >> b;

    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
