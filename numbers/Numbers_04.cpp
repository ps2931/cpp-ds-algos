#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    for (int i=2; i<=sqrt(num); i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main() {
    int a, b;
    cout << "Find prime numbers between given two numbers";
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;

    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
