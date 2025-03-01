### **1. Euclidean Algorithm (Iterative) - O(log(min(a, b)))** ✅ **Best**
```cpp
int GcdIterative(int a, int b) {
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}
```
🔹 **Explanation:**  
- Uses modulus (`%`) repeatedly until `b == 0`.  
- Runs in **O(log(min(a, b)))** time, making it very efficient.  

---

### **2. Euclidean Algorithm (Recursive) - O(log(min(a, b)))** ✅ **Best**
```cpp
int GcdRecursive(int a, int b) {
    if (b == 0) return a;
    return GcdRecursive(b, a % b);
}
```
🔹 **Explanation:**  
- Same logic as iterative but written using recursion.  
- **Time Complexity:** **O(log(min(a, b)))**.  

---

### **3. Extended Euclidean Algorithm - O(log(min(a, b)))** ✅ **Best**
```cpp
int ExtendedGcd(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int gcd = ExtendedGcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return gcd;
}
```
🔹 **Explanation:**  
- Finds `x` and `y` such that `ax + by = gcd(a, b)`.  
- Used in **modular inverses** in cryptography.  
- **Time Complexity:** **O(log(min(a, b)))**.  

---

### **4. Binary GCD Algorithm (Stein's Algorithm) - O(log(min(a, b)))** ✅ **Best**
```cpp
int BinaryGcd(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;
    int shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    while (b) {
        b >>= __builtin_ctz(b);
        if (a > b) swap(a, b);
        b -= a;
    }
    return a << shift;
}
```
🔹 **Explanation:**  
- Uses bitwise operations (`>>`) to divide numbers by 2 efficiently.  
- **Time Complexity:** **O(log(min(a, b)))**, same as Euclidean but faster for large numbers.  

---

### **5. Using `std::gcd()` from C++17 - O(log(min(a, b)))** ✅ **Best (Inbuilt)**
```cpp
#include <numeric>  // For std::gcd
int gcd = std::gcd(a, b);
```
🔹 **Explanation:**  
- Uses the **optimized Euclidean algorithm** internally.  
- **Time Complexity:** **O(log(min(a, b)))**.  

---

### **6. Brute Force Approach - O(min(a, b))** ❌ **Slow**
```cpp
int GcdBruteForce(int a, int b) {
    int gcd = 1;
    for (int i = min(a, b); i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
            break;
        }
    }
    return gcd;
}
```
🔹 **Explanation:**  
- Checks every number from `min(a, b)` down to `1`.  
- **Time Complexity:** **O(min(a, b))**, inefficient for large numbers.  

---

### **Comparison Table**
| Method | Time Complexity | Efficiency | Notes |
|--------|---------------|------------|------|
| **Euclidean Algorithm (Iterative)** | **O(log(min(a, b)))** | ✅ Best | Standard approach, very efficient |
| **Euclidean Algorithm (Recursive)** | **O(log(min(a, b)))** | ✅ Best | Same as iterative but recursive |
| **Extended Euclidean Algorithm** | **O(log(min(a, b)))** | ✅ Best | Also finds `x, y` in `ax + by = gcd(a, b)` |
| **Binary GCD (Stein's Algorithm)** | **O(log(min(a, b)))** | ✅ Best | Faster than standard Euclidean for large numbers |
| **C++ `std::gcd()`** | **O(log(min(a, b)))** | ✅ Best (Built-in) | Uses optimized Euclidean |
| **Brute Force Approach** | **O(min(a, b))** | ❌ Worst | Checks all numbers down to 1 |

---

### **Which One Should You Use?**
✅ **For general cases:** Use **Euclidean Algorithm (Iterative or Recursive)**.  
✅ **For very large numbers:** Use **Binary GCD Algorithm**.  
✅ **For C++17 and later:** Use **`std::gcd()`**.  
❌ **Avoid Brute Force** as it is slow.  
