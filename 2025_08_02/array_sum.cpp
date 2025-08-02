#include<iostream>
using namespace std;

int getSum(int *arr, int n) {
    cout << endl << "Size of pointer variable inside getSum: " << sizeof(arr) << endl;

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 8};

    cout << "Sum of elements from index 3 to 5: " << getSum(arr + 3, 3) << endl;

    return 0;
}
