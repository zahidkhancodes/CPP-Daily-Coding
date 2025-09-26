#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;
    int original_num;

    cout << "Enter a positive integer: ";
    cin >> num;

    original_num = num;

    while (num > 0) {
        int last_digit = num % 10;
        sum += last_digit;
        num /= 10;
    }

    cout << "The sum of the digits of " << original_num << " is " << sum << "." << endl;

    return 0;
}
