## **🔹 Method 1: Brute Force (Iterative)**
**Time Complexity: O(n)**  
- Multiply `base` by itself `exponent` times.  
- Works for **small exponents**, but inefficient for large values.  

### **Code:**
```cpp
#include <bits/stdc++.h>
using namespace std;

long long powerIterative(int base, int exponent) {
    long long result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base = 2, exponent = 3;
    cout << "Power: " << powerIterative(base, exponent) << endl;
    return 0;
}
```
**Output:**  
```
Power: 8
```

---

## **🔹 Method 2: Recursive Power Calculation**
**Time Complexity: O(n)**  
- Uses recursion instead of loops.  
- Simple, but not efficient for large numbers.  

### **Code:**
```cpp
#include <bits/stdc++.h>
using namespace std;

long long powerRecursive(int base, int exponent) {
    if (exponent == 0) return 1;
    return base * powerRecursive(base, exponent - 1);
}

int main() {
    int base = 2, exponent = 3;
    cout << "Power: " << powerRecursive(base, exponent) << endl;
    return 0;
}
```

---

## **🔹 Method 3: Optimized Exponentiation (Binary Exponentiation)**
**Time Complexity: O(log n)**  
- Efficient for large exponents using **divide-and-conquer**.  
- Instead of multiplying `n` times, it reduces the problem size by **half** at each step.  

### **Code:**
```cpp
#include <bits/stdc++.h>
using namespace std;

long long powerBinaryExpo(int base, int exponent) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) result *= base;
        base *= base;
        exponent /= 2;
    }
    return result;
}

int main() {
    int base = 2, exponent = 3;
    cout << "Power: " << powerBinaryExpo(base, exponent) << endl;
    return 0;
}
```

---

## **🔹 Method 4: Using `pow()` Function (C++ Built-in)**
**Time Complexity: O(1) (Highly optimized using assembly-level optimizations)**  

### **Code:**
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int base = 2, exponent = 3;
    cout << "Power: " << pow(base, exponent) << endl;
    return 0;
}
```

---

## **🔹 Time Complexity Comparison**
| **Method**          | **Time Complexity** | **Best For** |
|---------------------|--------------------|--------------|
| **Iterative (Loop)** | O(n) | Small exponent values |
| **Recursive Approach** | O(n) | Small exponent values |
| **Binary Exponentiation** | O(log n) | Large exponent values |
| **C++ `pow()` Function** | O(1) | Quick calculations |

