#include <iostream>

/*
Decimal number system:
1234 = 1*10^3 + 2*10^2 + 3*10^1 + 4*10^0

Binary number system:
45 = 1*2^5 + 0*2^4 + 1*2^3 + 1*2^2 + 0*2^1 + 1*2^0
   = 101101

Decimal to binary conversion
============================

Approach:
N       R=N%10  Q=N/10
----------------------
1234    R=4     Q=123
123     R=3     Q=12
12      R=2     Q=1
1       R=1     Q=0

N       R=N%2       Q=N/2
-------------------------
45      1           22
22      0           11
11      1           5
5       1           2
2       0           1
1       1           0

Read R in reverse order gives 101101

Binary to Decimal conversion
============================
101101 => 1*2^5 + 0*2^4 + 1*2^3 + 1*2^2 +0*2^1 + 1*2^0



*/

int main() {
    return 0;
}

