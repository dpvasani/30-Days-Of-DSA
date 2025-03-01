#include <iostream>
#include <string>
using namespace std;

// Function to expand around center and count palindromes
int countPalindromesFromCenter(string &s, int left, int right) {
    int count = 0;
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        count++;
        left--;
        right++;
    }
    return count;
}

// Function to count all palindromic substrings
int countPalindromicSubstrings(string s) {
    int totalCount = 0;

    for (int i = 0; i < s.length(); i++) {
        // Count odd-length palindromes (single character as center)
        totalCount += countPalindromesFromCenter(s, i, i);
        
        // Count even-length palindromes (two consecutive characters as center)
        totalCount += countPalindromesFromCenter(s, i, i + 1);
    }

    return totalCount;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int result = countPalindromicSubstrings(s);
    cout << "Number of palindromic substrings: " << result << endl;

    return 0;
}
