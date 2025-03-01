

## **1️⃣ Using Logarithm (O(1) - Fastest)**
The most efficient way to count digits is using **logarithm base 10**.  
Formula:  
\[
\text{Number of digits} = \lfloor \log_{10}(\text{num}) \rfloor + 1
\]

```cpp
#include <bits/stdc++.h>
using namespace std;

int countDigits(int num) {
    if (num == 0) return 1; // Special case for 0
    return floor(log10(num) + 1);
}

int main() {
    int num;
    cin >> num;
    cout << countDigits(num) << endl;
}
```

### **🔹 Why Use This?**
✅ **Constant Time Complexity O(1)**  
✅ **Works for Large Numbers (up to 10¹⁸ and beyond)**  

---

## **2️⃣ Using a Loop (O(log n))**
A simple approach is to repeatedly divide the number by **10** until it becomes **0**.

```cpp
#include <bits/stdc++.h>
using namespace std;

int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int num;
    cin >> num;
    cout << countDigits(num) << endl;
}
```

### **🔸 Why Use This?**
✅ **Easy to understand**  
❌ **Slower than log-based method (O(log n))**  

---

## **3️⃣ Using Strings (O(n))**
Convert the number to a **string** and count the length.

```cpp
#include <bits/stdc++.h>
using namespace std;

int countDigits(int num) {
    return to_string(num).length();
}

int main() {
    int num;
    cin >> num;
    cout << countDigits(num) << endl;
}
```

### **🔹 Why Use This?**
✅ **Very simple**  
❌ **Uses extra space** (string conversion)  
❌ **Slowest (O(n))**  

---

## **Example Run**
**Input:**  
```
12345
```
**Output:**  
```
5
```

### **💡 Best Choice?**
- Use **logarithm (O(1))** for efficiency.  
- Use **loop (O(log n))** for simplicity.  
- Avoid **string method (O(n))** unless necessary.  
