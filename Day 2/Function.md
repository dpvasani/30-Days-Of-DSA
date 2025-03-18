## Function Call Stack in C++

The function call stack, also known as the call stack, is a special type of data structure that stores information about the active subroutines or functions in a computer program. When a function is called, an activation record (also known as a stack frame) is pushed onto the call stack. This activation record includes information such as the return address, function parameters, and local variables. When the function completes execution, its activation record is popped off the stack.

## Example and Explanation

Let's take an example with multiple function calls to understand how the function call stack operates:

```cpp
#include <iostream>
using namespace std;

void functionC() {
    cout << "Inside functionC" << endl;
}

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
```

### Step-by-Step Function Call Stack Execution

1. **Calling `main` Function:**
   - The program starts executing from the `main` function.
   - The stack frame for `main` is pushed onto the stack.

   ```
   | main        |
   |-------------|
   ```

2. **Calling `functionA` from `main`:**
   - Inside `main`, `functionA` is called.
   - The stack frame for `functionA` is pushed onto the stack.

   ```
   | functionA   |
   |-------------|
   | main        |
   |-------------|
   ```

3. **Calling `functionB` from `functionA`:**
   - Inside `functionA`, `functionB` is called.
   - The stack frame for `functionB` is pushed onto the stack.

   ```
   | functionB   |
   |-------------|
   | functionA   |
   |-------------|
   | main        |
   |-------------|
   ```

4. **Calling `functionC` from `functionB`:**
   - Inside `functionB`, `functionC` is called.
   - The stack frame for `functionC` is pushed onto the stack.

   ```
   | functionC   |
   |-------------|
   | functionB   |
   |-------------|
   | functionA   |
   |-------------|
   | main        |
   |-------------|
   ```

5. **Returning from `functionC`:**
   - `functionC` completes execution and returns to `functionB`.
   - The stack frame for `functionC` is popped off the stack.

6. **Returning from `functionB`:**
   - `functionB` completes execution and returns to `functionA`.
   - The stack frame for `functionB` is popped off the stack.

7. **Returning from `functionA`:**
   - `functionA` completes execution and returns to `main`.
   - The stack frame for `functionA` is popped off the stack.

8. **Returning from `main`:**
   - `main` completes execution, and the program terminates.
   - The stack frame for `main` is popped off the stack.

## Understanding Function Parameter Passing in C++

```cpp
#include <iostream>
using namespace std;

void printa(int a) {
    a++;
    cout << a << '\n'; // Output: 6
}

int main() {
    int a = 5;
    printa(a); // Call by value: a copy of 'a' is passed, original remains unchanged.
    cout << a << endl; // Output: 5
    return 0;
}
```

### Explanation
- `a` is passed by value to `printa`, meaning a copy is created.
- Modifying `a` inside `printa` does not affect the original `a` in `main`.

## Additional Notes

- **Declare functions before calling them** to avoid compilation errors.
- **Write the `main` function at the end** for better readability.

## Homework Questions

1. **Calculate and display the area of a circle:**

```cpp
#include <iostream>
using namespace std;

void displayCircleArea(double radius) {
    const double PI = 3.14159;
    double area = PI * radius * radius;
    cout << "Area of the circle with radius " << radius << " is: " << area << endl;
}
```

2. **Check if a number is even or odd:**

```cpp
void checkEvenOrOdd(int num) {
    if (num % 2 == 0) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }
}
```

3. **Calculate the factorial of a number:**

```cpp
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
```

4. **Check if a number is prime:**

```cpp
#include <cmath>
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}
```

5. **Print all prime numbers from 1 to N:**

```cpp
void printPrimes(int N) {
    for (int i = 2; i <= N; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}
```

### Full Implementation:

```cpp
int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    displayCircleArea(radius);

    int num;
    cout << "Enter an integer: ";
    cin >> num;
    checkEvenOrOdd(num);

    cout << "Enter a number to find its factorial: ";
    cin >> num;
    long long fact = factorial(num);
    if (fact != -1) {
        cout << "Factorial of " << num << " is: " << fact << endl;
    }

    cout << "Enter a number to check if it's prime: ";
    cin >> num;
    cout << (isPrime(num) ? "Prime" : "Not Prime") << endl;

    int N;
    cout << "Enter the value of N to print all prime numbers from 1 to N: ";
    cin >> N;
    printPrimes(N);

    return 0;
}
```


