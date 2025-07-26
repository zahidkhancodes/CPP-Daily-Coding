#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;

    cout << "Enter an integer N: ";
    cin >> N;

    for (int i = 2; i <= N; i = i + 2) {
        sum = i++;
    }

    cout << "The sum of all even numbers from 1 to " << N << " is: " << sum << endl;

    return 0;
}
