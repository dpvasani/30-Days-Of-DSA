#include <bits/stdc++.h>
using namespace std;

// Function to reverse a string
string reverseString(const string &str) {
    string reversedStr = str;  
    // STL function to reverse a string
    reverse(reversedStr.begin(), reversedStr.end());
    return reversedStr;
}

int main() {
    string str;
    cin >> str;
    // Brute Force method
    int n = str.length();
    for(int i = n-1; i >= 0; i--){
        cout << str[i];
    }

    cout << "Reversed String: " << reverseString(str) << endl;

    return 0;
}
