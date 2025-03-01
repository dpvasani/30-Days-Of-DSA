#include <iostream>
#include <unordered_map>
using namespace std;

string longestUniqueSubstring(string str) {
    unordered_map<char, int> charIndex;
    int start = 0, maxLength = 0, startIndex = 0;
    
    for (int i = 0; i < str.length(); i++) {
        if (charIndex.find(str[i]) != charIndex.end()) {
            start = max(start, charIndex[str[i]] + 1);
        }
        charIndex[str[i]] = i;
        if (i - start + 1 > maxLength) {
            maxLength = i - start + 1;
            startIndex = start;
        }
    }
    return str.substr(startIndex, maxLength);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Longest Unique Substring: " << longestUniqueSubstring(str) << endl;
    return 0;
}
