#include <iostream>
using namespace std;

int binarySearchRecursive(int arr[], int low, int high, int target) {
    if (low > high) return -1;  // Base case: target not found

    int mid = low + (high - low) / 2;

    if (arr[mid] == target) return mid;  // Target found at index mid
    else if (arr[mid] < target) return binarySearchRecursive(arr, mid + 1, high, target);  // Search right
    else return binarySearchRecursive(arr, low, mid - 1, target);  // Search left
}

int main() {
    int arr[] = {3, 7, 12, 18, 24, 31, 42, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 24;

    int result = binarySearchRecursive(arr, 0, size - 1, target);
    if (result != -1)
        cout << "Recursive Binary Search: Found at index " << result << endl;
    else
        cout << "Recursive Binary Search: Not found" << endl;

    return 0;
}
