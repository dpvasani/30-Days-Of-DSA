#include <iostream>
#include <stack>
using namespace std;


bool isBalanced(string str) {
    stack<char> s;
    for (char ch : str) {
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        } else {
            if (s.empty()) return false;
            char top = s.top();
            if ((ch == ')' && top == '(') || 
                (ch == '}' && top == '{') || 
                (ch == ']' && top == '[')) {
                s.pop();
            } else {
                return false;
            }
        }
    }
    return s.empty();
}

int main() {
    string str;
    cout << "Enter a bracket sequence: ";
    cin >> str;

    cout << (isBalanced(str) ? "True" : "False") << endl;
    return 0;
}
