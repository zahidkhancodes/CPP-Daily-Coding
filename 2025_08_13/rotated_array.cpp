#include <iostream>
#include <vector>
using namespace std;

int getPivotRecursive(vector<int>& arr, int s, int e) {
    if (s == e) return s;
    int mid = s + (e - s) / 2;
    if (arr[mid] >= arr[0]) {
        return getPivotRecursive(arr, mid + 1, e);
    } else {
        return getPivotRecursive(arr, s, mid);
    }
}

int binarySearchRecursive(vector<int>& arr, int s, int e, int key) {
    if (s > e) return -1;
    int mid = s + (e - s) / 2;
    if (arr[mid] == key) {
        return mid;
    } else if (key > arr[mid]) {
        return binarySearchRecursive(arr, mid + 1, e, key);
    } else {
        return binarySearchRecursive(arr, s, mid - 1, key);
    }
}

int findPosition(vector<int>& arr, int n, int k) {
    int pivot = getPivotRecursive(arr, 0, n - 1);
    if (k >= arr[pivot] && k <= arr[n - 1]) {
        return binarySearchRecursive(arr, pivot, n - 1, k);
    } else {
        return binarySearchRecursive(arr, 0, pivot - 1, k);
    }
}

int main() {
    vector<int> arr = {7, 9, 1, 2, 3};
    int key = 3;
    int pos = findPosition(arr, arr.size(), key);
    if (pos != -1) {
        cout << "Element found at index: " << pos << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
