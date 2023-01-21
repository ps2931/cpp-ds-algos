#include<iostream>
#include <limits.h>

int main() {
    int n;
    std::cout << "Enter array size: ";
    std::cin >> n;

    int nums[n];
    int max= INT_MIN;
    int min = INT_MAX;

    std::cout << "Enter array elements\n";
    for (auto i=0; i<n; i++) {
        std::cin >> nums[i];
    }

    // find min and max element
    for(auto i=0; i<n; i++){
        if(nums[i] > max){
            max = nums[i];
        }
        if(nums[i] < min){
            min = nums[i];
        }
    }

    std::cout << "Max element: " << max << std::endl;
    std::cout << "Min element: " << min << std::endl;

    // concise way to find min and max
    max = INT_MIN;
    min = INT_MAX;
    for(auto i=0; i<n; i++){
        max = std::max(max, nums[i]);
        min = std::min(min, nums[i]);
    }

    std::cout << "Max element: " << max << std::endl;
    std::cout << "Min element: " << min << std::endl;
}
