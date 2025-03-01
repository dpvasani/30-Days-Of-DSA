

## **📌 Code Breakdown**
```cpp
#include <bits/stdc++.h>
using namespace std;
```
- The `#include <bits/stdc++.h>` header includes all standard C++ libraries.
- `using namespace std;` allows us to use standard functions without `std::` prefix.

---

### **Step 1: Taking Input**
```cpp
int n;
cin >> n;
int arr[n];  // Declaring an array of size n

// Taking Array As Input
for (int i = 0; i < n; i++) {
    cin >> arr[i];
}
```
- Reads an integer `n` (number of elements in the array).
- Declares an array of size `n`.
- Loops through `n` times to take user input for each element.

---

### **Step 2: Sorting Using Bubble Sort**
```cpp
// Sorting Array (Bubble Sort)
for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
        if (arr[i] > arr[j]) {
            swap(arr[i], arr[j]);
        }
    }
}
```
- Uses a **nested loop** to compare and swap elements in ascending order.
- The outer loop runs from `i = 0` to `n-1`.
- The inner loop runs from `j = i+1` to `n`, ensuring that **smaller elements are swapped forward**.

⏳ **Time Complexity**:  
- **Worst case:** `O(n²)` (when the array is completely unsorted).  
- **Best case:** `O(n²)`, as there is no early termination like optimized Bubble Sort.

---

### **Step 3: Printing the Sorted Array**
```cpp
// Printing Sorted Array
for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}
```
- Loops through the sorted array and prints each element.

---

## **🔹 Issues and Optimizations**
1. **Inefficient Sorting (Bubble Sort is slow for large inputs)**  
   🔄 **Use `sort()` from STL** (O(n log n)) for better performance:
   ```cpp
   sort(arr, arr + n);
   ```

2. **Dynamic Array Allocation (Avoid VLAs in C++)**  
   - Instead of `int arr[n];`, use **`vector<int>`**:
     ```cpp
     vector<int> arr(n);
     ```

---

## **✅ Optimized Version Using STL**
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);  // Using vector instead of raw array

    for (int &x : arr) cin >> x;  // Taking input

    sort(arr.begin(), arr.end());  // Sorting using STL (O(n log n))

    for (int x : arr) cout << x << " ";  // Printing sorted array
    return 0;
}
```

**🔥 Improvements:**
✅ Uses `vector<int>` instead of a fixed-size array.  
✅ Uses **STL `sort()`** for better performance (`O(n log n)`).  
✅ **Shorter & more readable** with range-based loops.

