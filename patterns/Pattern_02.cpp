#include <iostream>
using namespace std;

/*
    Print Patterns like this
    ********
    *      *
    *      *
    *      *
    *      *
    ********
*/

int main() {

    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of cols: ";
    cin >> cols;

    for (int i = 1; i<= rows; i++) {
        for (int j = 1; j<=cols; j++) {
            if (i==1 || i == rows || j == 1 || j == cols) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}


