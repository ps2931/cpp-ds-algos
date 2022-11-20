#include <iostream>
using namespace std;

/*
    Palindromic Pattern.
            1
          2 1 2
        3 2 1 2 3
      4 3 2 1 2 3 4
    5 4 3 2 1 2 3 4 5
*/

int main() {

    int n;
    cout << "Enter an integer number: ";
    cin >> n;

    for (int i=1; i<=n; i++){
        // print spaces
        for (int j=1; j<=n-i; j++){
            cout << "  "; // 2 spaces
        }
        // print first half of the pattern
        for(int k=i; k>=1; k--){
            cout << k << " ";
        }
        // print second half of the pattern
        for(int p=2; p<=i; p++){
            cout << p << " ";
        }
        cout << endl;
    }

    return 0;
}

