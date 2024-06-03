#include <cmath>
#include <iostream>
using namespace std;

int DecimalToBinary(int n) {
  int binarynum = 0;
  int i = 0;
  while (n > 0) {
    int bit = n % 2;
    binarynum = bit * pow(10, i++) + binarynum;
    n = n / 2;
  }
  return binarynum;
}

int DecimalToBinaryBitwise(int n) {
  int binarynum = 0;
  int i = 0;
  while (n > 0) {
    int bit = (n & 1);
    binarynum = bit * pow(10, i++) + binarynum;
    n = n >> 1;
  }
  return binarynum;
}

int BinaryToDecimal(int n){
  int decimal = 0;
  // Multiple each digit with its place value
  // Add up all place value
  // Sum is the decimal Number
  int i =0;
  while(n>0){
    int bit = n%10;
    decimal = decimal + bit * pow(2,i++);
    n /=10;
    
  }



  return decimal;
}

int main() {

  // Decimal -  Base 10
  // Binary - Base 2
  // Everything Stored in Binary
  // Decimal To Binary
  // Divison Method
  // 1. Divide by 2
  // 2. Keep the remainder
  // 3. Repeat until the number is 0
  // 4. Read the remainders in reverse order

  // Lets Take Example
  //  10 / 2 = 5 R 0
  //  5 / 2 = 2 R 1
  //  2 / 2 = 1 R 0
  //  1 / 2 = 0 R 1
  //   1010 ->  10 Stored In Binary

  // Bitwise And Method
  // Obtain Bit With Bitwise & And  i.e. N&1.
  // RIght SHift N By 1 N=N>>1
  // Repeat Above Step till N > 0
  // Reverse Bit SO Obtained

  int n;
  cin >> n;
  int binary = DecimalToBinary(n);
  cout << binary << endl;
  return 0;
}
