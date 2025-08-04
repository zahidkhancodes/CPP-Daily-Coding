#include <iostream>
using namespace std;

int main() {
    int row, col;
    cin >> row >> col;

    // Dynamically allocate 2D array
    int** arr = new int*[row];
    for(int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }

    // Input values
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    // Output values
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Free allocated memory
    for(int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
