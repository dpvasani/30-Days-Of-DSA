#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// void solve(int arr[]) {
//   cout << "Size Of Array In Function : " << sizeof(arr) << endl;
//   cout << "Arr :" << arr << endl;
//   cout << "&Arr :" << &arr << endl;
//   arr[0] = 50;
// }

void update(int *p) {
  cout << "Address Stored In p is: " << p << endl;
  cout << "Address of p is :" << &p << endl;
  *p = *p + 10;
}

int main() {
  // Pointer Level II
  // int arr[10];
  // arr[0] arr[1] arr[2] arr[3] arr[4] arr[5] arr[6] arr[7] arr[8] arr[9]
  // arr[0] = 5;
  // cout << &arr[0] << endl;
  // arr[0] -> 5
  // &arr[0] -> 0x7ffcc7e6e3c0 or 104 (For Understanding 104 Has Taken)
  // arr -> Base Address -> 0x7ffcc7e6e3c0 or 104
  // cout<<&arr<<endl; -> Base Address -> Because Of Symbol Table
  // cout << arr << endl;
  // int arr[4] = {12, 44, 16, 18};
  // cout << arr << endl;
  // cout << arr[0] << endl;
  // cout << &arr << endl;
  // cout << &arr[0] << endl;

  // int *p = arr;
  // cout << p << endl;
  // cout << &p << endl;
  // cout << *arr << endl;       // 12
  // cout << arr[0] << endl;     // 12
  // cout << *arr + 1 << endl;   // 13
  // cout << *(arr + 1) << endl; // 44
  // cout << arr[1] << endl;     // 44
  // cout << *(arr + 2) << endl; // 16
  // cout << arr[2] << endl;     // 16
  // cout << *(arr + 3) << endl; // 18
  // cout << arr[3] << endl;     // 18

  // How Arr[i] Resolves
  // arr[i] = *(arr + i)
  // i[arr] = *(i + arr)

  // int i = 0;
  // cout << arr[i] << endl;
  // cout << i[arr] << endl;
  // arr = arr + 2; -> Error
  // int *p = arr;
  // p = p + 2; -> Works
  // Through Pointer I Can Show Any Subpart Of Array
  // int arr[10];
  // cout<<sizeof(arr)<<endl; //40
  // int *p = arr;
  // cout<<sizeof(p)<<endl; // 8
  // cout<<sizeof(*p)<<endl; // 4

  // Char Array
  // char ch[10] = "Babbar";
  // char *c = ch;
  // // cout << c << endl; // Babbar
  // // Lets Work
  // cout << ch << endl;     // Babbar
  // cout << &ch << endl;    // 0x7ffcc7e6e3c0
  // cout << ch[0] << endl;  // B
  // cout << &ch[0] << endl; // Babbar

  // cout << &c << endl; // 0x7ffcc7e6e3c0
  // cout << *c << endl; // B
  // cout << c << endl;  // Babbar

  // *c = *(c + 0) -> c[0] -> B
  // char name[9] = "SherBano";
  // char *cptr = &name[0];

  // cout << name << endl;        // SherBano
  // cout << &name << endl;       // 0x7ffcc7e6e3c0
  // cout << *(name + 3) << endl; // r
  // cout << cptr << endl;        // SherBano
  // cout << *cptr << endl;       // S
  // cout << &cptr << endl;       // 0x7ffcc7e6e3c9
  // cout << *(cptr + 3) << endl; // r
  // cout << cptr + 2 << endl;    // erBano
  // cout << *cptr + 2 << endl;   // erBano
  // cout << cptr + 9 << endl;    // Garbage Value
  // cout << *cptr + 9 << endl;   // Garbage Value

  // char ch = 'k';
  // char *cptr2 = &ch;
  // cout << cptr2 << endl; // kGarbage Value

  // char name[10] = "Babbar";
  // cout << name << endl;
  // char *ch = "Babbar";
  // cout << ch << endl; // Babbar

  // Pointer In Function
  // int arr[10] = {1, 2, 3, 4};
  // cout << "Size Of Arr inside Main Function : " << sizeof(arr) << endl;
  // cout << "Arr :" << arr << endl;
  // cout << "&Arr :" << &arr << endl;
  // // Printing Array inside Main
  // for (int i = 0; i < 10; i++) {
  //   cout << arr[i] << " ";
  // }
  // cout << endl;
  // cout << endl << endl << "Now Calling To Solve Function" << endl;
  // solve(arr);
  // cout << "Wapis Main Function Me" << endl;
  // // Printing Array inside Main
  // for (int i = 0; i < 10; i++) {
  //   cout << arr[i] << " ";
  // }
  // Output
  // Size Of Arr inside Main Function : 40
  // Arr :0x7ffc0b76f290
  // &Arr :0x7ffc0b76f290
  // 1 2 3 4 0 0 0 0 0 0

  // Now Calling To Solve Function
  // Size Of Array In Function : 8
  // Arr :0x7ffc0b76f290
  // &Arr :0x7ffc0b76f228 -> New Pointer
  // Wapis Main Function Me
  // 50 2 3 4 0 0 0 0 0 0
  int a = 5;
  cout << "Address of a is : " << &a << endl;
  int *ptr = &a;
  cout << "Address Stored In Ptr Is : " << ptr << endl;
  cout << "Value Stored In Ptr Is : " << *ptr << endl;
  cout << "Address Of Ptr Is : " << &ptr << endl;
  update(ptr);
  cout << "Value Of A :" << a << endl;

  // Output
  // Address of a is : 0x7ffd1a0ec2bc
  // Address Stored In Ptr Is : 0x7ffd1a0ec2bc 
  // Value Stored In Ptr Is : 5
  // Address Of Ptr Is : 0x7ffd1a0ec2b0
  // Inside Update Function
  // Address Stored In p is: 0x7ffd1a0ec2bc
  // Address of p is :0x7ffd1a0ec268
  // Inside Main Function
  // Value Of A :15

  // Point to Note :
  // Address Of ptr != Addres Of p
}