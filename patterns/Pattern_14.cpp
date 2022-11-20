#include <iostream>
using namespace std;

/*
    Print ZigZag Pattern
    For n = 13

        *       *       *
      *   *   *   *   *   *
    *       *       *       *

*/

int main() {
    int n;
    cout << "Enter an integer number: ";
    cin >> n;

    for (int i=1; i<=3; i++){
        for (int j=1; j<=n; j++){
            if( ((i+j)%4 == 0) || (i==2 && j%4==0) ){
                cout << "* ";
            }else {
                cout << "  "; // 2 spaces;
            }
        }
        cout << endl;
    }
    return 0;
}

