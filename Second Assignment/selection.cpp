#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int* arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < size; ++j) {
            if (*arr[j] < *arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

int main() {
    int arr[] = {3, 7, 12, 18, 24, 31, 42, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    int* ptrArr[size];

    for (int i = 0; i < size; ++i) {
        ptrArr[i] = &arr[i];
    }

    selectionSort(ptrArr, size);

    for (int i = 0; i < size; ++i) {
        cout << *ptrArr[i] << " ";
    }
    cout << endl;

    return 0;
}
