#include <iostream>
using namespace std;

/*
    Print Number Pattern.

        1
       1 2
      1 2 3
     1 2 3 4
    1 2 3 4 5

*/

int main() {

    int n;
    cout << "Enter an integer number: ";
    cin >> n;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i; j++){
            cout << " ";
        }
        for(int k=1; k<=i; k++){
            cout << k;
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}

