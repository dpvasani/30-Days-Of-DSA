#include <iostream>
#include <string>
using namespace std;

int countWordOccurrences(const string& str, const string& word) {
    int count = 0, pos = 0;
    while ((pos = str.find(word, pos)) != string::npos) {
        count++;
        pos += word.length();
    }
    return count;
}

int main() {
    string str = "hello world hello";
    string word = "hello";
    cout << "The word '" << word << "' appears " << countWordOccurrences(str, word) << " times." << endl;
    return 0;
}
