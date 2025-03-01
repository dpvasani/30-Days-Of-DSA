### **Finding Missing Numbers in a Sequence (1 to N)**
We will cover **all possible methods** along with their **time complexity analysis**.

---

## **🔹 1. Brute Force Approach (O(n²))**
**Approach:**
1. Iterate from `1` to `N`.
2. For each number, check if it exists in the array using another loop.
3. If not found, it's a missing number.

**Code:**
```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingBruteForce(vector<int>& nums, int n) {
    vector<int> missing;
    for (int i = 1; i <= n; i++) {
        bool found = false;
        for (int num : nums) {
            if (num == i) {
                found = true;
                break;
            }
        }
        if (!found) {
            missing.push_back(i);
        }
    }
    return missing;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> nums[i];
    }

    vector<int> missing = findMissingBruteForce(nums, n);
    for (int num : missing) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
```
**Time Complexity:**  
- **O(n²)** (For each `i`, we iterate through the array)

---

## **🔹 2. Sorting Approach (O(n log n))**
**Approach:**
1. Sort the given sequence.
2. Iterate from `1` to `N` and find missing numbers.

**Code:**
```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingSorting(vector<int>& nums, int n) {
    vector<int> missing;
    sort(nums.begin(), nums.end());

    int expected = 1;
    for (int num : nums) {
        while (expected < num) {
            missing.push_back(expected++);
        }
        expected++;
    }

    while (expected <= n) {
        missing.push_back(expected++);
    }

    return missing;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> nums[i];
    }

    vector<int> missing = findMissingSorting(nums, n);
    for (int num : missing) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
```
**Time Complexity:**  
- **O(n log n)** (Sorting) + **O(n)** (Finding missing)  
- **Overall: O(n log n)**

---

## **🔹 3. Hashing Approach (O(n))**
**Approach:**
1. Create a **boolean array** (or `unordered_set`) to track present numbers.
2. Iterate from `1` to `N` and check which numbers are missing.

**Code:**
```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingHashing(vector<int>& nums, int n) {
    vector<bool> present(n + 1, false);
    vector<int> missing;

    for (int num : nums) {
        present[num] = true;
    }

    for (int i = 1; i <= n; i++) {
        if (!present[i]) {
            missing.push_back(i);
        }
    }

    return missing;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> nums[i];
    }

    vector<int> missing = findMissingHashing(nums, n);
    for (int num : missing) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
```
**Time Complexity:**  
- **O(n)** (Single pass for marking + single pass for checking)
- **O(n) space** (For the boolean array)

---

## **🔹 4. Sum Formula Approach (O(n) without Extra Space)**
**Approach:**
1. Compute **expected sum** using the formula:
   \[
   S = \frac{n(n+1)}{2}
   \]
2. Compute the **actual sum** of the given sequence.
3. The difference is the missing number.

**Code (for single missing number):**
```cpp
#include <bits/stdc++.h>
using namespace std;

int findMissingSumFormula(vector<int>& nums, int n) {
    int expectedSum = (n * (n + 1)) / 2;
    int actualSum = accumulate(nums.begin(), nums.end(), 0);
    return expectedSum - actualSum;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> nums[i];
    }

    cout << findMissingSumFormula(nums, n) << endl;

    return 0;
}
```
**Time Complexity:**  
- **O(n)** (Single pass for summing)
- **O(1) space** (No extra storage)

🚀 **⚠️ This method only works for a **single missing number**!**  
For multiple missing numbers, use hashing or sorting.

---

## **🔹 5. XOR Approach (O(n) Without Extra Space)**
**Approach:**
1. Compute `XOR(1 to n)`.
2. Compute `XOR` of all elements in the given sequence.
3. The difference gives the missing number.

**Code:**
```cpp
#include <bits/stdc++.h>
using namespace std;

int findMissingXOR(vector<int>& nums, int n) {
    int xorAll = 0, xorArray = 0;
    
    for (int i = 1; i <= n; i++) {
        xorAll ^= i;
    }

    for (int num : nums) {
        xorArray ^= num;
    }

    return xorAll ^ xorArray;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> nums[i];
    }

    cout << findMissingXOR(nums, n) << endl;

    return 0;
}
```
**Time Complexity:**  
- **O(n)** (Single pass for XOR)
- **O(1) space** (No extra storage)

🚀 **⚠️ This method only works for a **single missing number**!**  

---

## **🔹 Time Complexity Comparison Table**
| **Method**             | **Time Complexity** | **Space Complexity** | **Best For** |
|------------------------|--------------------|----------------------|--------------|
| **Brute Force**        | O(n²)              | O(1)                 | Small `n` |
| **Sorting**            | O(n log n)         | O(1)                 | Small `n` |
| **Hashing**            | O(n)               | O(n)                 | Multiple missing numbers |
| **Sum Formula**        | O(n)               | O(1)                 | Single missing number |
| **XOR Method**         | O(n)               | O(1)                 | Single missing number |

---

## **🔹 Conclusion**
- If **multiple numbers** are missing → **Use Hashing** `(O(n))`.
- If **only one number** is missing → **Use Sum Formula or XOR** `(O(n), O(1) space)`.
- If the array is **already sorted** → **Use Binary Search** `(O(log n))`.
- If `n` is **small** → **Use Brute Force** `(O(n²))`.

