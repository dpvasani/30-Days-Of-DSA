// C++ program to delete the first occurrence of an
// element in the array using custom method

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = { 10, 20, 20, 20, 30 };
    int n = arr.size();
    int ele = 20;

    cout << "Array before deletion\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    bool found = false;
    for(int i = 0; i < n; i++) {
      
        // If the element has been found previously,
        // shift the current element to the left
        if(found) {
            arr[i - 1] = arr[i];
        }
      
        // check if the current element is equal to
        // the element to be removed 
        else if(arr[i] == ele) {
            found = true;
        }
    }
  
    // If element was found, reduce the size of array
    if(found == true)
        n--;
    
    cout << "\nArray after deletion\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
