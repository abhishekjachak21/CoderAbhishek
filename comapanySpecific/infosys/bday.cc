/*

Your birthday is coming soon and one of your friends, Alex, is thinking about a gift for you. He knows that you really like integer arrays with interesting properties.
He selected two numbers, N and K and decided to write down on paper all integer arrays of length K (in form a[1], a[2], …, a[K]), where every number a[i] is in range from 1 to N, and, moreover, a[i+1] is divisible by a[i] (where 1 < i <= K), and give you this paper as a birthday present.
Alex is very patient, so he managed to do this. Now you’re wondering, how many different arrays are written down on this paper?
Since the answer can be really large, print it modulo 10000.

Input:

The first line contains an integer, n, denoting the maximum possible value in the arrays.
The next line contains an integer, k, denoting the length of the arrays.*/

#include <iostream>
#include <vector>
using namespace std;

const int MOD = 10000;

int counter(int n, int k) {
    int count = 0;
    if (k == 1)
        return n;
    else {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (j % i == 0)
                    count = (count + 1) % MOD;
            }
        }
    }
    return count;
}

int countt(int n, int k) {
    if (k == 1)
        return n;
    if (k == 2) {
        return counter(n, k);
    }
    int mid = k / 2;
    int x = countt(n, k - mid);
    int y = counter(n, mid);
    return (x * y) % MOD;
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << "Output: " << countt(n, k) << endl;
    return 0;
}


























// #include <iostream>
// #include <vector>
// #include <cmath>
// using namespace std;

// const int MOD = 10000;

// int main() {
//     int n, k;
//     cin >> n >> k;

//     vector<vector<int>> dp(k + 1, vector<int>(n + 1, 0));

//     // Base case: sequences of length 1
//     for (int i = 1; i <= n; ++i) {
//         dp[1][i] = 1;
//     }

//     // Fill DP table
//     for (int length = 2; length <= k; ++length) {
//         for (int value = 1; value <= n; ++value) {
//             for (int prev = 1; prev <= n; ++prev) {
//                 if (value % prev == 0) {
//                     dp[length][value] = (dp[length][value] + dp[length - 1][prev]) % MOD;
//                 }
//             }
//         }
//     }

//     // Sum up all sequences of length k
//     int result = 0;
//     for (int value = 1; value <= n; ++value) {
//         result = (result + dp[k][value]) % MOD;
//     }

//     cout << "Output: " << result << endl;

//     return 0;
// }
