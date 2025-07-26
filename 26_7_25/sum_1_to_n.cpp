#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;

    cout << "Enter an integer N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    cout << "The sum of numbers from 1 to " << N << " is: " << sum << endl;

    return 0;
}
