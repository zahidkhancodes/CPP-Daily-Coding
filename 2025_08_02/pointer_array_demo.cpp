#include <iostream>
using namespace std;

int main () {
    int arr[10] = {23, 122, 41, 67};

    cout << "Address of first element (arr) is: " << arr << endl;
    cout << "Value at arr[0]: " << arr[0] << endl;
    cout << "Address of first element (&arr[0]) is: " << &arr[0] << endl;

    cout << "Value pointed by arr (*arr): " << *arr << endl;
    cout << "Value (*arr + 1): " << *arr + 1 << endl;
    cout << "Value pointed by (arr + 1) (*(arr + 1)): " << *(arr + 1) << endl;
    cout << "Value (*(arr) + 1): " << *(arr) + 1 << endl;
    cout << "Value at arr[2]: " << arr[2] << endl;
    cout << "Value (*(arr+2)): " << *(arr + 2) << endl;

    int i = 3;
    cout << "Value of i[arr] (i[arr] is valid and equals arr[i]): " << i[arr] << endl;

    int temp[10] = {1, 2};
    cout << "Size of temp array (sizeof(temp)): " << sizeof(temp) << " bytes" << endl;
    cout << "Size of one element (*temp): " << sizeof(*temp) << " bytes" << endl;
    cout << "Size of pointer to temp (&temp): " << sizeof(&temp) << " bytes" << endl;

    int *ptr = &temp[0];
    cout << "Size of pointer ptr: " << sizeof(ptr) << " bytes" << endl;
    cout << "Size of element pointed by ptr (*ptr): " << sizeof(*ptr) << " bytes" << endl;
    cout << "Size of pointer to ptr (&ptr): " << sizeof(&ptr) << " bytes" << endl;

    return 0;
}
