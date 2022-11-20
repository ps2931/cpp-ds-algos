#include <iostream>
using namespace std;

/*
    Print rectangular pattern like this:

    *****
    *****
    *****
    *****
    *****
*/

int main() {
    int rows, cols = 0;

    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter number of cols: ";
    cin>>cols;

    for (int i = 1; i<=rows; i++) {
        for (int i = 1; i<=rows; i++) {
            cout<< "*";
        }
        cout<<endl;
    }
    return 0;
}

