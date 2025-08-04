#include <iostream>
#include <vector>

using namespace std;

int main() {
    int nRows = 3;
    int mCols = 4;

    int arr[3][4];

    cout << "Enter the elements of the 2D array (" << nRows << " rows and " << mCols << " columns):" << endl;
    for (int i = 0; i < nRows; i++) {
        for (int j = 0; j < mCols; j++) {
            cin >> arr[i][j];
        }
    }

    vector<int> ans;

    for (int col = 0; col < mCols; col++) {
        if (col & 1) {
            for (int row = nRows - 1; row >= 0; row--) {
                ans.push_back(arr[row][col]);
            }
        } else {
            for (int row = 0; row < nRows; row++) {
                ans.push_back(arr[row][col]);
            }
        }
    }

    cout << "Wave output:" << endl;
    for (int i = 0; i < (int)ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
