#include <iostream>

using namespace std;

int reverseInteger(int num);

int main() {
    int userInput;
    cout << "Enter an integer to reverse: ";
    cin >> userInput;

    int reversed = reverseInteger(userInput);

    cout << "Reversed integer: " << reversed << endl;

    return 0;
}

int reverseInteger(int num) {
    int reversedNum = 0;
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return reversedNum;
}
