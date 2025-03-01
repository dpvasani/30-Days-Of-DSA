### **Explanation of the Function: `int Gcd(int a, int b)`**


### **Code Breakdown:**
```cpp
int Gcd(int a, int b) {
    while (b != 0) {  // Continue until b becomes 0
        int rem = a % b;  // Compute the remainder when a is divided by b
        a = b;            // Assign b to a
        b = rem;          // Assign remainder to b
    }
    return a;  // When b becomes 0, a holds the GCD
}
```

---

### **Step-by-Step Example:**
Let's find `Gcd(48, 18)`

| Step | `a` | `b` | `a % b` (remainder) | New `a` | New `b` |
|------|----|----|----|----|----|
| 1 | 48 | 18 | `48 % 18 = 12` | 18 | 12 |
| 2 | 18 | 12 | `18 % 12 = 6` | 12 | 6 |
| 3 | 12 | 6 | `12 % 6 = 0` | 6 | 0 |

🔹 **Result:** `GCD(48, 18) = 6`

---

### **Time Complexity:**
- **O(log(min(a, b)))** → Very efficient!

---

### **Key Takeaways:**
✅ Uses the **Euclidean Algorithm** to find GCD.  
✅ Repeatedly replaces `a` with `b` and `b` with `a % b` until `b` becomes 0.  
✅ Efficient and commonly used in programming problems.  
