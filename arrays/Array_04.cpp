#include<iostream>

// Sorting an array

/*
Selection sort approach:
  Repeatedly selecting the smallest (or largest) element from the
unsorted portion of the list and moving it to the sorted portion
of the list.

12,45,23,51,19,8

Minimum is 8, so swap it with the first element of unsorted array.
8,45,23,51,19,12

Now, unsorted array is 45,23,51,19,12. Minimum is 12. Swap it with 45
8,12,23,51,19,45.

Now unsorted array is 23,51,19,45. Minimum is 19. Swap it with 23.
8,12,19,51,23,45

Now unsorted array is 51,23,45. Minimum is 23. Swap it with 51.
8,12,19,23,51,45

Now unsorted array is 51,45. Minimum is 45. Swap it with 51.
8,12,19,23,45,51

Time complexity of Selection sort is O(N^2) as there are two nested loops.
- One loop to select an element of Array one by one = O(N)
- Another loop to compare that element with every other Array element = O(N)

Therefore overall complexity = O(N) * O(N) = O(N*N) = O(N^2).

Auxiliary Space: O(1) as the only extra memory used is for temporary variables
while swapping two values in Array. The selection sort never makes more than
O(N) swaps and can be useful when memory write is a costly operation.

*/

void selectionSort(int arr[], int n) {
    for(auto i=0; i < n-1; i++) { // One by one move boundary of unsorted array
        for(auto j=i+1; j<n; j++) {
            if(arr[j] < arr[i]) { // find minimum and swap it with first element
                int temp = arr[j]; // unsorted array
                arr[j] = arr[i];
                arr[i]=temp;
            }
        }
    }
}

/*
Bubble sort.
Repeatedly swapping the adjacent elements if they are in the wrong order.

Example:
{12, 45, 23, 51, 19, 8}

First Pass
{12, 45, 23, 51, 19, 8}
{12, 45, 23, 51, 19, 8}
{12, 23, 45, 51, 19, 8}
{12, 23, 45, 51, 19, 8}
{12, 23, 45, 19, 51, 8}
{12, 23, 45, 19, 8, 51}

Second pass:
{12, 23, 45, 19, 8, 51}
{12, 23, 45, 19, 8, 51}
{12, 23, 45, 19, 8, 51}
{12, 23, 19, 45, 8, 51}
{12, 23, 19, 8, 45, 51}

Third pass:
{12, 23, 19, 8, 45, 51}
{12, 23, 19, 8, 45, 51}
{12, 19, 23, 8, 45, 51}
{12, 19, 8, 23, 45, 51}

Fourth pass:
{12, 19, 8, 23, 45, 51}
{12, 19, 8, 23, 45, 51}
{12, 8, 19, 23, 45, 51}

Fifth iteration
{8, 12, 19, 23, 45, 51}

Time Complexity: O(N^2) as there are two for loops.
Auxilary Space: O(1).

*/

void bubbleSort(int arr[], int n) {
    for(auto i=0; i<n-1; i++) {
        bool swapped = false;
        for(auto j=0; j<n-i; j++)
            {
                if (arr[j] > arr[j+1])
                    {
                        int temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;

                        swapped = true;
                    }
            }
        // exit as soon as array is sorted
        // no need to run algorithm on sorted array
        if(!swapped) break;
    }

}

/*
Insertion sort: Insert an element from
unsorted array to its correct position
in sorted array
*/
void insertionSort(int arr[], int n) {
    int j = 0;

    // starting with 2nd element
    for(int i=1; i<n; i++) {
        int current = arr[i];
        j = i-1;

        // Move elements of arr[0..i-1],
        // that are greater than key, to one
        // position ahead of their
        // current position
        while(j>=0 && arr[j] > current){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;

        std::cout << "------------\n";
        for(auto k=0; k<5; k++) std::cout << arr[k] << " ";
        std::cout << "\n------------\n";
    }
}

int main() {
    int arr[] = {64,25,12,22,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    for(auto e: arr) std::cout << e << " ";
    std::cout << "\n";


    int nums[] = {12,45,23,51,19,8};
    int N = sizeof(nums)/sizeof(nums[0]);
    bubbleSort(nums, N);
    for(auto e: nums) std::cout << e << " ";
    std::cout << "\n";


    int primes[] = { 31, 23, 11, 5, 7 };
    int target = sizeof(primes) / sizeof(primes[0]);
    insertionSort(primes, target);
    for(auto e: primes) std::cout << e << " ";
    std::cout << "\n";


    return 0;
}
