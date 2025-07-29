#include <iostream>
using namespace std;

struct Solution {
    bool valid(char ch) {
        if ((ch >= 'a' && ch <= 'z') ||
            (ch >= 'A' && ch <= 'Z') ||
            (ch >= '0' && ch <= '9')) {
            return true;
        }
        return false;
    }

    char toLowerCase(char ch) {
        if (ch >= 'a' && ch <= 'z' || (ch >= '0' && ch <= '9')) {
            return ch;
        }
        else {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    bool checkPalindrome(string a) {
        int s = 0;
        int e = a.length() - 1;

        while (s <= e) {
            if(a[s] != a[e]) {
                return false;
            }
            else{
                s++;
                e--;
            }
        }
        return true;
    }

    bool isPalindrome(string s) {
        string temp = "";
        for (int j = 0; j < (int)s.length(); j++) {
            if (valid(s[j])) {
                temp.push_back(s[j]);
            }
        }
        for (int j = 0; j < (int)temp.length(); j++) {
            temp[j] = toLowerCase(temp[j]);
        }
        return checkPalindrome(temp);
    }
};

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    Solution sol;
    if (sol.isPalindrome(s)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Non-Palindrome" << endl;
    }
    return 0;
}
