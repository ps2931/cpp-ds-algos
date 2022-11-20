#include <iostream>
using namespace std;

// Reverse a number

int main() {
    int n;
    cout << "Enter an integer number: ";
    cin >> n;

    int reverse_number=0;

    while(n >0) {
        int r = n%10;
        reverse_number = reverse_number * 10 + r;
        n = n/10;
    }

    cout << "Reversed number is " << reverse_number << endl;

    return 0;
}

