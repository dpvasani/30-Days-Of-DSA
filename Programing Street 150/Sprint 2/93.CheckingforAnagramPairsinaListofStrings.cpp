#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<pair<string, string>> findAnagramPairs(vector<string>& words) {
    unordered_map<string, string> seen;
    vector<pair<string, string>> anagrams;
    
    for (const string& word : words) {
        string sortedWord = word;
        sort(sortedWord.begin(), sortedWord.end());
        if (seen.count(sortedWord))
            anagrams.emplace_back(seen[sortedWord], word);
        else
            seen[sortedWord] = word;
    }
    return anagrams;
}

int main() {
    vector<string> words = {"listen", "silent", "hello", "world"};
    vector<pair<string, string>> result = findAnagramPairs(words);
    
    for (const auto& pair : result)
        cout << "(" << pair.first << ", " << pair.second << ")" << endl;
    
    return 0;
}
