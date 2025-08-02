#include <iostream>
using namespace std;

void increment(int **p) {
    ++(**p);   // Increment the value pointed by the int pointer
}

int main() {
    int num = 110;
    int *ptr = &num;
    increment(&ptr);
    cout << num << endl;  // Output: 111

    return 0;
}
