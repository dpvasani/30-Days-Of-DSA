#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {

  // Vector Dynamic Array -> SIze Is Not Fixed -> Default Size 0 Whenever
  // more size is required it make the doubled size like if 2 size filled than
  // it make itself 4 than 8 and so on.
  // Pass By Value In Function
  // Declaration or Initialization
  // vector<int> arr;
  // vector<int> arr{10, 20, 30}; -> {10,20,30}
  // vector<int<arr(5) -> {0,0,0,0,0}
  // vector<int>arr(5,-2) -> {-2,-2,-2,-2,-2} ->(size,value)
  // vector<int>arr(n) -> {0,0,0,0,0} if n = 5;
  // Insertion
  // arr.push_back(5);
  // Remove
  // arr.pop_back();
  // Declaration
  // vector<int>arr;  -> arr.size() = 0 ; And arr.capacity() -> 0
  // arr.size() -> Number Of Element Its Store
  // arr.empty() -> Check If Vector Is Empty Or Not -> Empty Than True

  // arr.capacity() -> Number Of Element Its Can Store
  // *2 if arr get fully filled and new element inserted
  // in initialization size = capacity in every method if you explicitly mention
  // that size then it will be initialized with that size
  // sizeof(arr) -> compiler dependent -> initially cout<<arr; -> give
  // Error XOR ->  0^0 = 0 , 0^1 = 1 , 1^0 = 1 , 1^1 = 0

  // For Reference -> cppreference.com or cplusplus.com
  // Best Practice
  // int n;
  // cin >> n;
  // vector<int>(n);
  // int ans = (sizeof(arr) / sizeof(int));
  // Deference Between Size And Capacity
  // int arr[10] = {1, 2, 3, 4, 5, 6, 7};
  // size = 7 , capacity = 10

  // For each loop
  // for (auto val : arr) {
  //   cout << val << " ";
  // }

  vector<int> brr(10, -101);
  cout << "Capacity -> " << brr.capacity() << endl;
  cout << "Size -> " << brr.size() << endl;

  for (int i = 0; i < brr.size(); i++) {
    cout << brr[i] << " ";
  }
  cout << endl;

  // insert
  // vector<int> v;
  // int n;
  // cin >> n;
  // for (int i = 0; i < n; ++i) {
  //   int d;
  //   cin >> d;
  //   v.push_back(d);
  // }

  // I want to clear the vector
  // v.clear();
  // in vector, dont tell size of vector.
  // just keep inserting, i will manage the allocations.
  // cout << "Front element: " << v[0] << endl;
  // cout << "Front element: " << v.front() << endl;
  // cout << "End Element: " << v[v.size() - 1] << endl;
  // cout << "End Element: " << v.back() << endl;

  return 0;
}