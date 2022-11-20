#include <iostream>
#include <cmath>
using namespace std;

//  Check is a given number is prime or not

int main() {
    int n;
    cout << "Enter an integer number: ";
    cin >> n;

    int flag=0;

    for (int i=2; i<=sqrt(n); i++){
        if (n%i == 0) {
            flag=1;
            break;
        }
    }

    if(flag==0) {
        cout << n <<" is a prime number" << endl;
    }else {
        cout << n <<" is not a prime number" << endl;
    }

    return 0;
}

