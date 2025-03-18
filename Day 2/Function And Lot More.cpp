#include <iostream>
using namespace std;

// Return_Type Function_Name(Parameter_List){
//   // Code

// }

// int main(){
//   // Code
//   // FunctionCall
//   // FunctionName();
// Why Return 0 -> Show Than Our Function Executed Successfully
// return 0;
// }

// Talk About Mindset
// 1. Exploration -> Best Practice
// 2. Spoonfeeding

// Tested
// 1. Redefine is Not Allowed
// 2. Function Overloading is Allowed
// 3. Function Overriding is Allowed
// 4. Passing Parameter in Main FUnction Is nOte Allowed
// 5. In Int Main Function Return Type Should Be Int But Float is Allowed -> No
// Error
// Two Order in Function
// Function Defintion , Declaration and Invocation
// Must Follow this order declaration than invocation Definition
// Or Declaration , Definition , Invocation

// Function declarations
void printName();
void printNumber(int n);
int add(int a, int b);
int findMax(int num1, int num2, int num3);
void printCounting(int n);
char getGrade(int marks);
char getGrade2(int marks);
int getSum(int n);
int getEvenSum(int n);

int main() {
  cout << "Function: Well Defined Task\n";

  // Uncomment the blocks below to test each function

  // Printing "Babbar" n times
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "Babbar" << '\n';
  }

  // Function call
  printName();

  // Pass by value concept
  int a = 5;
  printNumber(a);
  cout << a << '\n';

  // Declaration and definition: add 2 numbers
  int a;
  cin >> a;
  int b;
  cin >> b;
  int sum = add(a, b);
  cout << sum << '\n';

  // Maximum number from 3 numbers
  int a, b, c;
  cin >> a >> b >> c;
  int maxNumber = findMax(a, b, c);
  cout << maxNumber << '\n';

  // Counting from 1 to n
  int n;
  cin >> n;
  printCounting(n);

  // Function of student and grade problem
  int marks;
  cin >> marks;
  char result = getGrade(marks);
  cout << result << '\n';
  char result2 = getGrade2(marks);
  cout << result2 << '\n';

  // Sum of all numbers up to n
  int n;
  cin >> n;
  int ans = getSum(n);
  cout << ans;

  // Sum of even numbers up to n
  int n;
  cin >> n;
  int ans = getEvenSum(n);
  cout << ans;

  return 0;
}

// Function definitions

// Prints "Babbar" n times
void printName() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "Babbar" << '\n';
  }
}

// Prints a number and its incremented value
void printNumber(int n) {
  cout << n << '\n';
  n++;
  cout << n << '\n';
}

// Adds two numbers and returns the result
int add(int a, int b) {
  int result = a + b;
  return result;
}

// Finds and returns the maximum of three numbers
int findMax(int num1, int num2, int num3) {
  if (num1 >= num2 && num1 >= num3)
    return num1;
  if (num2 >= num1 && num2 >= num3)
    return num2;
  else
    return num3;
}

// Prints counting from 1 to n
void printCounting(int n) {
  for (int i = 1; i <= n; i++) {
    cout << i << ' ';
  }
  cout << '\n';
}

// Returns grade based on marks using if-else
char getGrade(int marks) {
  if (marks >= 90)
    return 'A';
  else if (marks >= 80)
    return 'B';
  else if (marks >= 70)
    return 'C';
  else if (marks >= 60)
    return 'D';
  else
    return 'F';
}

// Returns grade based on marks using switch-case
char getGrade2(int marks) {
  switch (marks / 10) {
  case 10:
  case 9:
    return 'A';
  case 8:
    return 'B';
  case 7:
    return 'C';
  case 6:
    return 'D';
  default:
    return 'F';
  }
}

// Calculates the sum of all numbers up to n
int getSum(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
  }
  return sum;
}

// Calculates the sum of all even numbers up to n
int getEvenSum(int n) {
  int sum = 0;
  for (int i = 2; i <= n; i += 2) {
    sum += i;
  }
  return sum;
}

// Function Call Stack
// LIFO -> Last In First Out
// Shows That What are Function Is Active
// Which Function Call Which
// Local Variable of Function
// Return Type of FUnction
// Function Call ->  Function Invocation
// Always First Main Function In Calling Stack -> SO last In Returning Stack
// Main Function Return To Operating System
// Here is the concept of Function Call Stack
// First Make Call in Stack Than Make Returning Stack

