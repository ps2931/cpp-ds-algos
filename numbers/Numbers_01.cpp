#include <iostream>
#include <cmath>

//  Check if a given number is prime or not

int main() {
    int n;
    std::cout << "Enter an integer number: ";
    std::cin >> n;

    int flag=0;

    for (int i=2; i<=sqrt(n); i++){
        if (n%i == 0) {
            flag=1;
            break;
        }
    }

    if(flag==0) {
        std::cout << n <<" is a prime number" << std::endl;
    }else {
        std::cout << n <<" is not a prime number" << std::endl;
    }

    return 0;
}

