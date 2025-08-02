#include <iostream>
using namespace std;

void update(int **p2) {
    // p2 = p2 + 1;      // No change to original pointer
    // *p2 = *p2 + 1;    // Changes pointer 'p' to point to next int location
    **p2 = **p2 + 1;     // Increment value pointed by int* pointed by p2
}

void update(int *p) {
    *p = (*p) * 2;       // Double the value pointed by p
}

int main() {
    int i = 5;
    int* p = &i;
    int** p2 = &p;

    cout << endl << "Before update:" << endl;
    cout << "i = " << i << endl;
    cout << "*p = " << *p << endl;
    cout << "**p2 = " << **p2 << endl;

    update(p2);

    cout << "After update(p2):" << endl;
    cout << "i = " << i << endl;
    cout << "*p = " << *p << endl;
    cout << "**p2 = " << **p2 << endl;

    update(p);

    cout << "After update(p):" << endl;
    cout << "i = " << i << endl;

    return 0;
}
