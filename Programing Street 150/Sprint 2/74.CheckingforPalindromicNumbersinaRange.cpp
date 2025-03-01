#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

vector<int> findPalindromesInRange(int start, int end) {
    vector<int> palindromes;
    for (int i = start; i <= end; i++) {
        if (isPalindrome(i))
            palindromes.push_back(i);
    }
    return palindromes;
}

int main() {
    int start = 1, end = 100;
    vector<int> palindromes = findPalindromesInRange(start, end);
    for (int num : palindromes)
        cout << num << " ";
    cout << endl;
    return 0;
}
