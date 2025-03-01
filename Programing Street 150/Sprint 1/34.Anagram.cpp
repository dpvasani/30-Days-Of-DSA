#include <bits/stdc++.h>
using namespace std;

bool isAnagramSort(string str1, string str2) {
    if (str1.length() != str2.length()) return false;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return str1 == str2;
}

int main() {
    string str1 = "listen", str2 = "silent";
    cout << (isAnagramSort(str1, str2) ? "True" : "False") << endl;
    return 0;
}
