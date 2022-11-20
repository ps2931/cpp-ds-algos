#include <iostream>
using namespace std;

/*
   Print Star Pattern.

           *
         * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *
    * * * * * * * * *
      * * * * * * *
        * * * * *
          * * *
            *

*/

int main() {

    int n;
    cout << "Enter an integer value: ";
    cin >> n;

    // print upper portion of pyramid
    for (int i=1; i<=n; i++){
        // print spaces
        for (int j=1; j<=n-i; j++){
            cout << "  "; // 2 spaces
        }
        // print *'s
        for(int k=1; k<=2*i-1; k++){
            cout << "*" << " ";
        }
        cout << endl;
    }


    // print lower portion of pyramid
    for (int i=n; i>=1; i--){
        // print spaces
        for (int j=1; j<=n-i; j++){
            cout << "  "; // 2 spaces
        }

        // print *'s
        for(int k=1; k<=2*i-1; k++){
            cout << "*" << " ";
        }
        cout << endl;
    }


    return 0;
}

