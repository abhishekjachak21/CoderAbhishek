#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    int lowerLimit, upperLimit;

    cout << "Enter lower limit: ";
    cin >> lowerLimit;

    cout << "Enter upper limit: ";
    cin >> upperLimit;

    for (int num = lowerLimit; num <= upperLimit; num++) {
        if (isPalindrome(num)) {
            cout << num << " ";
        }
    }

    return 0;
}
