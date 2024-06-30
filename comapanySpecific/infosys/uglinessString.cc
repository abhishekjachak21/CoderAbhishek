/*
Problem Statement :

 You have been given a string S of length N. The given string is a binary string which consists of only 0’s and ‘1’s. Ugliness of a string is defined as the decimal   number that this binary string represents.

 Example:

“101” represents 5.
“0000” represents 0.
“01010” represents 10.
 There are two types of operations that can be performed on the given string.

Swap any two characters by paying a cost of A coins.
Flip any character by paying a cost of B coins
flipping a character means converting a ‘1’to a ‘0’or converting a ‘0’ to a ‘1’.
  Initially, you have been given coins equal to the value defined in CASH. Your task is to minimize the ugliness of the string by performing the above mentioned operations on it. Since the answer can be very large, return the answer modulo 10^9+7.


input:
  6
  111011
  7
  1
  3

  Sample Output 2:

  7


*/

#include <bits/stdc++.h>
using namespace std;

string s;
int n, cash, a, b;

// Function to perform swaps
void swapf() {
    int i = 0;

    // Find the first occurrence of '1'
    while (i < s.length() && s[i] != '1') {
        i++;
    }

    int j = s.length() - 1;
    while (j > i) {
        if (cash < a)
            break;

        if (s[j] == '0') {
            if (s[i] == '0') {
                i++;
            } else {
                swap(s[i], s[j]);
                cash -= a;
                j--;
            }
        } else {
            j--;
        }
    }
}

// Function to perform flips
void flipf() {
    int i = 0;

    // Find the first occurrence of '1'
    while (i < s.length() && s[i] != '1') {
        i++;
    }

    while (cash >= b && i < s.length()) {
        if (s[i] == '1') {
            s[i] = '0';
            cash -= b;
        }
        i++;
    }
}

int main() {
    cin >> n >> s >> cash >> a >> b;

    if (a < b) {
        swapf();
        flipf();
    } else {
        flipf();
        swapf();
    }

    // Convert binary string to decimal and print
    cout << stoull(s, 0, 2) << endl;

    return 0;
}
