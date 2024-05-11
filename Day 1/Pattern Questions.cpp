#include <iostream>
using namespace std;

int main() {

  // Why pattern Question
  // 1. Logic Building
  // 2. Pattern Building
  // 3. Loop Practice

  // Pattern Secrets To Crack It

  // 1. Row Observation
  // 2. Column Observation
  // Code : Nested Loop - 2 or Multiple Loop Required
  // Outer Loop - Row
  // Inner Loop - Column

  // Odd Number = 2*n-1 or 2*n+1
  // Even Number = 2*n
  // k =1,2,3,4,5,6,7,8,9,10,.....,k
  // k = 0, 1,2,3,4,5,6,7,8,9,10,.., k-1

  // Cursor Is move from left to right than new line so use loop accordingly

  //           Col 0    Col 1    Col 2    Col 3    Col 4
  // Row 0        *       *       *       *       *
  // Row 1        *       *       *       *       *
  // Row 2        *       *       *       *       *
  // Row 3        *       *       *       *       *
  // Row 4        *       *       *       *       *
  // Row 5        *       *       *       *       *

  // Pattern 1 : Solid Rectangle
  // * * * * *
  // * * * * *
  // * * * * *
  // Outer Loop For Row
  // for (int i = 0; i < 3; i++) {
  //   // Inner Loop For Column
  //   for (int j = 0; j < 5; j++) {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // Pattern 2 : Square Pattern
  // * * * * *
  // * * * * *
  // * * * * *
  // * * * * *
  // * * * * *
  // for (int i = 0; i < 5; i++) {
  //   for (int j = 0; j < 5; j++) {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // Pattern 3 : Hollow Rectangle
  // * * * * *
  // *       *
  // * * * * *

  // for (int i = 0; i < 3; i++) {
  //   if (i == 0 || i == 2) {
  //     // First row Or Last Row 5 Star Print
  //     for (int j = 0; j < 5; j++) {
  //       cout << "*";
  //     }
  //   } else {
  //     // Remaining Middle Row
  //     cout << "*";
  //     // Space Print
  //     for (int i = 0; i < 3; i++) {
  //       cout << " ";
  //     }
  //     // Last Star
  //     cout << "*";
  //   }
  //   cout << endl;
  // }

  // Generic Version
  // int rows, cols;
  // cin >> rows;
  // cin >> cols;

  // for (int i = 0; i < rows; i++) {
  //     if (i == 0 || i == rows - 1) {
  //         // First row or last row: print '*' for the entire row
  //         for (int j = 0; j < cols; j++) {
  //             cout << "*";
  //         }
  //     } else {
  //         // Middle rows: print '*' only at the beginning and end of the row
  //         cout << "*";
  //         // Print spaces between the '*' at the beginning and end
  //         for (int k = 0; k < cols - 2; k++) {
  //             cout << " ";
  //         }
  //         cout << "*";
  //     }
  //     cout << endl;
  // }

  // Pattern 4 : Half Pyramid
  // *     Row 0 = Star 1
  // * *   Row 1 = Star 2
  // * * * Row 2 = Star 3
  // * * * * Row 3 = Star 4
  // * * * * * Row 4 = Star 5
  // * * * * * * Row 5 = Star 6
  // * * * * * * * Row 6 = Star 7  Star=Row+1
  // int n;
  // cin >> n;
  // for (int row = 0; row < n; row++) {
  //   for (int col = 0; col < row + 1; col++) {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // Pattern 5 : Inverted Half Pyramid
  // * * * * * * * Row 0 = Star 7
  // * * * * * * Row 1 = Star 6
  // * * * * * Row 2 = Star 5
  // * * * * Row 3 = Star 4
  // * * * Row 4 = Star 3
  // * * Row 5 = Star 2
  // * Row 6 = Star 1    col < n - row
  // int n;
  // cin >> n;
  // for (int row = 0; row < n; row++) {
  //   for (int col = 0; col < n - row; col++) {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // Pattern 6 : Numeric Half Pyramid
  // 1  Row + 1 = Count    Print=Col + 1
  // 1 2  Row + 1 = Count
  // 1 2 3  Row + 1 = Count
  // 1 2 3 4  Row + 1 = Count
  // 1 2 3 4 5  Row + 1 = Count
  // 1 2 3 4 5 6  Row + 1 = Count
  // int n;
  // cin >> n;
  // for (int row = 0; row < n; row++) {
  //   for (int col = 0; col < row + 1; col++) {
  //     cout << col + 1 << " ";
  //   }
  //   cout << endl;
  // }

  // Pattern 7 : Inverted Numeric Half Pyramid
  // 1 2 3 4 5 6  Row + 1 = Count
  // 1 2 3 4 5  Row + 1 = Count
  // 1 2 3 4  Row + 1 = Count
  // 1 2 3  Row + 1 = Count
  // 1 2  Row + 1 = Count
  // 1 Row + 1 = Count
  // int n;
  // cin >> n;
  // for (int row = 0; row < n; row++) {
  //     for (int col = 1; col <= n - row; col++) {
  //         cout << col << " ";
  //     }
  //     cout << endl;
  // }

  // Pattern 8 : Full Pyramid
  //     *
  //    * *
  //   * * *
  //  * * * *
  // * * * * *
  // int n;
  // cin >> n;
  // for (int row = 0; row < n; row++) {
  //     // Space Print
  //     for (int col = 0; col < n - row - 1; col++) {
  //         cout << " ";
  //     }
  //     // Star Print
  //     for (int col = 0; col <= row; col++) {
  //         cout << "* ";
  //     }
  //     cout << endl; // Move to the next line after printing each row
  // }

  // Pattern 9 : Inverted Full Pyramid
  // * * * * * * Row 0 = Star 7
  //  * * * * *  Row 1 = Star 6
  //   * * * *   Row 2 = Star 5
  //    * * *    Row 3 = Star 4
  //     * *     Row 4 = Star 3
  //      *      Row 5 = Star 2
  // int n;
  // cin >> n;
  // for (int row = 0; row < n; row++) {
  //     // Space Print
  //     for (int col = 0; col < row; col++) {
  //         cout << " ";
  //     }
  //     // Star Print
  //     for (int col = 0; col < n - row; col++) {
  //         cout << "* ";
  //     }
  //     cout << endl; // Move to the next line after printing each row
  // }

  // Pattern 10 : Hollow Inverted Half Pyramid
  // * * * * * *
  // *       *
  // *     *
  // *   *
  // * *
  // *

  // int n;
  // cin >> n;
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < n - i; j++) {
  //     if ((i == 0 || j == 0 || j == n - i - 1)) {
  //       cout << "*";
  //     } else {
  //       cout << " ";
  //     }
  //   }
  //   cout << endl;
  // }

  // Pattern 11 : Hollow Full Pyramid
  //     *
  //    * *
  //   *   *
  //  *     *
  // * * * * *

  // int rows;
  // cin >> rows;
  // for (int i = 1; i <= rows; i++) {
  //     string pattern = "";
  //     for (int j = 1; j <= rows - i; j++) {
  //         pattern += " ";
  //     }
  //     for (int k = 1; k <= (2 * i - 1); k++) {
  //         if (k == 1 || k == (2 * i - 1) || i == rows) {
  //             pattern += "*";
  //         } else {
  //             pattern += " ";
  //         }
  //     }
  //     cout << pattern << endl;
  // }

  // Pattern 12 : Full Pyramid
  //       *
  //      ***
  //     *****
  //    *******
  //   *********
  //  ***********
  // *************
  // N*(2N-1)    j<N-i-1 => Print Space
  // i=0 5space , 1 star , 5 space
  // i=1 4space , 3 star , 4 space
  // i=2 3space , 5 star , 3 space
  // i=3 2space , 7 star , 2 space
  // i=4 1space , 9 star , 1 space
  // i=5 0space , 11 star , 0 space

  // int rows;
  // cin >> rows;
  // for (int i = 1; i <= rows; i++) {
  //     string pattern = "";
  //     for (int j = 1; j <= rows - i; j++) {
  //         pattern += " ";
  //     }
  //     for (int k = 1; k <= 2 * i - 1; k++) {
  //         pattern += "*";
  //     }
  //     cout << pattern << endl;
  // }

  // First Make Grid Than Make Pattern
  // int n;
  // cin >> n;
  // for (int i = 0; i < n; i++) {
  //   int k = 0;
  //   for (int j = 0; j < ((2 * n) - 1); j++) {
  //     if (j < n - 1 - i || j > n - 1 + i) {
  //       cout << " ";
  //     } else if (k < 2 * i + 1) {
  //       cout << "*";
  //     }
  //   }
  //   cout << endl;
  // }

  // Pattern 13 : Hollow Full Pyramid
  //       *
  //      * *
  //     *   *
  //    *     *
  //   *       *
  //  * * * * * *

  // int n;
  // cin >> n;
  // for (int i = 0; i < n; i++) {
  //   int k = 0;
  //   for (int j = 0; j < ((2 * n) - 1); j++) {
  //     if (j < n - 1 - i || j > n - 1 + i) {
  //       cout << " ";
  //     } else {
  //       if (k == 0 || k == 2 * i || i == n - 1) {
  //         cout << "*";
  //       } else {
  //         cout << " ";
  //       }
  //       k++;
  //     }
  //   }
  //   cout << endl;
  // }

  // Pattern 14 : Full Pyramid
  //       *
  //      * *
  //     * * *
  //    * * * *
  //   * * * * *
  //  * * * * * *
  // * * * * * * *
  // Observation Space = n- row -1
  // Outer Loop For Row
  // space = n-1= n-row-1
  // int n;
  // cin >> n;
  // for (int row = 0; row < n; row++) {
  //   // Space Print
  //   for (int col = 0; col < n - row - 1; col++) {
  //     cout << " ";
  //   }
  //   // Star Print
  //   for (int col = 0; col < row + 1; col++) {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // Pattern 15 : Inverted Full Pyramid
  // * * * * * * *
  //  * * * * * *
  //   * * * * *
  //    * * * *
  //     * * *
  //      * *
  //       *
  // int n;
  // cin >> n;
  // for (int row = 0; row < n; row++) {
  //   // Space Print
  //   for (int col = 0; col < row; col++) {
  //     cout << " ";
  //   }
  //   // Star Print
  //   for (int col = 0; col < n - row; col++) {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // Pattern 16 : Diamond Pyramid

  //     *
  //    * *
  //   * * *
  //  * * * *
  // * * * * *
  //  * * * *
  //   * * *
  //    * *
  //     *

  // int n;
  // cin >> n;
  // for (int row = 0; row < n; row++) {
  //   // Space Print
  //   for (int col = 0; col < n - row - 1; col++) {
  //     cout << " ";
  //   }
  //   // Star Print
  //   for (int col = 0; col < row + 1; col++) {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }
  // for (int row = 0; row < n; row++) {
  //   // Space Print
  //   for (int col = 0; col < row; col++) {
  //     cout << " ";
  //   }
  //   // Star Print
  //   for (int col = 0; col < n - row; col++) {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // Pattern 17 : Hollow Diamond
  //     *           First Space Than Star
  //    * *
  //   *   *
  //  *     *
  // *       *
  // ---------->  Break Down In 2 Piece
  // *       *
  //  *     *
  //   *   *
  //    * *
  //     *
  // row 0        Space 3   n-1 -> n-[row + 1] -> n-row-1 -> Space
  // row 1        Space 2
  // row 1        space 2
  // row 2        Space 1
  // row 3        Space 0

  // int n;
  // cin >> n;

  // // Part 1
  // for (int row = 0; row < n; row++) {
  //   // Space
  //   for (int col = 0; col < n - row - 1; col++) {
  //     cout << " ";
  //   }
  //   // Star
  //   // Character Printing
  //   for (int col = 0; col < 2 * row + 1; col++) {
  //     // If first or last character then star, otherwise space
  //     if (col == 0 || col == 2 * row) {
  //       cout << "*";
  //     } else {
  //       cout << " ";
  //     }
  //   }
  //   cout << endl;
  // }

  // // Second Part
  // // 2n-1= 2*n-[2row+1]= 2n-2row-1
  // for (int row = 0; row < n; row++) {
  //   // Space
  //   for (int col = 0; col < row; col++) {
  //     cout << " ";
  //   }
  //   // Star
  //   for (int col = 0; col < 2 * n - 2 * row - 1; col++) {
  //     // If first or last character then star, otherwise space
  //     if (col == 0 || col == 2 * n - 2 * row - 2) {
  //       cout << "*";
  //     } else {
  //       cout << " ";
  //     }
  //   }
  //   cout << endl;
  // }

  // Pattern 18 : Flipped Solid Diamond

  // Devide in to 2 part  upper and lower
  // Upper Part
  // Half Pyramid than Space Full pyramid than halft pyramid

  // **********
  // ****  ****
  // ***    ***
  // **      **
  // *        *
  // **      **
  // ***    ***
  // ****  ****
  // **********

  // int n = 5;
  // for (int i = 1; i <= n; i++) {
  //     for (int j = 1; j <= n - i; j++) {
  //         cout << "*";
  //     }
  //     for (int k = 1; k <= 2 * i - 1; k++) {
  //         cout << " ";
  //     }
  //     for (int l = 1; l <= n - i; l++) {
  //         cout << "*";
  //     }
  //     cout << endl;
  // }
  // for (int i = n - 1; i >= 1; i--) {
  //     for (int j = 1; j <= n - i; j++) {
  //         cout << "*";
  //     }
  //     for (int k = 1; k <= 2 * i - 1; k++) {
  //         cout << " ";
  //     }
  //     for (int l = 1; l <= n - i; l++) {
  //         cout << "*";
  //     }
  //     cout << endl;
  // }

  // Pattern 19 : Alphabet Pattern

  // A
  // ABA
  // ABCBA
  // ABCDCBA
  // ABCDEDCBA

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row++){
  //   for(int col=0;col<row+1;col++){
  //     int ans=col+1;
  //     char ch=ans+'A'-1;
  //     cout<<ch;
  //   }
  //   // Reverse Counting
  //   for(int col=row;col>=1;col--){
  //     int ans = col;
  //     char ch = ans + 'A' - 1;
  //     cout<<ch;
  //   }
  //   cout<<endl;
  // }

  // Pattern 20 (Fancy Pattern #2)
  // Input: 5
  // 1*2*3*4*5
  // 5*4*3*2*1
  // 55*4*3*2
  // 544*3*2
  // 5433*2
  // 54322

  // int n;
  // cin>>n;
  // // upper half
  // for(int i=0; i<n; i++){
  //     for(int j=0; j<i+1; j++){
  //         cout<<i+1;
  //         // * not print for last char
  //         if(j!=i){
  //             cout<<'*';
  //         }
  //     }
  //     cout<<'\n';
  // }
  // // lower half
  // for(int i=0; i<n; i++){
  //     for(int j=0; j<n-i; j++){
  //         cout<<n-i;
  //         // * not print for last char
  //         if(j!=n-i-1){
  //             cout<<'*';
  //         }
  //     }
  //     cout<<'\n';
  // }

  // Pattern 21 : Nmeric Full Pyramind
  //               1
  //             2 3 2
  //           3 4 5 4 3
  //         4 5 6 7 6 5 4
  //       5 6 7 8 9 8 7 6 5

  // int n;
  // cin >> n;

  // for (int row = 0; row < n; row++) {
  //   // Spaces
  //   for (int col = 0; col < n - row - 1; col++) {
  //     cout << " ";
  //   }

  //   // Number
  //   for (int col = 0; col < row + 1; col = col + 1) {
  //     cout << row + col + 1;
  //   }

  //   // Reverse Counting
  //   int start = 2 * row;
  //   for (int col = 0; col < row; col++) {
  //     cout << start;
  //     start = start - 1;
  //   }
  //   cout << endl;
  // }

  // Pattern 22 : Numeric Hollow Pyramid
  //          1
  //         1 2
  //        1   3
  //       1      4
  //      1  2 3 4 5

  // int n;
  // cin >> n;
  // for (int row = 0; row < n; row++) {
  //   // Space
  //   for (int col = 0; col < n - row - 1; col++) {
  //     cout << " ";
  //   }
  //   // Number  With Spaces In Between
  //   int start = 1;
  //   for (int col = 0; col < 2 * row + 1; col++) {
  //     // First Row Or Last Row
  //     if (row == 0 || row == n - 1) {
  //       if (col % 2 == 0) {
  //         cout << start;
  //         start++;
  //       } else {
  //         // Space Odd
  //         cout << " ";
  //       }
  //     } else {
  //       // First And Last Col
  //       if (col == 0) {
  //         cout << 1;
  //       } else if (col == 2 * row) {
  //         cout << row + 1;
  //       } else {
  //         cout << " ";
  //       }
  //     }
  //   }
  //   cout << endl;
  // }

  // Pattern 23 : Numeric Hollow Harlf Pyramid
  // 1
  // 1 2
  // 1   3
  // 1     4
  // 1 2 3 4 5

  // int n;
  // cin >> n;
  // for (int row = 0; row < n; row++) {

  //   // Number  With Spaces In Between
  //   int start = 1;
  //   for (int col = 0; col < 2 * row + 1; col++) {
  //     // First Row Or Last Row
  //     if (row == 0 || row == n - 1) {
  //       if (col % 2 == 0) {
  //         cout << start;
  //         start++;
  //       } else {
  //         // Space Odd
  //         cout << " ";
  //       }
  //     } else {
  //       // First And Last Col
  //       if (col == 0) {
  //         cout << 1;
  //       } else if (col == 2 * row) {
  //         cout << row + 1;
  //       } else {
  //         cout << " ";
  //       }
  //     }
  //   }
  //   cout << endl;
  // }

  // Method 2
  // int n;
  // cin >> n;
  // for (int row = 0; row < n; row++) {
  //   for (int col = 0; col <= row; col++) {
  //     if (col == 0 || col == row || row == n - 1) {
  //       cout << col + 1;
  //     } else {
  //       cout << " ";
  //     }
  //   }
  //   cout << endl;
  // }

  // Pattern 24 : Numeric Hollow Inverted Half Pyramid
  // 1 2 3 4 5
  // 2     5
  // 3    5
  // 4   5
  // 5 5

  // int n;
  // cin >> n;
  // for (int i = 0; i < n; i++) {
  //   for (int j = i + 1; j <= n; j++) {
  //     if (j == i + 1 || j == n || i == 0) {
  //       cout << j;
  //     } else {
  //       cout << " ";
  //     }
  //   }
  //   cout << endl;
  // }

  // Pattern 25 : Numeric Palindrome Equilateral Pyramid

  //          1
  //         121
  //        12321
  //       1234321
  //      123454321

  // int n;
  // cin>>n;
  // for (int i = 1; i <= n; ++i) {
  //     // Print spaces to align the numbers to the right
  //     for (int j = 1; j <= n - i; ++j) {
  //         cout << " ";
  //     }

  //     // Print the first half of the numbers in ascending order
  //     for (int j = 1; j <= i; ++j) {
  //         cout << j;
  //     }

  //     // Print the second half of the numbers in descending order
  //     for (int j = i - 1; j >= 1; --j) {
  //         cout << j;
  //     }

  //     cout << endl;
  // }

  // Pattern 26 : Solid Half Dimond
  // *
  // * *
  // * * *
  // * * * *
  // * * * * *
  // * * * *
  // * * *
  // * *
  // *

  // i 2n-1
  // j= n-1
  // int row;
  // cin >> row;
  // for (int i = 1; i <= rows; i++) {
  //   // Loop to print '*' in each row
  //   for (int j = 1; j <= i; j++) {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }
  // // Loop to print remaining rows in reverse order
  // for (int i = rows - 1; i >= 1; i--) {
  //   // Loop to print '*' in each row
  //   for (int j = 1; j <= i; j++) {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // int n;
  // cin >> n;
  // for (int i = 0; i < 2 * n - 1; i++) {
  //   int cond = 0;
  //   if (i < n) {
  //     // Growing Phase Of Dimond
  //     cond = i;
  //   } else {
  //     // Shrinking Phase Of Dimond
  //     cond = n - (i % n) - 2;
  //   }
  //   for (int j = 0; j <= cond; j++) {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // Pattern 27 : Fancy Pattern #2
  // ********1********
  // *******2*2*******
  // ******3*3*3******
  // *****4*4*4*4*****
  // ****5*5*5*5*5****
  // ***6*6*6*6*6*6***
  // **7*7*7*7*7*7*7**
  // *8*8*8*8*8*8*8*8*

  // Specific Pattern Work Till N = 9

  // int n;
  // cin >> n;
  // for (int i = 0; i < n; i++) {
  //   int start = 8 - i;
  //   int num = i + 1;
  //   int count_num = num;
  //   for (int j = 0; j < 17; j++) {
  //     if (j == start && count_num > 0) {
  //       cout << num;
  //       start += 2;
  //       count_num--;
  //     } else {
  //       cout << "*";
  //     }
  //   }
  //   cout << endl;
  // }

  // Pattern 28 : Fency Pattern #3

  // 1
  // 2*3
  // 4*5*6
  // 7*8*9*10
  // 7*8*9*10
  // 4*5*6
  // 2*3
  // 1

  // int n;
  // cin >> n;
  // int c = 1;
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < i + 1; j++) {
  //     cout << c;
  //     c++;
  //     if (j < i) {
  //       cout << "*";
  //     }
  //   }
  //   cout << endl;
  // }
  // // Shrinking Phase
  // int start = c - n;
  // for (int i = 0; i < n; i++) {
  //   int k = start;
  //   for (int j = 0; j <= n - i - 1; j++) {
  //     cout << k;
  //     k++;
  //     if (j < n - i - 1) { // corrected the condition
  //       cout << "*";
  //     }
  //   }
  //   start = k;
  //   cout << endl;
  // }

  // Pattern 29 : Fency Pattren #4

  // 1
  // 121
  // 12321
  // 121
  // 1

  // int n;
  // cin >> n;
  // for (int i = 0; i < n; i++) {
  //   int cond = i <= n / 2 ? 2 * i : 2 * (n - i - 1);
  //   for (int j = 0; j <= cond; j++) {
  //     if (j <= cond / 2) {
  //       cout << j + 1;
  //     } else {
  //       cout << cond - j + 1;
  //     }
  //   }
  //   cout << endl;
  // }

  // Patter 30 : Floyd's triangle

  // 1
  // 2 3
  // 4 5 6
  // 7 8 9 10
  // 11 12 13 14 15
  // 16 17 18 19 20 21
  // 22 23 24 25 26 27 28

  // int n;
  // cin >> n;
  // int c = 1;
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j <= i; j++) {
  //     cout << c << " ";
  //     c++;
  //   }
  //   cout << endl;
  // }

  // Pattern 31 : Pascal's Triangle
  // 1
  // 1 1
  // 1 2 1
  // 1 3 3 1
  // 1 4 6 4 1
  // 1 5 10 10 5 1
  // int n;
  // cin >> n;
  // for (int i = 1; i <= n; i++) {
  //   int C = 1;
  //   for (int j = 1; j <= i; j++) {
  //     cout << C << " ";
  //     C = C * (i - j) / j;
  //   }
  //   cout << endl;
  // }

  // Pattern 32 : Butterfly Pattern
  // *        *
  // **      **
  // ***    ***
  // ****  ****
  // **********
  // **********
  // ****  ****
  // ***    ***
  // **      **
  // *        *

  // int n;
  // cin >> n;
  // for (int i = 0; i < 2 * n; i++) {
  //   int cond = i < n ? i : n + (n - i - 1);
  //   int space_count = i < n ? 2 * (n - cond - 1) : i - cond - 1;
  //   for (int j = 0; j < 2 * n; j++) {
  //     if (j <= cond) {
  //       cout << "*";
  //     } else if (space_count > 0) {
  //       cout << " ";
  //       space_count--;
  //     } else {
  //       cout << "*";
  //     }
  //   }
  //   cout << endl;
  // }

  return 0;
}