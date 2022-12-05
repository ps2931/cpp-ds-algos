#include <iostream>
using namespace std;

// Calculate Binomial Coeffcient
// nCr = n! / ((n-r)! * r!)

int factorial(int n) {
    int product = 1;
    for (int i=1; i<=n; i++){
        product *= i;
    }
    return product;
}

int main() {
    int n, r;

    cout << "Enter value of n: ";
    cin >> n;
    cout << "Enter value of r: ";
    cin >> r;

    int result = factorial(n) / (factorial(n-r) * factorial(r));
    cout << result << endl;

    return 0;
}

