#include <bits/stdc++.h>
using namespace std;

// 1. Bool function to check if a string is a palindrome
bool isPalindrome(string s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}

// 2. Void function to check palindrome and print result
void checkPalindrome(string s) {
    if (isPalindrome(s)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

// 3. Reverse logic function to check palindrome
bool isPalindromeReverse(string s) {
    string rev = s;   // Copy original string
    reverse(rev.begin(), rev.end());  // Reverse the string
    return rev == s;  // Compare original and reversed string
}

int main() {
    string s;
    cin >> s;
    
    // Solution 1: Using the bool function
    if (isPalindrome(s)) {
        cout << "Yes (Bool Function)" << endl;
    } else {
        cout << "No (Bool Function)" << endl;
    }

    // Solution 2: Using the void function
    cout << "Void Function Output: ";
    checkPalindrome(s);

    // Solution 3: Using reverse logic function
    if (isPalindromeReverse(s)) {
        cout << "Yes (Reverse Logic)" << endl;
    } else {
        cout << "No (Reverse Logic)" << endl;
    }

    return 0;
}
