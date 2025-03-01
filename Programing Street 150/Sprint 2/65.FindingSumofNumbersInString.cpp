#include <iostream>
#include <sstream>
using namespace std;


int sumNumbersInString(string str) {
    int sum = 0, num;
    stringstream ss(str);
    
    while (ss >> num) {
        sum += num;
    }
    
    return sum;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Sum of numbers in string: " << sumNumbersInString(str) << endl;
    return 0;
}
