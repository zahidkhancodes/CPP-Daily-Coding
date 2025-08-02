#include <iostream>
using namespace std;

int main() {
    int a[20] = {1, 2, 3, 5};
    //below 3 commented lines will give same adress ->
    // cout << " ->" << &a[0] << endl;
    // cout << &a << endl;
    // cout << a << endl;

    int *p = &a[0];
    // cout << p << endl;
    // cout << *p << endl;
    cout << "-> " << &p << endl;  // Prints the address of the pointer variable p itself

    int arr[10];

    // The following line will cause an error because you cannot assign to array name:
    // arr = arr + 1;

    int *ptr = &arr[0];
    cout << ptr << endl;  // Address of arr[0]
    ptr = ptr + 1;        // Pointer arithmetic is valid on ptr
    cout << ptr << endl;  // Address of arr[1]

    return 0;
}
