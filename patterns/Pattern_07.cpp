#include <iostream>
using namespace std;

/*
    Print Butterfly Pattern.

    For n = 4

    *             *
    * *         * *
    * * *     * * *
    * * * * * * * *
    * * * * * * * *
    * * *     * * *
    * *         * *
    *             *

*/

int main() {

    int n;
    cout << "Enter an integer number: ";
    cin >> n;

    // Print upper portion of pattern.
    for (int i=1; i<=n; i++){
        for(int j=1; j<=i;j++){
            cout << "* ";
        }
        int num_of_spaces = 2 * n - 2 * i;
        for (int k=1; k<=num_of_spaces; k++){
            cout << "  "; // 2 spaces
        }
        for(int j=1; j<=i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Print lower portion of pattern.
    for (int i=n; i>=1; i--){
        for(int j=1; j<=i;j++){
            cout << "* ";
        }
        int num_of_spaces = 2 * n - 2 * i;
        for (int k=1; k<=num_of_spaces; k++){
            cout << "  "; // 2 spaces
        }
        for(int j=1; j<=i; j++) {
            cout << "* ";
        }
        cout << endl;
    }


    return 0;
}
