#include <iostream>
using namespace std;

// Return_Type Function_Name(Parameter_List){
//   // Code

// }

// int main(){
//   // Code
//   // FunctionCall
//   // FunctionName();
// Why Return 0 -> Show Than Our Function Exceuted Successfully
// return 0;
// }

// Talk ABout Mindset
// 1. Exploration -> Best Practice
// 2. Spoonfeeding

// Tested
// 1. Redefine is Not Allowed
// 2. Function Overloading is Allowed
// 3. Function Overriding is Allowed
// 4. Passing Perameter in Main FUnction Is nOte Allowed
// 5. In Int Main Function Retuen Type Should Be Int But Float is Allowed -> No
// Error
// Two Oder in Function
// Function Defination , Declaration and Involkation
// Must Follow this order declaration than involkation Definition
// Or Declaration , Definition , Involkation

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
// LIFO -> Last In FIrst Out
// Shows That What are Function Is Active
// Which Function Call Which
// Local Variable of Function
// Return Type of FUnction
// Function Call ->  Function Involk
// Always First Main Function In Calling Stack -> SO last In Returning Stack
// Main Functiion Return To Operating System
// Here is the concept of Function Call Stack
// First Make Callinf Stack Than Make Returning Stack

## #Function Call Stack in C++

    The function call stack,
    also known as the call stack,
    is a special type of data structure that stores information about the active
            subroutines or
        functions in a computer program.When a function is called,
    an activation
    record(also known as a stack frame) is pushed onto the call stack,
    which includes information like the return address, parameters,
    and local variables.When the function returns,
    its activation record is popped off the stack.

    ## #Example and Explanation

    Let's take an example where we have multiple function calls to understand how the function call stack works.

#include <iostream>
    using namespace std;

void functionC() { cout << "Inside functionC" << endl; }

void functionB() {
  cout << "Inside functionB" << endl;
  functionC();
}

void functionA() {
  cout << "Inside functionA" << endl;
  functionB();
}

int main() {
  cout << "Inside main" << endl;
  functionA();
  return 0;
}

Step-by-Step Function Call Stack

1. `main` Function Call:
   - The program starts executing from the `main` function.
   - The stack frame for `main` is pushed onto the stack.


    | main        |
    |-------------|


2. Calling `functionA` from `main`:
   - Inside `main`, `functionA` is called.
   - The stack frame for `functionA` is pushed onto the stack.


    | functionA   |
    |-------------|
    | main        |
    |-------------|
  

3. Calling `functionB` from `functionA`:
   - Inside `functionA`, `functionB` is called.
   - The stack frame for `functionB` is pushed onto the stack.


    | functionB   |
    |-------------|
    | functionA   |
    |-------------|
    | main        |
    |-------------|


4. Calling `functionC` from `functionB`:
   - Inside `functionB`, `functionC` is called.
   - The stack frame for `functionC` is pushed onto the stack.


    | functionC   |
    |-------------|
    | functionB   |
    |-------------|
    | functionA   |
    |-------------|
    | main        |
    |-------------|


5. Returning from `functionC`:
   - `functionC` completes execution and returns to `functionB`.
   - The stack frame for `functionC` is popped off the stack.


    | functionB   |
    |-------------|
    | functionA   |
    |-------------|
    | main        |
    |-------------|


6. Returning from `functionB`:
   - `functionB` completes execution and returns to `functionA`.
   - The stack frame for `functionB` is popped off the stack.


    | functionA   |
    |-------------|
    | main        |
    |-------------|


7. Returning from `functionA`:
   - `functionA` completes execution and returns to `main`.
   - The stack frame for `functionA` is popped off the stack.


    | main        |
    |-------------|


8. Returning from `main`:
   - `main` completes execution and the program terminates.
   - The stack frame for `main` is popped off the stack.


Full Code with Comments

#include <iostream>
using namespace std;

void functionC() { cout << "Inside functionC" << endl; }

void functionB() {
  cout << "Inside functionB" << endl;
  functionC(); // Call to functionC, stack frame for functionC is pushed
}

void functionA() {
  cout << "Inside functionA" << endl;
  functionB(); // Call to functionB, stack frame for functionB is pushed
}

int main() {
  cout << "Inside main" << endl;
  functionA(); // Call to functionA, stack frame for functionA is pushed
  return 0;    // Return from main, stack frame for main is popped
}

Explanation of the Code

- The `main` function starts execution, printing "Inside main".
- `functionA` is called from `main`, pushing its stack frame onto the stack.
- Inside `functionA`, `functionB` is called, pushing its stack frame onto the stack.
- Inside `functionB`, `functionC` is called, pushing its stack frame onto the stack.
- `functionC` executes and returns to `functionB`, popping its stack frame.
- `functionB` completes and returns to `functionA`, popping its stack frame.
- `functionA` completes and returns to `main`, popping its stack frame.
- `main` completes and the program ends, with the final stack frame for `main` being popped.

This illustrates how the function call stack manages the sequence of function calls and returns in a C++ program.

  // Passed By Value -> Copy Creation ->  printa(a) -> Pass By Value -> Actual Value Will Be Not Passed
int main(){
  int a = 5;
  // a is argument
  printa(a);
  cout << a << endl;
  // Output is 5
}

void printa(int a) {
  a++;
  cout << a << '\n';
  // OutPut is 6;
}

int a = 5;
cout << "Address Of a Is : " << &a << endl;

// Write Main Function In Last
// All Other Function In First
// Before involk Function Make Sure Its Declared Earlier Than Call It

// Homework Question
#include <cmath>
#include <iostream>
using namespace std;

// Function to calculate and display the area of a circle
void displayCircleArea(double radius) {
  const double PI = 3.14159;
  double area = PI * radius * radius;
  cout << "Area of the circle with radius " << radius << " is: " << area
       << endl;
}

// Function to check if a number is even or odd
void checkEvenOrOdd(int num) {
  if (num % 2 == 0) {
    cout << num << " is even." << endl;
  } else {
    cout << num << " is odd." << endl;
  }
}

// Function to calculate the factorial of a number
long long factorial(int num) {
  if (num < 0) {
    cout << "Factorial is not defined for negative numbers." << endl;
    return -1;
  }
  long long fact = 1;
  for (int i = 1; i <= num; ++i) {
    fact *= i;
  }
  return fact;
}

// Function to check if a number is prime
bool isPrime(int num) {
  if (num <= 1) {
    return false;
  }
  for (int i = 2; i <= sqrt(num); ++i) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

// Function to print all prime numbers from 1 to N
void printPrimes(int N) {
  for (int i = 2; i <= N; ++i) {
    if (isPrime(i)) {
      cout << i << " ";
    }
  }
  cout << endl;
}

int main() {
  // Test the displayCircleArea function
  double radius;
  cout << "Enter the radius of the circle: ";
  cin >> radius;
  displayCircleArea(radius);

  // Test the checkEvenOrOdd function
  int num;
  cout << "Enter an integer: ";
  cin >> num;
  checkEvenOrOdd(num);

  // Test the factorial function
  cout << "Enter a number to find its factorial: ";
  cin >> num;
  long long fact = factorial(num);
  if (fact != -1) {
    cout << "Factorial of " << num << " is: " << fact << endl;
  }

  // Test the isPrime function
  cout << "Enter a number to check if it's prime: ";
  cin >> num;
  if (isPrime(num)) {
    cout << num << " is a prime number." << endl;
  } else {
    cout << num << " is not a prime number." << endl;
  }

  // Test the printPrimes function
  int N;
  cout << "Enter the value of N to print all prime numbers from 1 to N: ";
  cin >> N;
  cout << "Prime numbers from 1 to " << N << " are: ";
  printPrimes(N);

  return 0;
}
