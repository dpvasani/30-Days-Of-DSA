#include <iostream>
#include <string>
using namespace std;

bool hasRepeatedSubstring(const string& str) {
    string doubled = str + str;
    return doubled.find(str, 1) != str.size();
}

int main() {
    string str = "abab";
    cout << (hasRepeatedSubstring(str) ? "True" : "False") << endl;
    return 0;
}
