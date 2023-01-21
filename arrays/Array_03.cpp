#include<iostream>
#include<array>

// Finding an element in an array

int linear_search(int arr[], int n, int target){
    // length of array using pointer


    for(auto i=0; i<n; i++){
        if(arr[i] == target) return i;
    }
    return -1;
}

/*
Binary search can be used in a sorted array by
repeatedly dividing the search interval in half.

key = 27
arr = {8,10,12,21,27,34,42}
mid = (start+end)/2 => (0+7)/2 = 3

key is greater than arr[3]. Therefore:
start = mid
end = end
mid = (3+7)/2 = 5

key is less than arr[5]. Therefore
start = start
end = mid
mid = (3+5)/2 = 4

key is eqaul to arr[4]. We found the element at index 4.

After 1st iteration, length of array: n
After 2nd iteration, length of array: n/2
After 3rd iteration, length of array: n/2^2
...
After kth iteration, length of array: n/2^k

Let the length of array become 1 after k iterations.

n/2^k = 1
 => n = 2^k

Applying log function on both sides:

log2(n) = log2(2^k)
log2(n) = k*log2(2)
As loga(a) = 1, therefore, k = log2(n)
k = log2(n)

Time Complexity: O(log n)
Auxiliary Space: O(log n)

*/
int binary_search(int arr[], int n , int target) {
    int start = 0;
    int end = n;

    while(start<=end) {
        int mid = start + (end - start)/2;

        // If the element is present at the middle
        // itself
        if(arr[mid] == target) {
            return mid;
        }

        // If element is smaller than mid, then
        // it can only be present in left subarray
        else if(arr[mid] >target) {
            end = mid-1 ;
        }
        // Else the element can only be present
        // in right subarray
        else {
            start = mid+1;
        }
    }
    return -1;
}

int main() {
    int arr[6] = {23, 11, 45, 31, 42, 9};
    int target = 9;
    int arr_len =  (int) sizeof(arr)/sizeof(arr[0]);

    int result = linear_search(arr,arr_len, target);
    if(result == -1){
        std::cout << "Element not found." << "\n";
    } else {
        std::cout << "Element found at index " << result << "\n";
    }

    int nums[7] = {8,10,12,21,27,34,42};
    int key = 27;
    int len =  (int) sizeof(nums)/sizeof(nums[0]);
    int index = binary_search(nums, len, key);

    if(index == -1) {
        std::cout << "Element not found." << "\n";
    } else {
        std::cout << "Element found at index " << result << "\n";
    }
}
