#include <iostream>
using namespace std;

int main() {
    int N;
    bool isPrime = true;

    cout << "Enter an integer N: ";
    cin >> N;

    if (N <= 1) {
        isPrime = false;
    }
    
    else {
        for (int i = 2; i <= N; i++) {  // using i * i <= N instead of i <= N will give efficiency to the code
            if (N % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << N << " is a prime number." << endl;
    }
    else {
        cout << N << " is not a prime number." << endl;
    }

    return 0;
}
