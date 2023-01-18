/* Time and Space Complexity

   The time complexity estimates how an algorithm performs regardless of the kind
   of machine it runs on. You can get the time complexity by "counting" the
   number of operations performed by your code. This time complexity is defined
   as a function of the input size n using Big-O notation. n indicates the input
   size, while O is the worst-case scenario growth rate function.

   Consider a list of n elements. Searching an element in the list will require n
   operation in worst scenario.

*/

#include <iostream>

// The code has only 3 operation therefore the function is constant.
// The function will be:
// f(n) = 3 or 3*n^0
// Therefore time complexity of function will be: O(n^0) => O(1)
void swap(int x, int y) {
    int t{};
    t = x;
    x = y;
    y = t;
}

//
int time_complexity_1(int A[], int n) {
    int s, i;
    s = 0; // 1 assignment

    // loop has assignment, condition & assignment
    // the condition i<n will be checked n+1 times
    for (i=0; i<n; i++){
        s = s+A[i]; // this will be executed n times
    }
    return s; // 1 time execution
}

// 1 + n + 1 + n => 2n + 1 =~ n
// therefore time complexity is O(n)


void add(int n, int A[][3], int B[][3]) {
    int i, j;
    int c[n][n];

    // n+1 times execution of condition
    for(i=0; i<n; i++) {
        // n times because of outer loop * n+1 times because of j<n condition
        for (j=0;j<n;j++) {
            // n times * n times
            c[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Time function: f(n) = 2n^2 + 2n + 1
// =~ O(n^2)

void for_loop_complexity(int n) {
    for (int i=0; i<n; i++) { // condition will be checked n+1 times
        std::cout << "Hello\n"; // it will executes n times
    }
    // therefore time complexity of the loop is O(n)
}

void for_loop_complexity_v2(int n) {
    for (int i=0; i<n; i+=2) { // condition will be checked n+1 times
        std::cout << "Hello\n"; // it will executes n/2 times
    }
    // therefore time complexity of the loop is O(n)
}

void for_loop_complexity_v3(int n) {
    for (int i=0; i<n; i++) { // condition will be checked n+1 times
        for (int j=0; j<n; j++) { // condition will be checked n(n+1) times
            std::cout << "Hello\n"; // it will executes n*n times
        }
    }
    // therefore time complexity of the loop is O(n^2)
}

void for_loop_complexity_v4(int n) {
    for (int i=0; i<n; i++) { // condition will be checked n+1 times
        for (int j=0; j<i; j++) { // execution depends on value of i
            std::cout << "Hello\n"; // it will executes n(n+1)/2 times
        }
    }
    // therefore time complexity of the loop is O(n^2)
}

void for_loop_complexity_v5(int n) {
    for (int i=0; i<n; i=i*2) {
        std::cout << "Hello\n";
    }
}
/*
    i = 1, inc = 2
    i = 2, inc = 4 => 2^2
    i = 3, inc = 8 => 2^3
    .....
    .....
    i = k, inc = 2^k

    Assume i >= n, therefore i = 2^k
    2^k >= n
    2^k = n
    k = log(n)


*/

