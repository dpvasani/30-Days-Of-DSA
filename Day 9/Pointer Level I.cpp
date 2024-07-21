#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  // Pointer Level I
  // Storage Location -> Address
  // Hiden Data Structure -> Symbol Table
  // int a = 5;
  // Symbol Table -> a -> Address
  // a -> 104 // At Address 104 There is data is 5
  // Symbol Table Stores Mapping
  // Memory Management Is Done By OS
  // We Can Access Memory Using Pointers
  // Address Of Operator -> &

  // Pointer
  // int a = 5;
  // inside of a you can stoe integer type data
  // int *ptr;
  // ptr is a pointer to integer data
  // Poiinter is a data type which holds the address of other data type
  // Pointer is a data type which store only address
  // ptr is variable name
  // Explain Through Example
  // int a = 5;
  // int *ptr = &a; -> ptr is a pointer to a  which contain integer data
  // int is datatype
  // ptr is pointer to integer data
  // * is syntex for pointer creation or dereference Oprator
  // p variable name
  // & address of operator
  // a is variable name
  // (int *) -> Collectively is a pointer to integer data
  // Data_Type *Variable_Name;
  // variable_Name is a pointer to Data_Type
  // int a = 5;
  // // Poniter Creation
  // int *ptr = &a;
  // // Access The value ptr is pointing to
  // // Dereference Operator
  // cout << *ptr << endl;
  // Above Mentioned Is For Understanding puposes
  // Pointer Is Not Data Type
  // Pointer Is Variable Name
  // Pointer In Cpp Is Variable That Store Address Of Another Variable
  // Pointer Through Two Thing You Can Acess
  // 1. Value    cout<<*ptr<<endl;
  // 2. Address  cout<<ptr<<endl;
  // cout<<ptr<<endl; -> ptr Vale Dabbe Me Jo Pada He Uski Bat Ho Rahi He
  // cout<<&ptr<<endl; -> ptr Vale Dabbe ka Address He Yeh

  // Summery
  // *ptr -> Value Stored At Location In Ptr
  // &ptr -> Address Of Ptr
  // &a -> Address Of a
  // ptr -> Value of ptr -> Which Is Addrress Of a

  // Example
  // int a = 5;
  // int *ptr = &a;
  // a[5] -> Address is 104
  // ptr[104] -> Address is 302
  // cout<<a; -> 5
  // cout<<*a; -> Error
  // cout<<&a; -> 104
  // cout<<ptr; -> 104
  // cout<<&ptr; -> 302
  // cout<<*ptr; -> 5

  // Size Of Pointer Will Be Always 8 -> Architecture Dependent
  // System Always Take 8 bite Memory For Pointer
  // 64 Bit Architecture -> 8 Byte
  // int a = 8;
  // int *ptr = &a;
  // cout << sizeof(ptr) << endl;

  // Why Need Of Pointer
  // 1. Dynamic Memory Allocation
  // 2. Memory Management
  // 3. Pointer Arithmetic -> Go From One Location To Another
  // 4. Passed By Reference In Array
  // 5. To Create Pointer To Function -> Passing a Function Inside Function As
  // An Argument

  // Bad Practice
  // int *ptr;            // It Has Some Random Grabag Value
  // cout << ptr << endl; // -> Grabage Value -> Segmenation Fault

  // // Good Practice
  // // NULL Pointer
  // int *p = 0;
  // int *ptr2 = NULL;
  // int *ptr3 = nullptr;
  // All Three Are Same
  // cout << p << endl; // -> Segmentation Fault
  // Segmenation Fault -> When You Access Memory Location Which Is Not Available
  // Or Memory Of Other Which Is Not Allocated To Your Program

  // Pointer Arithmetic
  // int a = 5;
  // int *ptr = &a;
  // a[5] -> Address is 104
  // ptr[104] -> Address is 208
  // a= a+1;
  // ptr = ptr+1; -> 108
  // a1 to a1 + 3 -> Taken By Integer So Next Address Will Be a1+ 4
  // *p= *p+1; -> Value Stored In P(not Address ) Will Be Incremented
  // So if a = 5
  // *p = *p+1; -> 6
  // So Now Value Of a = 6

  // Revision
  // a -> a vala dabba
  // ptr -> ptr vala dabba
  // &a -> a vale dabbe ka address
  // &ptr -> ptr vale dabbe ka address
  // *ptr -> ptr vale dabbe ka value -> ptr vale dabbe me jo location he us
  // location pe jao vaha daba milga us dabbe me jo valu padi he

  // Copy pointer
  // int a = 5;
  // int *ptr = &a;
  // int *dusraPtr = ptr;

  int a = 10;
  int *p = &a;
  int *q = p;
  int *r = q;

  cout << a << endl;                   // 10
  cout << &a << endl;                  // Address Of a
  cout << p << endl;                   // Addre Of a
  cout << &p << endl;                  // Addre Of p
  cout << *p << endl;                  // 10
  cout << q << endl;                   // Addre Of a
  cout << &q << endl;                  // Addre Of q
  cout << *q << endl;                  // 10
  cout << r << endl;                   // Addre Of a
  cout << &r << endl;                  // Addre Of r
  cout << *r << endl;                  // 10
  cout << (*p + *q + *r) << endl;      // 30
  cout << (*p) * 2 + (*r) * 3 << endl; // 50
  cout << (*p) / 2 - (*q) / 2 << endl; // 0

  // Output
  // 10
  // 0x7ffc2482ae5c
  // 0x7ffc2482ae5c
  // 0x7ffc2482ae50
  // 10
  // 0x7ffc2482ae5c
  // 0x7ffc2482ae48
  // 10
  // 0x7ffc2482ae5c
  // 0x7ffc2482ae40
  // 10
  // 30
  // 50
  // 0
}