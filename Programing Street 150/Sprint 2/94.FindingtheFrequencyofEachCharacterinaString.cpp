#include <iostream>
#include <unordered_map>
using namespace std;

void countCharacterFrequency(const string& str) {
    unordered_map<char, int> freq;
    for (char ch : str) freq[ch]++;
    for (const auto& pair : freq)
        cout << pair.first << ": " << pair.second << endl;
}

int main() {
    string str = "hello";
    countCharacterFrequency(str);
    return 0;
}
