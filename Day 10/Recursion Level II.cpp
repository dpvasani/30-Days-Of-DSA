#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int climbStairs(int n) {
  // Base Case

  // For n == 0 if We Return 0 -> That Means We Cant Reach to 0th Stair So We
  // Jump On It -> So We Return 1
  if (n == 0 || n == 1) {
    return 1;
  }
  // Recursive Relation
  return climbStairs(n - 1) + climbStairs(n - 2);
}

void print(int arr[], int n, int i) {
  // Base Case
  if (i >= n) {
    return;
  }
  // One Case Solved
  cout << arr[i] << " ";
  // print(arr, n, ++i); Pahle Use Than Copy -> Working -> Pre Increment ->
  // Passed By Value
  // print(arr, n, i++); Pahle Copy Than Use -> Infinite Loop ->
  // Post incerement -> Passed By Value
  print(arr, n, i + 1);
}

void findMax(int arr[], int n, int i, int &maxi) {
  // Base Case
  // Array Pura Khatm -> Traverse Ho Gaya Than Vapis A Jao
  if (i >= n) {
    return;
  }
  // One Case Solved
  // Check Current Elements For Max
  if (arr[i] > maxi) {
    maxi = arr[i];
  }
  // Baki Recursive Sambhal Lega
  findMax(arr, n, i + 1, maxi);
}

void findMin(int arr[], int n, int i, int &min) {
  // Base Case
  // Array Pura Khatm -> Traverse Ho Gaya Than Vapis A Jao
  if (i >= n) {
    return;
  }
  // One Case Solved
  // Check Current Elements For Max
  if (arr[i] < min) {
    min = arr[i];
  }
  // Baki Recursive Sambhal Lega
  findMin(arr, n, i + 1, min);
}

// int checkKey(string &str, int i, int &n, char &key) {
//   // Base Case
//   if (i >= n) {
//     return -1;
//   }
//   // One Case Solved
//   if (str[i] == key) {
//     return i;
//   }
//   // Baki Recursive Sambhal Lega
//   return checkKey(str, i + 1, n, key);
// }

void checkKey(string &str, int i, int &n, char &key, vector<int> &ans,
              int &count) {
  // Base Case
  if (i >= n) {
    return;
  }
  // One Case Solved
  if (str[i] == key) {
    count++;
    cout << "Found at " << i << endl;
    ans.push_back(i);
  }
  // Baki Recursive Sambhal Lega
  return checkKey(str, i + 1, n, key, ans, count);
}

void printDigit(int n){
  // Base Case
  if(n == 0){
    return;
  }
  // One Case Solved
  int digit = n % 10;
  
  // Baki Recursive Sambhal Lega
  printDigit(n/10);

  cout << digit << " ";
}

int main() {
  // Recursion Level II

  // Whenever I Passed Any Variable In Function Which Store Data Or Return ->
  // Always Pass By Reference

  // int n;
  // cout << "Enter the number of n : ";
  // cin >> n;
  // int ans = climbStairs(n);
  // cout << "The answer is : " << ans << endl;

  // Print Array Using Recursion
  // int arr[5] = {10, 20, 60, 40, 50};
  // int n = 5;
  // int i = 0;
  // print(arr, n, i);

  // Find Max & Min Using Recursion
  // int arr[5] = {10, 20, 60, 40, 50};
  // int n = 5;
  // int i = 0;
  // int maxi = INT_MIN;
  // int min = INT_MAX;
  // findMax(arr, n, i, maxi);
  // cout << "The Maximum Number is : " << maxi << endl;
  // findMin(arr, n, i, min);
  // cout << "The Minimum Number is : " << min << endl;

  // String Traversal Using Recursion
  // string str = "DarshanVasani";
  // int n = str.length();
  // char key = 'a';
  // int i = 0;
  // vector<int> ans;
  // int count = 0;
  // checkKey(str, i, n, key, ans, count);
  // cout << "Total Number of " << key << " is : " << count << endl;
  // for (int i = 0; i < ans.size(); i++) {
  //   cout << ans[i] << " ";
  // }

  // Print Digit of Number Using Recursion
  int n ; 
  cout<<"Enter the number : ";
  cin>>n;
  if(n == 0){
    cout<<"Number is Zero"<<endl;
  }
  printDigit(n);

  return 0;
}