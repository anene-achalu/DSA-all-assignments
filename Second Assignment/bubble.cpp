#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int* arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (*arr[j] > *arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[] = {3, 7, 12, 18, 24, 31, 42, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    int* ptrArr[size];

    for (int i = 0; i < size; ++i) {
        ptrArr[i] = &arr[i];
    }

    bubbleSort(ptrArr, size);

    for (int i = 0; i < size; ++i) {
        cout << *ptrArr[i] << " ";
    }
    cout << endl;

    return 0;
}
