## Count Inversions in an Array

```cpp
class Solution {
  public:
    // Helper function to merge two halves and count inversions
    long long merge(long long arr[], long long temp[], int left, int mid, int right) {
        int i = left;    // Starting index for left subarray
        int j = mid;     // Starting index for right subarray
        int k = left;    // Starting index to be sorted
        long long inv_count = 0;

        while ((i <= mid - 1) && (j <= right)) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
                inv_count = inv_count + (mid - i);
            }
        }

        // Copy the remaining elements of left subarray, if any
        while (i <= mid - 1)
            temp[k++] = arr[i++];

        // Copy the remaining elements of right subarray, if any
        while (j <= right)
            temp[k++] = arr[j++];

        // Copy the sorted subarray into Original array
        for (i = left; i <= right; i++)
            arr[i] = temp[i];

        return inv_count;
    }

    // Helper function to sort the array and count inversions using merge sort
    long long mergeSort(long long arr[], long long temp[], int left, int right) {
        int mid;
        long long inv_count = 0;
        if (right > left) {
            mid = (right + left) / 2;

            inv_count += mergeSort(arr, temp, left, mid);
            inv_count += mergeSort(arr, temp, mid + 1, right);

            inv_count += merge(arr, temp, left, mid + 1, right);
        }
        return inv_count;
    }

    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], int n) {
        long long temp[n];
        return mergeSort(arr, temp, 0, n - 1);
    }
};

```

### Problem Statement
Given an array of N integers, count the inversions of the array using merge-sort. An inversion is defined as a pair (A[i], A[j]) such that i < j and A[j] < A[i].

### Examples

#### Example 1:
- **Input:** `N = 5, array[] = {1, 2, 3, 4, 5}`
- **Result:** `0`
- **Explanation:** The array is sorted, so there are no inversions.

#### Example 2:
- **Input:** `N = 5, array[] = {5, 4, 3, 2, 1}`
- **Result:** `10`
- **Explanation:** The array is reverse sorted, yielding the maximum number of inversions `(n)*(n-1)/2`.

#### Example 3:
- **Input:** `N = 5, array[] = {5, 3, 2, 1, 4}`
- **Result:** `7`
- **Explanation:** The pairs (5,1), (5,3), (5,2), (5,4), (3,2), (3,1), and (2,1) are inversions.

### Brute Force Approach
#### Algorithm / Intuition
The naive approach involves checking each pair of elements to see if they form an inversion.

1. Initialize a counter `cnt` to zero.
2. Loop through the array with an outer loop for index `i` from `0` to `N-1`.
3. For each `i`, run an inner loop for index `j` from `i+1` to `N-1`.
4. If `A[i] > A[j]`, increment the counter `cnt`.
5. Return `cnt` as the number of inversions.

#### Code (Brute Force)

```cpp
#include <bits/stdc++.h>
using namespace std;

int numberOfInversions(vector<int>& a, int n) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) cnt++;
        }
    }
    return cnt;
}

int main() {
    vector<int> a = {5, 4, 3, 2, 1};
    int n = 5;
    int cnt = numberOfInversions(a, n);
    cout << "The number of inversions is: " << cnt << endl;
    return 0;
}
```

#### Complexity Analysis
- **Time Complexity:** `O(N^2)`, due to the nested loops.
- **Space Complexity:** `O(1)`, no extra space is used.

### Optimal Approach
#### Algorithm / Intuition
Use merge sort to count inversions efficiently. During the merge step, count the number of inversions by comparing elements from the left and right halves.

1. Modify merge sort to count inversions.
2. During merging, if an element from the left half is greater than an element from the right half, all remaining elements in the left half form inversions with the current element in the right half.
3. Add the count of these inversions to the total count.

#### Code (Optimal Approach)

```cpp
#include <bits/stdc++.h>
using namespace std;

int merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    int cnt = 0;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            cnt += (mid - left + 1);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

    return cnt;
}

int mergeSort(vector<int> &arr, int low, int high) {
    int cnt = 0;
    if (low >= high) return cnt;
    int mid = (low + high) / 2;
    cnt += mergeSort(arr, low, mid);
    cnt += mergeSort(arr, mid + 1, high);
    cnt += merge(arr, low, mid, high);
    return cnt;
}

int numberOfInversions(vector<int>& a, int n) {
    return mergeSort(a, 0, n - 1);
}

int main() {
    vector<int> a = {5, 4, 3, 2, 1};
    int n = 5;
    int cnt = numberOfInversions(a, n);
    cout << "The number of inversions are: " << cnt << endl;
    return 0;
}
```

#### Complexity Analysis
- **Time Complexity:** `O(N*logN)`, similar to merge sort.
- **Space Complexity:** `O(N)`, due to the temporary array used during merging.