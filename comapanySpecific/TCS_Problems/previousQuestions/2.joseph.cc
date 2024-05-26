#include<bits/stdc++.h>
#include <iostream>
using namespace std;

// int toggleBits(int num) {
//     // Find the position of the highest set bit
//     int highestBit = 0;
//     while ((1 << highestBit) <= num) {
//         highestBit++;
//     }

//     // Toggle each bit up to the highest set bit
//     for (int i = 0; i < highestBit; i++) {
//         num = num ^ (1 << i);
//     }

//     return num;
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     int toggledNum = toggleBits(num);
//     cout << "Toggled number: " << toggledNum << endl;

//     return 0;
// }

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n; // Read the input number from the user

    // Calculate the value of k, which is a number with all bits set up to the position of the highest set bit in n
    int k = (1 << (int)floor(log2(n)) + 1) - 1;

    // Toggle all the bits in n using XOR operation with k
    cout << (n ^ k); // Print the result of XOR operation between n and k

    return 0;
}
