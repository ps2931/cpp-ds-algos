#include <iostream>
using namespace std;

/*

   Print Pascal Traingle:

          1
        1   1
      1   2   1
    1   3   3   1
  1   4   6   4   1

Every row is nothing but series of Binary Coeeficients, i.e.
1st row:    0C0
2nd row:    1C0     1C1
3rd row:    2C0     2C1     2C2
4th row:    3C0     3C1     3C2     3C3
5th row:    4C0     4C1     4C2     4C3     4c4

*/

void  pascal_traingle_v1(int n) {
    int coef = 0;

    for(int i = 0; i < n; i++) {
        for(int space=1; space<=n-i; space++)
            cout <<"  ";

        for(int j = 0; j<=i; j++) {

            if (j == 0 || i == 0) coef = 1;
            else coef = coef*(i-j+1)/j;

            cout << coef << "   ";
        }
        cout << endl;
    }
}

long fact(int n) {
    long product = 1;

    for(int i=2; i<=n; i++){
        product *= i;
    }
    return product;
}

void pascal_traingle_v2(int n) {

    for(int i = 0; i < n; i++) {
        for(int space=1; space<=n-i; space++)
            cout <<"  ";

        for(int j = 0; j<=i; j++) {
            long f = fact(i) / (fact(j)*fact(i-j));
            cout << f << "   ";
        }
        cout << endl;
    }
}

int main()
{
    int n;

    cout << "Enter number of n: ";
    cin >> n;

    // first method
    pascal_traingle_v1(n);

    std::cout << std::endl << "*************" << std::endl;

    // second method
    pascal_traingle_v2(n);

    return 0;
}


