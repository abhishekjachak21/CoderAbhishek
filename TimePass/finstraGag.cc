#include <iostream>
#include <string>
#include <algorithm> // Required for std::min
using namespace std;

int minRotations(string str) {
    int countUp = 0, countDown = 0, countLeft = 0, countRight = 0;

    for (char c : str) {
        if (c == '^') {
            countUp++;
        } else if (c == 'v') {
            countDown++;
        } else if (c == '<') {
            countLeft++;
        } else if (c == '>') {
            countRight++;
        }
    }

    return min(str.size() - countUp, min(str.size() - countDown, min(str.size() - countLeft, str.size() - countRight)));
}

int main() {
    string str;
    cin >> str;

    int ans = minRotations(str);
    cout << ans;

    return 0;
}
