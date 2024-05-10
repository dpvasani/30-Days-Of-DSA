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

  int n;
  cin >> n;

  for (int row = 0; row < n; row++) {
    // Spaces
    for (int col = 0; col < n - row - 1; col++) {
      cout << " ";
    }

    // Number
    for (int col = 0; col < row + 1; col = col + 1) {
      cout << row + col + 1;
    }

    // Reverse Counting
    int start = 2 * row;
    for (int col = 0; col < row; col++) {
      cout << start;
      start = start - 1;
    }
    cout << endl;
  }

  return 0;
}