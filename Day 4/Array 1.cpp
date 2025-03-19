// Array

#include <iostream>
using namespace std;

// Here Array is Pointer Pointing to First Index Of Array
// Array Is Passed By Reference Because Pointer Is Passed By Value
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
// Best Practice When Passing Array Always Pass Array Size
void inc(int arr[], int size) {
  arr[0] = arr[0] + 10;
  printArray(arr, size);
}

int main() {

  // Data Structure to store similar item - > Same DataType
  // Continuous Memory Location
  // Use Case
  // For Multiple Same Kind Of Data
  // int a[3000] -> 3000 Variable are ready to use

  // Continuous Memory allocation
  // Memory Wastages
  // If Needble Memory Is Present But Not in Continuous Way
  // Symbol Table  -> Mapping of that Memory Location
  // int a -> A
  // int arr -> A1
  // Declaration
  // int arr[5];
  // int arr[5] = {1,2,3,4,5};
  // int arr1[] = {1,2,3,4,5};
  // int arr[10] = {1,2,3,4,5}; -> Remaining 5 Will Be Zero
  // int arr[10] = {0} -> Initializing all value with zero
  // int arr[5] = {0,0,0,0,0,0,0,0} -> Error
  // Making Array in run time - Bad Practice
  // Starting Address of Array -> Base Address
  // int n;
  // cin >> n;
  // int arr[n];

  // int arr[5] = {1, 2, 3, 4, 5};
  // // More Clear In Pointer
  // cout << arr << endl;
  // cout << &arr << endl;

  // Indexing And Accessing in Array
  // Indexing Start from 0Th Index
  // Array Size is 5 than Index is 0 to 4
  // N Size Array -> Index is 0 to N-1
  // arr[0] -> 1
  // arr[1] -> 2
  // arr[2] -> 3
  // Why zero
  //  arr + 0*4 -> arr + 0 -> 4 Because Array is Integers - A1 + [i*4] 4 due to
  //  integer
  // > Value At This Address
  // arr[i] -> Value at (Base Address + i*4)

  // Taking array in input

  // cin >> arr[i];

  // Printing Array
  // for(int i = 0; i < 5; i++){
  //   cout << arr[i] << " ";
  // }

  // int arrr[5];
  // cout<<"Enter Array Elements"<<endl;
  // for(int i = 0; i < 5; i++){
  //   cin>>arrr[i];
  // }
  // cout<<"Printing Array"<<endl;
  // for(int i = 0; i < 5; i++){
  //   cout<<arrr[i]*2<<" ";
  // }

  // Function And Array
  // Passed By Value -> Copy Creation
  // Two Concept
  // 1. Pass By Value -> Change In Copied Value
  // 2. Pass By Reference -> Change in Actual Value
  // In Array -> Pass By Reference -> Always
  // Updating In Actual Array
  // Always Pass Size Alongwith Array -> Best Practice
  // sizeof(arr) -> Size of Array in Bytes -> How Much SPace Occupied By Array
  // That Shows That How Much Memory is Allocated
  // 
  int arr[] = {4, 5};
  int size = 2;
  inc(arr, size);

  printArray(arr, size);

  return 0;
}