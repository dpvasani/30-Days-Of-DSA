### **🔹 Approach 1: Iterative (Using 2D Array)**
**Time Complexity: O(n²)**
- Use a **2D vector** to store Pascal's Triangle.
- Each element is computed using the formula:
  \[
  \text{pascal}[i][j] = \text{pascal}[i-1][j-1] + \text{pascal}[i-1][j]
  \]
- Print each row.

#### **Code:**
```cpp
#include <bits/stdc++.h>
using namespace std;

void generatePascalsTriangle(int rows) {
    vector<vector<int>> pascal(rows);

    for (int i = 0; i < rows; i++) {
        pascal[i].resize(i + 1, 1);  // Set first and last elements to 1

        for (int j = 1; j < i; j++) {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }

    for (const auto &row : pascal) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows;
    cin >> rows;
    generatePascalsTriangle(rows);
    return 0;
}
```
---

### **🔹 Approach 2: Recursive (Using Factorial Formula)**
**Time Complexity: O(n²)**
- Each element is computed using:
  \[
  C(n, r) = \frac{n!}{r!(n-r)!}
  \]
- Compute factorial and use **binomial coefficient**.

#### **Code:**
```cpp
#include <bits/stdc++.h>
using namespace std;

int factorial(int num) {
    if (num == 0 || num == 1) return 1;
    return num * factorial(num - 1);
}

int binomialCoefficient(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

void generatePascalsTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            cout << binomialCoefficient(i, j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows;
    cin >> rows;
    generatePascalsTriangle(rows);
    return 0;
}
```
---

### **🔹 Time Complexity Comparison**
| **Approach**           | **Time Complexity** | **Space Complexity** | **Best For** |
|------------------------|--------------------|----------------------|--------------|
| **Iterative (2D array)**  | O(n²)              | O(n²)                 | Small to Medium `n` |
| **Recursive (Factorial)** | O(n²) (Factorial is expensive) | O(1) | When `n` is small |

---

### **🔹 Output for `rows = 4`**
```
1
1 1
1 2 1
1 3 3 1
```