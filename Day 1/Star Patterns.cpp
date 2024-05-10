#include <iostream>
using namespace std;

int main() {

  // Pattern 1
  //     *
  //    ***
  //   *****
  //  *******
  // *********

  // int n = 5;
  // for (int i = 1; i <= n; i++) {
  //     for (int j = 1; j <= n - i; j++) {
  //         cout << " ";
  //     }
  //     for (int k = 1; k <= 2 * i - 1; k++) {
  //         cout << "*";
  //     }
  //     cout << endl;
  // }

  // Pattern 2
  // *********
  //  *******
  //   *****
  //    ***
  //     *

  // int n = 5;
  // for (int i = 1; i <= n; i++) {
  //     for (int j = 1; j < i; j++) {
  //         cout << " ";
  //     }
  //     for (int k = 1; k <= 2 * (n - i + 1) - 1; k++) {
  //         cout << "*";
  //     }
  //     cout << endl;
  // }

  // Pattern 3
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

  // Pattern 4
  //     *
  //    ***
  //   *****
  //  *******
  // *********
  //  *******
  //   *****
  //    ***
  //     *

  // int n = 5;
  // for (int i = 1; i <= n; i++) {
  //     for (int j = 1; j <= n - i; j++) {
  //         cout << " ";
  //     }
  //     for (int k = 1; k <= 2 * i - 1; k++) {
  //         cout << "*";
  //     }
  //     cout << endl;
  // }
  // for (int i = n - 1; i >= 1; i--) {
  //     for (int j = 1; j <= n - i; j++) {
  //         cout << " ";
  //     }
  //     for (int k = 1; k <= 2 * i - 1; k++) {
  //         cout << "*";
  //     }
  //     cout << endl;
  // }

  // Pattern 5
  // *
  // **
  // ***
  // ****
  // *****

  // int n = 5;
  // for (int i = 1; i <= n; i++) {
  //     for (int j = 1; j <= i; j++) {
  //         cout << "*";
  //     }
  //     cout << endl;
  // }

  // Pattern 6
  // *****
  // ****
  // ***
  // **
  // *

  // int n = 5;
  // for (int i = n; i >= 1; i--) {
  //     for (int j = 1; j <= i; j++) {
  //         cout << "*";
  //     }
  //     cout << endl;
  // }

  // Pattern 7
  //     *
  //    **
  //   ***
  //  ****
  // *****

  // int n = 5;
  // for (int i = 1; i <= n; i++) {
  //     for (int j = 1; j <= n - i; j++) {
  //         cout << " ";
  //     }
  //     for (int k = 1; k <= i; k++) {
  //         cout << "*";
  //     }
  //     cout << endl;
  // }

  // Pattern 8
  // *****
  //  ****
  //   ***
  //    **
  //     *

  // int n = 5;
  // for (int i = 1; i <= n; i++) {
  //     for (int j = 1; j < i; j++) {
  //         cout << " ";
  //     }
  //     for (int k = 1; k <= n - i + 1; k++) {
  //         cout << "*";
  //     }
  //     cout << endl;
  // }

  // Pattern 9
  //      *
  //     * *
  //    *   *
  //   *     *
  //  *       *
  //   *     *
  //    *   *
  //     * *
  //      *

  // int n = 5;
  // for (int i = 1; i <= n; i++) {
  //     for (int j = 1; j <= n - i; j++) {
  //         cout << " ";
  //     }
  //     cout << "*";
  //     if (i > 1) {
  //         for (int k = 1; k <= 2 * (i - 1) - 1; k++) {
  //             cout << " ";
  //         }
  //         cout << "*";
  //     }
  //     cout << endl;
  // }
  // for (int i = n - 1; i >= 1; i--) {
  //     for (int j = 1; j <= n - i; j++) {
  //         cout << " ";
  //     }
  //     cout << "*";
  //     if (i > 1) {
  //         for (int k = 1; k <= 2 * (i - 1) - 1; k++) {
  //             cout << " ";
  //         }
  //         cout << "*";
  //     }
  //     cout << endl;
  // }

  return 0;
}