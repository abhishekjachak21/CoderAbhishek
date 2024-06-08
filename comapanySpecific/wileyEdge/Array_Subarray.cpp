#include<bits/stdc++.h>
using namespace std;

int maxOfMins(const vector<int>& space, int x) {
    int n = space.size();
    int maxMin = INT_MIN;

    for (int i = 0; i <= n - x; i++) {
        int currentMin = INT_MAX;
        for (int j = i; j < i + x; j++) {
            currentMin = min(currentMin, space[j]);
        }
        maxMin = max(maxMin, currentMin);
    }

    return maxMin;
}

int main() {
    int x, n;
    cin >> x >> n;
    vector<int> space(n);

    for (int i = 0; i < n; i++) {
        cin >> space[i];
    }

    int result = maxOfMins(space, x);
    cout << result << endl;

    return 0;
}
