### *Insertion in 1D and 2D Arrays at Start, Middle, and End*  


---

## *1. Insertion in a 1D Array*
When inserting in a *1D array*, elements after the insertion point need to be shifted right to make space for the new element.

### *C++ Implementation for 1D Array*
```cpp
#include <iostream>
using namespace std;

void insertAtStart(int arr[], int &size, int capacity, int value) {
    if (size >= capacity) {
        cout << "Array is full!" << endl;
        return;
    }
    for (int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = value;
    size++;
}

void insertAtMid(int arr[], int &size, int capacity, int value) {
    if (size >= capacity) {
        cout << "Array is full!" << endl;
        return;
    }
    int mid = size / 2;
    for (int i = size; i > mid; i--) {
        arr[i] = arr[i - 1];
    }
    arr[mid] = value;
    size++;
}

void insertAtEnd(int arr[], int &size, int capacity, int value) {
    if (size >= capacity) {
        cout << "Array is full!" << endl;
        return;
    }
    arr[size] = value;
    size++;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5}; 
    int size = 5, capacity = 10;

    cout << "Original Array: ";
    printArray(arr, size);

    insertAtStart(arr, size, capacity, 0);
    cout << "After Insertion at Start: ";
    printArray(arr, size);

    insertAtMid(arr, size, capacity, 99);
    cout << "After Insertion at Mid: ";
    printArray(arr, size);

    insertAtEnd(arr, size, capacity, 100);
    cout << "After Insertion at End: ";
    printArray(arr, size);

    return 0;
}

```
### *Time and Space Complexity Table for 1D Array*
| *Position* | *Time Complexity* | *Space Complexity* |
|-------------|--------------------|---------------------|
| *Start*   | O(N) (Shifting all elements) | O(1) |
| *Middle*  | O(N/2) ≈ O(N) (Shifting half elements) | O(1) |
| *End*     | O(1) (Direct insertion) | O(1) |

---

## *2. Insertion in a 2D Array*
Insertion in a *2D array* involves selecting a row and column index to insert a new value. If no shifting is needed, it's *O(1), but if shifting is required (e.g., maintaining row-major order), it can be **O(N × M)*.

### *C++ Implementation for 2D Array*
```cpp
#include <iostream>
using namespace std;

void insertAtPosition(int arr[3][4], int row, int col, int insertRow, int insertCol, int value) {
    if (insertRow >= row || insertCol >= col || insertRow < 0 || insertCol < 0) {
        cout << "Invalid Position!" << endl;
        return;
    }
    arr[insertRow][insertCol] = value;
}

void print2DArray(int arr[3][4]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    cout << "Original 2D Array:\n";
    print2DArray(arr);

    insertAtPosition(arr, 3, 4, 0, 0, 99); // Insert at start
    cout << "\nAfter Insertion at Start:\n";
    print2DArray(arr);

    insertAtPosition(arr, 3, 4, 1, 2, 88); // Insert at mid
    cout << "\nAfter Insertion at Mid:\n";
    print2DArray(arr);

    insertAtPosition(arr, 3, 4, 2, 3, 77); // Insert at end
    cout << "\nAfter Insertion at End:\n";
    print2DArray(arr);

    return 0;
}
```

### *Time and Space Complexity Table for 2D Array*
| *Position* | *Time Complexity* | *Space Complexity* |
|-------------|--------------------|---------------------|
| *Start (0,0)*  | O(1) (Direct insertion) | O(1) |
| *Middle (M/2, N/2)* | O(1) (Direct insertion) | O(1) |
| *End (M-1, N-1)* | O(1) (Direct insertion) | O(1) |

---

## *Comparison Summary*
| *Operation*  | *1D Array* | *2D Array* |
|---------------|------------|------------|
| *Insertion at Start* | O(N) (Shifting required) | O(1) (Direct insertion) |
| *Insertion at Middle* | O(N) (Shifting half elements) | O(1) (Direct insertion) |
| *Insertion at End* | O(1) (Append operation) | O(1) (Direct insertion) |
| *Space Complexity* | O(1) | O(1) |

---

## *Key Takeaways*
- In 1D Arrays, insertion at the **end is the most efficient* (O(1)), while insertion at the *start or middle requires shifting* and takes *O(N)* time.
- *In 2D Arrays, if elements are accessed directly via indices, **insertion is O(1)*. However, if shifting is needed, the complexity increases.
