#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
using namespace std;

bool compareString(string a, string b) {
  if (a.length() != b.length()) {
    return false;
  } else {
    int j = 0;
    for (int i = 0; i < a.length(); i++) {
      if (a[i] != b[j]) {
        return false;
      } else {
        j++;
      }
    }
  }
  return true;
}

void convertIntoUpperCase(char arr[]) {
  int n = strlen(arr);
  for (int i = 0; i < n; i++) {
    arr[i] = arr[i] - 'a' + 'A';
  }
}

void convertIntoLowerCase(char arr[]) {
  int n = strlen(arr);
  for (int i = 0; i < n; i++) {
    arr[i] = arr[i] - 'A' + 'a';
    //   - 65 + 97
  }
}

int getLenth(char name[]) {
  // Jab Tak -> While Loop chalega
  int lenth = 0;
  while (name[lenth] != '\0') {
    lenth++;
  }
  return lenth;
}

int reverseCharArray(char name[]) {
  // Array Passed By Reference
  // All Changes made Will Sustain In Main Function Also
  int i = 0;
  int n = getLenth(name);
  int j = n - 1;
  while (i <= j) {
    swap(name[i], name[j]);
    i++;
    j--;
  }

  // Using For Loop
  // for (; i <= j; i++, j--) {
  //   swap(name[i], name[j]);
  // }
  return -1;
}
void replaceSpcae(char sentence[]) {
  int i = 0;
  int n = strlen(sentence);
  for (; i < n; i++) {
    if (sentence[i] == ' ') {
      sentence[i] = '@';
    } else {
      continue;
    }
  }
}
int main() {
  // Character Array
  // Array Is Data Structure -> Shows Structure Of Data
  // Int Is Data Type -> Shows Type Of Data
  // Character Array -> Data Structure
  // When We Take Whole String As Input By Default It Take Null Character At The
  // End Of Array "\0" Array LookLike Darshan\0 Null Character Is Not Printed To
  // Print Null Character We Use "\0" Null Character Used To Show Termination Of
  // Array 0 ascii value => Null Character Cin -> Keyword -> Its Read Your Input
  // Till Space Example -> Input Is -> Darshan Vasani Cin Wll Only Take Input ->
  // Darshan Cin Take Input Tiil -> Space && Tab && \n && Enter For Take Whole
  // Line WIth Space Input -> cin.getline(arr,50); Here 50 Is Max Length Where
  // It Take Stop For Input -> By Default Its Stop Taking Input When -> Enter We
  // Can Set Out Delimeter -> By Default It Enter -> Where Input Taking Is
  // Stopped
  // char ch[100];
  // cout << "Enter Your Name : " << endl;
  // cin >> ch;
  // cout << "You Name Is : " << ch << endl;
  // In Character Array We Can Take Singal Singal Element As Input Or We Can
  // take Whole String As Input In Character Array We Can't Take Space As Input
  // Singal Singal Character As Input Same As Integer

  // Lenth Of String
  // char name[100];
  // cin >> name;
  // cout << "Lenth Of String Is : " << getLenth(name) << endl;
  // cout << "Lenth Of String Is : " << strlen(name) << endl;

  // Reverse String
  // Swap Two Pointer Approach

  // cout << "Initially Array : " << name << endl;
  // reverseCharArray(name);
  // cout << "After Reverse Array : " << name << endl;

  // Replace All Spaces
  // char sentence[100];
  // cin.getline(sentence, 100);
  // cout << "Initially Sentence : " << sentence << endl;
  // replaceSpcae(sentence);
  // cout << "After Replace Space : " << sentence << endl;

  // Convert Its Upper Case
  // char arr[100] = "darshan";
  // convertIntoUpperCase(arr);
  // cout << "Converted String Is : " << arr << endl;

  // // Convert Its Lower Case
  // char arr1[100] = "DARSHAN";
  // convertIntoLowerCase(arr1);
  // cout << "Converted String Is : " << arr1 << endl;

  // Difference Between Character Array And String
  // In C++, char arrays and std::string objects are both used to store and
  // manipulate strings, but they have some significant differences:

  // char Array
  // Type: A char array is a sequence of characters, typically used in C-style
  // string handling. Null Terminator: It relies on a null terminator (\0) to
  // mark the end of the string. Fixed Size: The size of a char array is fixed
  // at the time of declaration and cannot be changed. Manual Memory Management:
  // If dynamically allocated, you need to manually manage the memory (using new
  // and delete). Functionality: Limited built-in functionality; requires
  // functions from the <cstring> library for operations like concatenation,
  // comparison, and length calculation.string

  // String
  // Type: std::string is a part of the C++ Standard Library and provides an
  // abstraction over character arrays. Dynamic Size: It automatically manages
  // its size and can grow or shrink as needed. Automatic Memory Management: It
  // handles memory allocation and deallocation automatically. Rich
  // Functionality: Offers a wide range of member functions for various
  // operations (e.g., concatenation, comparison, substring extraction,
  // searching, etc.). Safety: Less prone to errors like buffer overflow since
  // it manages its own memory

  // Key Differences
  // Memory Management: char arrays require manual management, whereas
  // std::string handles it automatically. Size: char arrays have a fixed size,
  // while std::string can dynamically resize. Functionality: std::string offers
  // extensive built-in functions for string manipulation. Safety: std::string
  // is generally safer and easier to use, reducing the risk of common errors
  // such as buffer overflows. Null Terminator: char arrays use a null
  // terminator to signify the end of the string, whereas std::string manages
  // its own internal representation.

  // Strings In C++
  // Sequence Of Characters
  // Char Array -> Is Collection Of Characters
  // Char Array Is Data Strucrure Of Data Character Type
  // String Is Data Type Of Data
  // In Sting Termination Is Using Null Character
  // Kind Of Vector -> Not Exacly But Its Similar
  // String Is Array Of Characters

  // For Reference 1 : https://cplusplus.com/reference/string/string/
  // For Reference 2 : https://en.cppreference.com/w/cpp/string/basic_string
  // string str;
  // getline(cin, str);
  // cout << str;

  // String Comparision
  // In Ready Made Function Of String Comparison Happened For ASCII value
  string a = "Love";
  string b = "Love";
  cout << "Comparision Of String : " << compareString(a, b) << endl;

  return 0;
}