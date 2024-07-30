#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

long Friendshipfactor(int d, vector<int> w, vector<int> f) {
    int n = w.size();
    vector<pair<int, int>> friends(n);

    for (int i = 0; i < n; ++i) {
        friends[i] = {w[i], f[i]};
    }

    // Sort friends based on wisdom levels
    sort(friends.begin(), friends.end());

    long long maximumSum = 0, current_sum = 0;
    int start = 0;

    for (int ending = 0; ending < n; ++ending) {
        current_sum += friends[ending].second;

        while (friends[ending].first - friends[start].first > d) {
            current_sum -= friends[start].second;
            start++;
        }

        maximumSum = max(maximumSum, current_sum);
    }

    return maximumSum;
}

int main() {
    int d = 15;
    vector<int> w = {10, 20, 30};
    vector<int> f = {5, 15, 25};

    cout << "Maximum Friendship Factor: " << Friendshipfactor(d, w, f) << endl;

    return 0;
}
