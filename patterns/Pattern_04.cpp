#include <iostream>
using namespace std;

/*
    Half Pyramid After 180 degree rotation:
           *
          **
         ***
        ****
       *****
      ******
     *******
    ********
*/

int main() {

    int n;
    cout << "Enter an integer number: ";
    cin >> n;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++) {
            if (j <= n-i) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}

