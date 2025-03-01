#include <iostream>
#include <sstream>
using namespace std;

int findLongestWordLength(const string& str) {
    stringstream ss(str);
    string word;
    int maxLength = 0;
    while (ss >> word)
        maxLength = max(maxLength, (int)word.length());
    return maxLength;
}

int main() {
    string str = "Find the longest word";
    cout << "The length of the longest word is " << findLongestWordLength(str) << endl;
    return 0;
}
