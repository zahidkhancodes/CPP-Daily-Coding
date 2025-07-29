#include <iostream>
using namespace std;

char toLowerCase(char ch) {
    if(ch >= 'a' && ch <= 'z')
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n) {
    int s = 0;
    int e = n-1;
    
    while (s <= e) {
        if(toLowerCase(a[s]) != toLowerCase(a[e])) {
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int getLength(char str[]) {
    int count = 0;
    for(int i=0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str; 

    int len = getLength(str);

    if(checkPalindrome(str, len)) {
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not a palindrome" << endl;
    }

    return 0;
}
