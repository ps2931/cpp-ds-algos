#include <iostream>
#include <pthread.h>
using namespace std;

// Check if a number is armstrong or not

int main() {
    // Enter an integer number;
    int n;
    cin >> n;

    int sum = 0;
    int number = n;
    while (n > 0){
        int r = n % 10;
        sum += r*r*r;
        n = n/10;
    }

    if(sum == number) {
        cout << "Number is armstrong" << endl;
    } else {
        cout << "Number is not armstrong" << endl;
    }

    return 0;
}

