#include <iostream>
#include <iomanip> // For setting precision
using namespace std;

double sumOfSeries(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / i;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    double result = sumOfSeries(n);
    // Set precision to 6 decimal places
    cout << fixed << setprecision(6); 
    cout << "Sum of the series: " << result << endl;

    return 0;
}
