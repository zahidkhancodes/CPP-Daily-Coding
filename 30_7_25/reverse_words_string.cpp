#include <iostream>
using namespace std;

void reverse(char s[], int start, int end) {
    while (start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}

void reverseWords(char s[]) {
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }

    reverse(s, 0, length - 1);

    int start = 0;
    for (int i = 0; i <= length; i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            reverse(s, start, i - 1);
            start = i + 1;
        }
    }
}

int main() {
    char s[100];
    cout << "Enter a string (max 99 chars): ";
    cin.getline(s, 100);

    reverseWords(s);

    cout << "Reversed words: " << s << endl;

    return 0;
}
