#include <iostream>

using namespace std;

bool isPalindrome(int number);

int main() {
    int userInput;
    cout << "Enter an integer to check if it's a palindrome: ";
    cin >> userInput;

    if (isPalindrome(userInput)) {
        cout << userInput << " is a palindrome." << endl;
    } else {
        cout << userInput << " is not a palindrome." << endl;
    }

    return 0;
}

bool isPalindrome(int number) {
    if (number < 0) {
        return false;
    }

    int originalNumber = number;
    int reversedNumber = 0;

    while (number > 0) {
        int digit = number % 10;
        reversedNumber = (reversedNumber * 10) + digit;
        number = number / 10;
    }

    return originalNumber == reversedNumber;
}

