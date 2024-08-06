#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the number of digits
int countDigits(int n) {
    if (n == 0)
        return 0;
    return 1 + countDigits(n / 10);
}

// Recursive function to calculate the sum of digits each raised to the power of 'power'
int armstrongHelper(int n, int power) {
    if (n == 0)
        return 0;
    int digit = n % 10;
    return pow(digit, power) + armstrongHelper(n / 10, power);
}

// Function to check if a number is an Armstrong number
bool isArmstrong(int n) {
    int power = countDigits(n);
    return n == armstrongHelper(n, power);
}

// Function to find the sum of Armstrong numbers between a given range
int sumOfArmstrongNumbers(int lower, int higher) {
    int sum = 0;
    for (int i = lower; i <= higher; ++i) {
        if (isArmstrong(i)) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int lower, higher;
    cout << "Enter the lower limit: ";
    cin >> lower;
    cout << "Enter the higher limit: ";
    cin >> higher;

    int result = sumOfArmstrongNumbers(lower, higher);
    cout << "The sum of Armstrong numbers between " << lower << " and " << higher << " is: " << result << endl;

    return 0;
}
