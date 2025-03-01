

```cpp
#include <iostream>
using namespace std;

// Function to calculate the sum of digits until a single digit is obtained
int sumOfDigitsUntilSingle(int num) {
    while (num >= 10) { // Keep summing until a single digit remains
        int sum = 0;
        while (num > 0) {
            sum += num % 10; // Extract last digit and add to sum
            num /= 10;       // Remove last digit
        }
        num = sum; // Update number with the new sum
    }
    return num;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int result = sumOfDigitsUntilSingle(number);
    cout << "The single-digit sum is: " << result << endl;

    return 0;
}
```

### Explanation:
1. **Extract digits** and sum them.
2. **Repeat** the process until a single-digit number is obtained.
3. **Return the final single digit**.

### Optimized Approach (Using Digital Root Formula):
The result can be directly computed using:
\[
\text{Digital Root} = 1 + (num - 1) \% 9
\]
This avoids loops and works in **O(1) time**.

```cpp
int digitalRoot(int num) {
    return (num == 0) ? 0 : 1 + (num - 1) % 9;
}
```

### Example Runs:
```
Enter a number: 9875
The single-digit sum is: 2
```
(Since \(9+8+7+5 = 29\), then \(2+9 = 11\), then \(1+1 = 2\)) 🚀