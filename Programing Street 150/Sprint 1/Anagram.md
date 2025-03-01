
## **🔹 Method 1: Sorting Approach**
**Time Complexity: O(n log n)**  
- Sort both strings and compare them.  
- If they are equal after sorting, they are **anagrams**.  

### **Code:**
```cpp
#include <bits/stdc++.h>
using namespace std;

bool isAnagramSort(string str1, string str2) {
    if (str1.length() != str2.length()) return false;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return str1 == str2;
}

int main() {
    string str1 = "listen", str2 = "silent";
    cout << (isAnagramSort(str1, str2) ? "True" : "False") << endl;
    return 0;
}
```
**Output:**  
```
True
```
✅ **Best For:** Small to medium-sized strings.

---

## **🔹 Method 2: Frequency Count (Hashing)**
**Time Complexity: O(n)**  
- Count the occurrences of each character using an array.  
- If counts match, they are anagrams.  

### **Code:**
```cpp
#include <bits/stdc++.h>
using namespace std;

bool isAnagramFrequency(string str1, string str2) {
    if (str1.length() != str2.length()) return false;

    vector<int> freq(26, 0); // Assuming lowercase letters only

    for (char c : str1) freq[c - 'a']++;
    for (char c : str2) freq[c - 'a']--;

    return all_of(freq.begin(), freq.end(), [](int count) { return count == 0; });
}

int main() {
    string str1 = "listen", str2 = "silent";
    cout << (isAnagramFrequency(str1, str2) ? "True" : "False") << endl;
    return 0;
}
```
**Output:**  
```
True
```
✅ **Best For:** Large strings, more efficient than sorting.

---

## **🔹 Method 3: Using `unordered_map` (Handles Any Characters)**
**Time Complexity: O(n)**  
- Uses `unordered_map` to count character occurrences.  
- Works for **both uppercase and lowercase**, and special characters.  

### **Code:**
```cpp
#include <bits/stdc++.h>
using namespace std;

bool isAnagramMap(string str1, string str2) {
    if (str1.length() != str2.length()) return false;

    unordered_map<char, int> freq;

    for (char c : str1) freq[c]++;
    for (char c : str2) freq[c]--;

    for (auto &entry : freq) {
        if (entry.second != 0) return false;
    }
    return true;
}

int main() {
    string str1 = "listen", str2 = "silent";
    cout << (isAnagramMap(str1, str2) ? "True" : "False") << endl;
    return 0;
}
```
**Output:**  
```
True
```
✅ **Best For:** Strings with **mixed characters** (uppercase, lowercase, numbers, symbols).

---

## **🔹 Time Complexity Comparison**
| **Method**           | **Time Complexity** | **Best For** |
|----------------------|--------------------|--------------|
| **Sorting Approach**  | O(n log n) | Small to medium-sized strings |
| **Frequency Count**  | O(n) | Large strings, lowercase only |
| **Hash Map Approach** | O(n) | Any character set (numbers, symbols, mixed case) |

