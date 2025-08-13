#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int find_pivot_recursive(const vector<int>& v, int s, int e) {
        if (s == e) 
            return s;

        int mid = (s + e) / 2;

        if (v[mid] < v[mid + 1])
            return find_pivot_recursive(v, mid + 1, e);

        return find_pivot_recursive(v, s, mid);
    }

    int peakIndexInMountainArray(vector<int>& arr) {

        return find_pivot_recursive(arr, 0, arr.size() - 1);
    }
};

int main() {
    Solution sol;
    vector<int> arr = {2, 5, 9, 12, 11, 6, 3};
    int peak = sol.peakIndexInMountainArray(arr);
    cout << "Peak index: " << peak << "\n";
    return 0;
}
