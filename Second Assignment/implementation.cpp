#include <iostream>
#include <vector>
#include <algorithm> // for std::swap

void printArray(int* arr[], int size) {
    for (int i = 0; i < size; ++i)
        std::cout << *arr[i] << " ";
    std::cout << std::endl;
}

// Bubble Sort
void bubbleSort(int* arr[], int size) {
    for (int i = 0; i < size - 1; ++i)
        for (int j = 0; j < size - i - 1; ++j)
            if (*arr[j] > *arr[j + 1])
                std::swap(arr[j], arr[j + 1]);
}

// Insertion Sort
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

// Quick Sort
int partition(int* arr[], int low, int high) {
    int* pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (*arr[j] < *pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int* arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Merge Sort
void merge(int* arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int*> L(n1), R(n2);
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
        arr[k++] = (*L[i] <= *R[j]) ? L[i++] : R[j++];

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(int* arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

// Main to test all sorting functions
int main() {
    const int size = 6;
    int values[size] = {7, 2, 9, 4, 1, 5};

    // Create array of pointers
    int* ptrs[size];
    for (int i = 0; i < size; i++) {
        ptrs[i] = &values[i];
    }

    std::cout << "Original: ";
    printArray(ptrs, size);

    // bubbleSort(ptrs, size);
    // insertionSort(ptrs, size);
    // quickSort(ptrs, 0, size - 1);
    mergeSort(ptrs, 0, size - 1);

    std::cout << "Sorted:   ";
    printArray(ptrs, size);

    return 0;
}
