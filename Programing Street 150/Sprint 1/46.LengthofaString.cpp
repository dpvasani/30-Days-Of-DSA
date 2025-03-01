#include <iostream>
using namespace std;

int stringLength(const char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[] = "hello";
    cout << "Length of the string: " << stringLength(str) << endl;
    return 0;
}
