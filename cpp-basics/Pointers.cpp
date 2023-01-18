#include <iostream>

// Pointers stores one address only.

int main() {
    int a = 10;
    int* a_ptr = &a; // declare pointer to a

    //------------------------------------

    // access value of a via pointer
    std::cout << "a: " << *a_ptr << std::endl;

    //------------------------------------

    // ptr_1 is pointer but var1 is not. its an int variable.
    int* ptr_1, var1;

    //------------------------------------
    // pointer to array
    int arr[] = {3,5,7};
    // method-1

    //------------------------------------
    // Points to 0th element of the arr
    int* ptr_to_a0 = arr; // or &arr[0]
    std::cout << "sizeof(ptr_to_a0): " << sizeof(*ptr_to_a0) << std::endl;
    // 4

    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++) {
        std::cout << ptr_to_a0[i] << " "; // 3 5 7
    }
    std::cout << std::endl;

    //------------------------------------
    // Points to whole array
    // Useful when working with multidimensional arrays
    int arr2[3][4] = {
                    {10, 11, 12, 13},
                    {20, 21, 22, 23},
                    {30, 31, 32, 33}
                  };

    int (*ptr_to_arr)[4];
    ptr_to_arr = arr2;
    std::cout << "sizeof(ptr_to_arr): " << sizeof(*ptr_to_arr) << std::endl;
    // 16

    for(int i=0; i<3; i++){
        for (int j=0; j<4; j++) {
            std::cout << ptr_to_arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    //------------------------------------

    return 0;
}

