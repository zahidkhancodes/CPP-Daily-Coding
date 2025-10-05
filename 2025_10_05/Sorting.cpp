#include <iostream>
#include <algorithm>

using namespace std;

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;

        for (; j >= 0; j--) {
            if (arr[j] > temp) {
                arr[j + 1] = arr[j];
            } else {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main() {
    int bubbleData[] = {64, 34, 25, 12, 22, 11, 90};
    int bubbleN = sizeof(bubbleData) / sizeof(bubbleData[0]);

    cout << "--- Bubble Sort ---" << endl;
    cout << "Original array: ";
    printArray(bubbleData, bubbleN);

    bubbleSort(bubbleData, bubbleN);

    cout << "Sorted array:   ";
    printArray(bubbleData, bubbleN);

    cout << "\n---------------------\n" << endl;

    int insertionData[] = {12, 11, 13, 5, 6};
    int insertionN = sizeof(insertionData) / sizeof(insertionData[0]);

    cout << "--- Insertion Sort ---" << endl;
    cout << "Unsorted array: ";
    printArray(insertionData, insertionN);

    insertionSort(insertionData, insertionN);

    cout << "Sorted array:   ";
    printArray(insertionData, insertionN);

    return 0;
}
