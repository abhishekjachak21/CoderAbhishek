#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1000000007;

// Function to count unique melodies
int countUniqueMelodies(int N, int D, int K, int S) {
    vector<vector<int>> dp(K + 1, vector<int>(N + 1, 0));
    dp[1][S] = 1;

    for (int length = 1; length < K; ++length) {
        vector<int> prefixSum(N + 1, 0);

        // Compute prefix sums
        for (int note = 1; note <= N; ++note) {
            prefixSum[note] = (prefixSum[note - 1] + dp[length][note]) % MOD;
        }

        // Update the DP table for length + 1
        for (int note = 1; note <= N; ++note) {
            int start = max(1, note - D);
            int end = min(N, note + D);
            dp[length + 1][note] = (prefixSum[end] - (start > 1 ? prefixSum[start - 1] : 0) + MOD) % MOD;
        }
    }

    int result = 0;
    for (int length = 1; length <= K; ++length) {
        result = (result + dp[length][S]) % MOD;
    }

    return result;
}

int main() {
    int N, D, K, S;
    cin >> N >> D >> K >> S;

    int result = countUniqueMelodies(N, D, K, S);
    cout << result << endl;

    return 0;
}
