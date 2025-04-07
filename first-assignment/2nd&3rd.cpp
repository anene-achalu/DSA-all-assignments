#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {110, 250, 30, 100, 60};
    int size = sizeof(arr) / sizeof(arr[0]);

    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third && arr[i] != second && arr[i] != first) {
            third = arr[i];
        }
    }

    cout << "Second largest: " << second << endl;
    cout << "Third largest: " << third << endl;

    return 0;
}