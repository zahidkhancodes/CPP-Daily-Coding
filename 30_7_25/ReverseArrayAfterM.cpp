#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr, int m)
{
    int start = m + 1;
    int end = arr.size() - 1;
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    
    int m = 3;

    cout << "Original array: ";
    for(int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    reverseArray(arr, m);

    cout << "After reversing from an index " << m << ": ";
    for(int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
