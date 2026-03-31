#include <stdio.h>

// Function to print the array
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Odd-Even Sort
void oddEvenSort(int arr[], int n) {
    int sorted = 0;

    while (!sorted) {
        sorted = 1;

        // odd phase
        for (int i = 1; i < n - 1; i += 2) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                sorted = 0;
            }
        }

        // even phase
        for (int i = 0; i < n - 1; i += 2) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                sorted = 0;
            }
        }
    }
}

// Bubble Sort
void bubbleSort(int arr[], int n) {
    int swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = 0;

        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }

        if (!swapped) break;
    }
}

int main() {
    int original[] = {5, 3, 8, 4, 2};
    int n = 5;

    int arr1[5], arr2[5];

    // copy arrays
    for (int i = 0; i < n; i++) {
        arr1[i] = original[i];
        arr2[i] = original[i];
    }

    // Odd-Even
    oddEvenSort(arr1, n);
    printf("Odd-Even Sort: ");
    printArray(arr1, n);

    // Bubble
    bubbleSort(arr2, n);
    printf("Bubble Sort: ");
    printArray(arr2, n);

    return 0;
}