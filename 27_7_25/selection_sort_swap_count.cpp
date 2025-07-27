#include <iostream>
using namespace std;

int selectionSortAndCountSwaps(int arr[], int n) {
    int swapCount = 0;
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
            swapCount++;
        }
    }
    return swapCount;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {46, 31, 15, 27, 18};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    int swaps = selectionSortAndCountSwaps(arr, n);

    cout << "Sorted array:   ";
    printArray(arr, n);
    cout << "Number of swaps performed: " << swaps << endl;

    return 0;
}
