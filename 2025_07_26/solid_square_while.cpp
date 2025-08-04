#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Enter the size N: ";
    cin >> N;

    int i = 0;
    while (i < N) {
        int j = 0;
        while (j < N) {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
