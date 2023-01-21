#include<iostream>

// Array is data structure with contigous memory location.
// Its size is fixed and should be compile time constant.

int main() {
    // declaring an defining and array
    int a[4] = {10,20,30,40};
    // indexing starts at zero
    std::cout << a[0] << std::endl;

    // creating array from user input
    int n;
    std::cout << "Enter array size: ";
    std::cin >> n;

    int nums [n];
    for (int i=0; i<n;i++) {
        std::cin >> nums[i];
    }

    // printing an array in loop
    for(auto i=0; i<n; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
