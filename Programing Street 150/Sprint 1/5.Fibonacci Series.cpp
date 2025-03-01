#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) return 0;  // Handle invalid cases

    int a = 0, b = 1;
    
    cout << a;
      // Print b only if n > 1
    if (n > 1) cout << " " << b;  
  

    for (int i = 2; i < n; i++) {
        int c = a + b;
        cout << " " << c;
        a = b;
        b = c;
    }
    cout << endl; 
    return 0;
}
