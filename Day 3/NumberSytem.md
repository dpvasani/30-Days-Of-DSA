## **Number System Conversions**

Here is a detailed guide on *Number System Conversions*, including conversions between different bases:

### *Number Systems:*
1. **Decimal (Base-10)** → Digits: {0,1,2,3,4,5,6,7,8,9}  
2. **Binary (Base-2)** → Digits: {0,1}  
3. **Octal (Base-8)** → Digits: {0,1,2,3,4,5,6,7}  
4. **Hexadecimal (Base-16)** → Digits: {0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F}  

---

### **1. Decimal to Other Bases**
1. **Decimal to Binary:**  
   - Divide the decimal number by *2*, store the remainder.  
   - Continue dividing the quotient by 2 until you get 0.  
   - Read remainders *in reverse order*.  

   *Example:* Convert *25₁₀* to binary.  
   
   25 ÷ 2 = 12 remainder 1  
   12 ÷ 2 = 6 remainder 0  
   6 ÷ 2 = 3 remainder 0  
   3 ÷ 2 = 1 remainder 1  
   1 ÷ 2 = 0 remainder 1  
   
   **Binary = 11001₂**

2. **Decimal to Octal:**  
   - Follow the same method as binary but divide by *8* instead.  
   *Example:* Convert *125₁₀* to octal.  
   
   125 ÷ 8 = 15 remainder 5  
   15 ÷ 8 = 1 remainder 7  
   1 ÷ 8 = 0 remainder 1  
   
   **Octal = 175₈**

3. **Decimal to Hexadecimal:**  
   - Divide by *16* and use hexadecimal digits (A=10, B=11, ..., F=15).  
   *Example:* Convert *255₁₀* to hexadecimal.  
   
   255 ÷ 16 = 15 remainder 15 (F)  
   15 ÷ 16 = 0 remainder 15 (F)  
   
   **Hexadecimal = FF₁₆**

---

### **2. Binary to Other Bases**
1. **Binary to Decimal:**  
   - Multiply each digit by *2ⁿ*, where n is the position from the right (starting at 0).  
   *Example:* Convert *1101₂* to decimal.  
   
   (1 × 2³) + (1 × 2²) + (0 × 2¹) + (1 × 2⁰)  
   = (8) + (4) + (0) + (1)  
   = **13₁₀**
   

2. **Binary to Octal:**  
   - Group *3-bits* from right to left, then convert each group to octal.  
   *Example:* Convert *101110₂* to octal.  
   
   Grouping: 101 110  
   101₂ = 5₈, 110₂ = 6₈  
   
   **Octal = 56₈**

3. **Binary to Hexadecimal:**  
   - Group *4-bits* from right to left and convert to hexadecimal.  
   *Example:* Convert *11011011₂* to hexadecimal.  
   
   Grouping: 1101 1011  
   1101₂ = D₁₆, 1011₂ = B₁₆  
   
   **Hexadecimal = DB₁₆**

---

### **3. Octal to Other Bases**
1. **Octal to Decimal:**  
   - Multiply each digit by *8ⁿ* (n = position from right, starting at 0).  
   *Example:* Convert *157₈* to decimal.  
   
   (1 × 8²) + (5 × 8¹) + (7 × 8⁰)  
   = (64) + (40) + (7)  
   = **111₁₀**
   

2. **Octal to Binary:**  
   - Convert each octal digit into *3-bit binary*.  
   *Example:* Convert *57₈* to binary.  
   
   5₈ = 101₂  
   7₈ = 111₂  
   
   **Binary = 101111₂**

---

### **4. Hexadecimal to Other Bases**
1. **Hexadecimal to Decimal:**  
   - Multiply each digit by *16ⁿ* (n = position from right, starting at 0).  
   *Example:* Convert *2F₁₆* to decimal.  
   
   (2 × 16¹) + (15 × 16⁰)  
   = (32) + (15)  
   = **47₁₀**
   

2. **Hexadecimal to Binary:**  
   - Convert each hex digit into *4-bit binary*.  
   *Example:* Convert *A3₁₆* to binary.  
   
   A₁₆ = 1010₂  
   3₁₆ = 0011₂  
   
   **Binary = 10100011₂**

3. **Hexadecimal to Octal:**  
   - Convert hex to binary (4-bit), then regroup into *3-bit* for octal.  
   *Example:* Convert *1F₁₆* to octal.  
   
   1₁₆ = 0001₂  
   F₁₆ = 1111₂  
   Binary = 0001 1111  
   Grouping (3-bit): 001 111 1  
   
   **Octal = 37₈**

---

### **Quick Reference Table:**
| Decimal | Binary  | Octal | Hex  |
|---------|--------|-------|------|
| 1       | 0001₂  | 1₈    | 1₁₆  |
| 2       | 0010₂  | 2₈    | 2₁₆  |
| 3       | 0011₂  | 3₈    | 3₁₆  |
| 4       | 0100₂  | 4₈    | 4₁₆  |
| 5       | 0101₂  | 5₈    | 5₁₆  |
| 6       | 0110₂  | 6₈    | 6₁₆  |
| 7       | 0111₂  | 7₈    | 7₁₆  |
| 8       | 1000₂  | 10₈   | 8₁₆  |
| 9       | 1001₂  | 11₈   | 9₁₆  |
| 10      | 1010₂  | 12₈   | A₁₆  |
| 11      | 1011₂  | 13₈   | B₁₆  |
| 12      | 1100₂  | 14₈   | C₁₆  |
| 13      | 1101₂  | 15₈   | D₁₆  |
| 14      | 1110₂  | 16₈   | E₁₆  |
| 15      | 1111₂  | 17₈   | F₁₆  |

---
# **Number System Conversions in C++**

## **Conversions Covered:**
1. **Decimal to Binary, Octal, Hexadecimal**
2. **Binary to Decimal, Octal, Hexadecimal**
3. **Octal to Decimal, Binary, Hexadecimal**
4. **Hexadecimal to Decimal, Binary, Octal**

---

## **1. Decimal to Other Bases (Binary, Octal, Hexadecimal)**

### **Logic**
- Divide the decimal number by the target base (2 for binary, 8 for octal, 16 for hexadecimal).
- Store the remainder.
- Repeat until the quotient becomes 0.
- Reverse the remainders to get the final result.

### **C++ Code**
```cpp
#include <iostream>
#include <stack>
using namespace std;

void decimalToBase(int num, int base) {
    stack<char> st;
    string digits = "0123456789ABCDEF";

    while (num > 0) {
        st.push(digits[num % base]);
        num /= base;
    }

    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter Decimal Number: ";
    cin >> num;

    cout << "Binary: ";
    decimalToBase(num, 2);

    cout << "Octal: ";
    decimalToBase(num, 8);

    cout << "Hexadecimal: ";
    decimalToBase(num, 16);

    return 0;
}
```

### **Example**
**Input:** `num = 29`  
**Output:**  
```
Binary: 11101  
Octal: 35  
Hexadecimal: 1D  
```

---

## **2. Binary to Decimal, Octal, and Hexadecimal**
### **Logic**
- Start from the rightmost digit.
- Multiply each digit by \(2^n\) where `n` is its position from the right.
- Sum up the results.

### **C++ Code**
```cpp
#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(long long binary) {
    int decimal = 0, i = 0;
    while (binary > 0) {
        decimal += (binary % 10) * pow(2, i++);
        binary /= 10;
    }
    return decimal;
}

int main() {
    long long binary;
    cout << "Enter Binary Number: ";
    cin >> binary;

    int decimal = binaryToDecimal(binary);
    cout << "Decimal: " << decimal << endl;
    cout << "Octal: " << oct << decimal << endl;
    cout << "Hexadecimal: " << hex << decimal << endl;

    return 0;
}
```

### **Example**
**Input:** `binary = 11101`  
**Output:**  
```
Decimal: 29  
Octal: 35  
Hexadecimal: 1D  
```

---

## **3. Octal to Decimal, Binary, and Hexadecimal**
### **Logic**
- Start from the rightmost digit.
- Multiply each digit by \(8^n\) where `n` is its position from the right.
- Sum up the results.

### **C++ Code**
```cpp
#include <iostream>
#include <cmath>
using namespace std;

int octalToDecimal(int octal) {
    int decimal = 0, i = 0;
    while (octal > 0) {
        decimal += (octal % 10) * pow(8, i++);
        octal /= 10;
    }
    return decimal;
}

int main() {
    int octal;
    cout << "Enter Octal Number: ";
    cin >> octal;

    int decimal = octalToDecimal(octal);
    cout << "Decimal: " << decimal << endl;
    cout << "Binary: " << bitset<16>(decimal) << endl;
    cout << "Hexadecimal: " << hex << decimal << endl;

    return 0;
}
```

### **Example**
**Input:** `octal = 35`  
**Output:**  
```
Decimal: 29  
Binary: 11101  
Hexadecimal: 1D  
```

---

## **4. Hexadecimal to Decimal, Binary, and Octal**
### **Logic**
- Convert each hex digit into its decimal equivalent.
- Multiply each digit by \(16^n\) where `n` is its position from the right.
- Sum up the results.

### **C++ Code**
```cpp
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int hexToDecimal(string hex) {
    int decimal = 0, base = 1;
    int len = hex.length();

    for (int i = len - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal += (hex[i] - '0') * base;
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal += (hex[i] - 'A' + 10) * base;
        }
        base *= 16;
    }
    return decimal;
}

int main() {
    string hex;
    cout << "Enter Hexadecimal Number: ";
    cin >> hex;

    int decimal = hexToDecimal(hex);
    cout << "Decimal: " << decimal << endl;
    cout << "Binary: " << bitset<16>(decimal) << endl;
    cout << "Octal: " << oct << decimal << endl;

    return 0;
}
```

### **Example**
**Input:** `hex = 1D`  
**Output:**  
```
Decimal: 29  
Binary: 11101  
Octal: 35  
```

---

# **Summary Table**
| Conversion | Method |
|------------|--------|
| Decimal to Binary | Divide by 2, store remainders, reverse |
| Decimal to Octal | Divide by 8, store remainders, reverse |
| Decimal to Hexadecimal | Divide by 16, store remainders, reverse |
| Binary to Decimal | Multiply each digit by \(2^n\) and sum |
| Binary to Octal | Convert binary → decimal → octal |
| Binary to Hexadecimal | Convert binary → decimal → hex |
| Octal to Decimal | Multiply each digit by \(8^n\) and sum |
| Octal to Binary | Convert octal → decimal → binary |
| Octal to Hexadecimal | Convert octal → decimal → hex |
| Hexadecimal to Decimal | Multiply each digit by \(16^n\) and sum |
| Hexadecimal to Binary | Convert hex → decimal → binary |
| Hexadecimal to Octal | Convert hex → decimal → octal |

---
