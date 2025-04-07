#include <iostream>
using namespace std;

int findSmallest(int arr[], int n) {
    int min = arr[0]; // Step 1: Assume first element is the smallest

    for (int i = 1; i < n; i++) { // Step 2: Traverse the array
        if (arr[i] < min) { 
            min = arr[i]; // Update min if a smaller element is found
        }
    }

    return min; // Step 3: Return the smallest number
}

int main() {
    int arr[] =  {110, 250, 30, 100, 60}; 
    int n = sizeof(arr) / sizeof(arr[0]); 

    cout << "Smallest number: " << findSmallest(arr, n) << endl;
    return 0;
}