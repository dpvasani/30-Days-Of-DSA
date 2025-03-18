
```cpp
while (binary > 0) {
    int lastDigit = binary % 10;  // Step 1: Get the last digit
    decimal += lastDigit * pow(2, power);  // Step 2: Multiply with 2^power and add to decimal
    power++;  // Step 3: Increase the power for the next digit
    binary /= 10;  // Step 4: Remove the last digit
}
```

### **Step-by-Step Explanation**
Let's take an example:  
**Binary Input:** `1011`  
**Initialization:** `decimal = 0`, `power = 0`  

| Iteration | `binary` (before) | `lastDigit = binary % 10` | `decimal += lastDigit * pow(2, power)` | `power++` | `binary /= 10` (binary after) |
|-----------|------------------|----------------------------|----------------------------------------|-----------|------------------------------|
| 1st       | `1011`           | `1`                        | `decimal = 0 + (1 * 2^0) = 1`         | `1`       | `101`                         |
| 2nd       | `101`            | `1`                        | `decimal = 1 + (1 * 2^1) = 3`         | `2`       | `10`                          |
| 3rd       | `10`             | `0`                        | `decimal = 3 + (0 * 2^2) = 3`         | `3`       | `1`                           |
| 4th       | `1`              | `1`                        | `decimal = 3 + (1 * 2^3) = 11`        | `4`       | `0` (loop ends)               |

### **What Happens at Each Line?**
1️⃣ `int lastDigit = binary % 10;`  
   - Extracts the last digit of `binary` using modulus (`%`).
   - Example: `1011 % 10 = 1`

2️⃣ `decimal += lastDigit * pow(2, power);`  
   - Multiplies the last digit by `2^power` and adds it to `decimal`.  
   - Example: `1 * 2^0 = 1`, `1 * 2^1 = 2`, etc.

3️⃣ `power++;`  
   - Increases power for the next digit.

4️⃣ `binary /= 10;`  
   - Removes the last digit by performing integer division (`/ 10`).
   - Example: `1011 / 10 = 101`

### **Final Output**
After all iterations, `decimal = 11` (which is the decimal equivalent of `1011`).

```cpp

int value = lastDigit * pow(2, power); // Calculate contribution of this digit
decimal = decimal + value; // Add to total decimal value
```

```cpp

#include <iostream>
#include <cmath>
#include <iomanip> // For formatting output
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(long long binary) {
    int decimal = 0, power = 0;

    while (binary > 0) {
        int lastDigit = binary % 10;  // Get the last digit
        decimal += lastDigit * pow(2, power);  // Multiply with 2^power
        power++;  // Increase power
        binary /= 10;  // Remove last digit
    }

    return decimal;
}

int main() {
    long long binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = binaryToDecimal(binary);

    cout << "Decimal equivalent: " << decimal << endl;
    cout << "Octal equivalent: " << oct << decimal << endl;  // Convert to octal
    cout << "Hexadecimal equivalent: " << hex << uppercase << decimal << endl;  // Convert to hexadecimal (uppercase)

    return 0;
}
```