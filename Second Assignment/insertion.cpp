#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(int* arr[], int size) {
    for (int i = 1; i < size; ++i) {
        int* key = arr[i];
        int j = i - 1;

        while (j >= 0 && *arr[j] > *key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {3, 7, 12, 18, 24, 31, 42, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    int* ptrArr[size];

    for (int i = 0; i < size; ++i) {
        ptrArr[i] = &arr[i];
    }

    insertionSort(ptrArr, size);

    for (int i = 0; i < size; ++i) {
        cout << *ptrArr[i] << " ";
    }
    cout << endl;

    return 0;
}
