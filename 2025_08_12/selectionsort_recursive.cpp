#include<iostream>
using namespace std;

void selectionSort(int *arr, int n, int start = 0) {
    // Base case
    if (start >= n-1) return;

    int minIndex = start;
    for (int i = start+1; i < n; i++) {
        if (arr[i] < arr[minIndex])
            minIndex = i;
    }

    swap(arr[start], arr[minIndex]);

    selectionSort(arr, n, start+1);
}

int main() {
    int arr[5] = {2, 5, 1, 6, 9};

    selectionSort(arr, 5);
    
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
