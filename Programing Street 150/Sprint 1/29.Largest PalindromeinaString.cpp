#include <bits/stdc++.h>
using namespace std;

// Function to expand around center and find longest palindrome
string expandAroundCenter(string s, int left, int right) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        left--;
        right++;
    }
    return s.substr(left + 1, right - left - 1);
}


string longestPalindrome(string s) {
    if (s.empty()) return "";

    string longest = "";
    for (int i = 0; i < s.length(); i++) {
      
        string oddPalindrome = expandAroundCenter(s, i, i);
        if (oddPalindrome.length() > longest.length()) {
            longest = oddPalindrome;
        }

       
        string evenPalindrome = expandAroundCenter(s, i, i + 1);
        if (evenPalindrome.length() > longest.length()) {
            longest = evenPalindrome;
        }
    }
    return longest;
}

int main() {
    string s;
    cin >> s;
    
    cout << longestPalindrome(s) << endl;
    return 0;
}
