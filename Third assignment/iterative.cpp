#include <iostream>
using namespace std;

int binarySearchIterative(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;  // Target found at index mid
        } else if (arr[mid] < target) {
            low = mid + 1;  // Search in the right half
        } else {
            high = mid - 1;  // Search in the left half
        }
    }

    return -1;  // Target not found
}

int main() {
    int arr[] = {3, 7, 12, 18, 24, 31, 42, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 24;

    int result = binarySearchIterative(arr, size, target);
    if (result != -1)
        cout << "Iterative Binary Search: Found at index " << result << endl;
    else
        cout << "Iterative Binary Search: Not found" << endl;

    return 0;
}
