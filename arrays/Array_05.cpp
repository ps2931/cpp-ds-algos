#include <cstdint>
#include<iostream>
#include<limits>
/*
Maximum till i.
  Given an array of a[] of size n. For every i from 0 to n-1
  output max(a[0], a[1],...a[i]).

Examlpe:
[1,0,5,4,6,8]
Max of [1] is 1
Max of [1,0] is 1
Max of [1,0,5] is 5
Max of [1,0,5,4] is 5
Max of [1,0,5,4,6] is 6
Max of [1,0,5,4,6,8] is 8
*/

void maxTillI() {
    int arr[] = {1,0,5,4,6,8};
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    int mx = INT32_MIN;
    for(auto i=0; i<arr_len; i++) {
        mx = std::max(mx, arr[i]);
        std::cout << mx << std::endl;
    }
}


/*
Subarray vs Subsequence

Subarray: Contiguous part of the array.
Example: for array [1,2,3,4,5], [1], [1,2], [1,2,3] etc are subarrays.
Number of subarray of an array with n elements = nC2 + n => n * (n+1)/2
We can select two distinct indices in nC2 ways. Also indices can be same since [1]
is also a subarray. Therefore total number of subarrays is n(n+1)/2.

Subsequence: Its a sequence that can be derived an array by selecting zero or more
elements, without changing the order of the remaining elements.
Number of subsequences of an array with n elements = 2^n.
For every element we have two choices - to consider it or not consider it for subsequence. Therefore total number of subsequences will be 2^n.

Every subarray is a subsequence but every subsequence is not a subarray.
Or in other words, subarray is subset of subsequence.

*/


// Sum of all subarrays
// Given an array a[n], find sum of each subarray of the given array.
// Example: For array [1,2,2] subarrays will be [1], [1,2], [1,2,2], [2], [2,2]
// Sum of elements of subarrays will be 1, 3, 5, 2, 4, 2 respectively.

void sumOfEachSubarray() {
    int arr[] = {1,2,0,7,2};
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    int sum = 0;
    // iterate over all the subarray
    for(auto i=0; i<arr_len; i++){
        for(auto j=i; j<arr_len; j++){
            sum += arr[j];
            std::cout << "Sum: " << sum << std::endl;
        }
    }
}

/*
Longest arithmetic subarray
An arithmetic array is an array that contains at least two integers and the
differences between consecutive integers are equal.

For example, [9, 10], [3, 3, 3], and [9, 7, 5, 3] are arithmetic arrays,
while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are not arithmetic arrays.

Example: [10,  7,  4,  6,  8,  10,  11]
Diffs:      -3  -3   2   2    2   1
Longest sub array: [4,6,8,10]

Solution approach:
Maintain the following variables:
 1. Previous common difference (pd)
 2. Current arithmetic subarray length(curr)
 3. Max arithmetic subarray length(ans)

*/

void longestArithmeticSubarray() {
    int a[] = {10,7,4,6,8,10,11};
    int n = sizeof(a)/sizeof(a[0]);

    // Minimum possible length of required subarray is 2
    int max_len = 2;

    // Stores the length of the current subarray
    int sub_arr_len = 2;

    // Stores the common difference of the current AP
    int curr_diff = a[1] - a[0];

    // Stores the common difference of the previous AP
    int prev_diff = (a[1] - a[0]);

    for (int i = 2; i < n; i++) {
        curr_diff = a[i] - a[i-1];

        // if common diffs are equal
        if(curr_diff == prev_diff) {
            sub_arr_len++; // continure the previous subarray
        } else {
            prev_diff = curr_diff;

            // Update the length to store maximum length
            max_len = std::max(max_len, sub_arr_len);
            sub_arr_len = 2;
        }
    }

    // Update the length to store maximum length
    max_len = std::max(max_len, sub_arr_len);

    // print the result
    std::cout << max_len << std::endl;
}

/*
Record breaker:

 */
int main() {
    // max till i
    maxTillI();

    std::cout << "----------------\n";

    // sum of subarrays elements
    sumOfEachSubarray();

    std::cout << "----------------\n";

    // longest arithmetic subarray
    longestArithmeticSubarray();

    return 0;
}
