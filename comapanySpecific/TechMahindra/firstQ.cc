#include <iostream>
using namespace std;

int sumOfPrimeDigits(int orderValue) {
    int sum = 0;
    while (orderValue > 0) {
        int digit = orderValue % 10; // Extract the last digit
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7) {
            sum += digit; // Add prime digits
        }
        orderValue /= 10; // Remove the last digit
    }
    return sum;
}

int main() {
    int orderValue;
    cin >> orderValue; // Input the total bill
    cout << sumOfPrimeDigits(orderValue) << endl; // Output the discount value
    return 0;
}



/*
//Question

An e-commerce company plans to give their customers a special discount for the holiday. They are planning to offer a flat discount. The discount value is calculated as the sum of all the prime digits in the total bill.
Write an algorithm to find the discount value for the given total bill.

Input
The input consists of an integer orderValue, representing the total bill.

Output
Print an integer representing the discount value for the given total bill.

Example

Input: 578
Output: 12

Explanation:
The sum of the prime digits in the total bill is 12. So the output is 12.

*/