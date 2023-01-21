#include <iostream>

// Print fibonacci series
// 0 1 1 2 3 5 8 13 21 ...

void fibonacci(int n) {
    int t1 = 0;
    int t2 = 1;
    int nextTerm;

    for(int i=1; i<=n; i++){
        std::cout << t1 << std::endl;;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}

int main() {

    int n;
    std::cout << "Enter an integer number: ";
    std::cin >> n;

    fibonacci(n);

    return 0;
}

