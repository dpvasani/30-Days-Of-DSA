## **🔹 Approach 1: Sorting (Brute Force)**
**Time Complexity: O(n log n)**  
- Sort the array.  
- If **n is odd**, return the middle element.  
- If **n is even**, return the average of two middle elements.  

### **Code:**
```cpp
#include <bits/stdc++.h>
using namespace std;

double findMedian(vector<int>& arr) {
    sort(arr.begin(), arr.end()); // O(n log n)
    int n = arr.size();
    
    if (n % 2 == 1) return arr[n / 2]; 
    return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
}

int main() {
    vector<int> arr = {3, 1, 2, 4, 5};
    cout << "Median: " << findMedian(arr) << endl;
    return 0;
}
```
**Output:**  
```
Median: 3
```

---

## **🔹 Approach 2: QuickSelect (Optimized for Large Arrays)**
**Time Complexity: O(n) (Average Case), O(n²) (Worst Case)**  
- Uses **QuickSelect** (like QuickSort) to find the **k-th smallest element** without full sorting.  

### **Code:**
```cpp
#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high], i = low;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) swap(arr[i++], arr[j]);
    }
    swap(arr[i], arr[high]);
    return i;
}

int quickSelect(vector<int>& arr, int low, int high, int k) {
    if (low <= high) {
        int pi = partition(arr, low, high);
        if (pi == k) return arr[pi]; 
        if (pi > k) return quickSelect(arr, low, pi - 1, k);
        return quickSelect(arr, pi + 1, high, k);
    }
    return -1;
}

double findMedian(vector<int>& arr) {
    int n = arr.size();
    if (n % 2 == 1) return quickSelect(arr, 0, n - 1, n / 2);
    return (quickSelect(arr, 0, n - 1, n / 2 - 1) + quickSelect(arr, 0, n - 1, n / 2)) / 2.0;
}

int main() {
    vector<int> arr = {3, 1, 2, 4, 5};
    cout << "Median: " << findMedian(arr) << endl;
    return 0;
}
```

---

## **🔹 Time Complexity Comparison**
| **Approach**  | **Time Complexity** | **Best For** |
|--------------|--------------------|--------------|
| **Sorting (Brute Force)** | O(n log n) | Small to Medium `n` |
| **QuickSelect (Optimized)** | O(n) (Average) | Large `n` |

