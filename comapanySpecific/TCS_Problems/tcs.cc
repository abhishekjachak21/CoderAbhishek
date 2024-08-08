#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minSwapsToBeautiful(vector<int>& arr) {
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());

    int ascSwaps = 0, descSwaps = 0;

    // Count swaps for ascending order
    for (size_t i = 0; i < arr.size(); ++i) {
        auto correctIndex = find_if(sortedArr.begin(), sortedArr.end(), [value = arr[i]](int x) { return x == value; });
        while (i != static_cast<size_t>(distance(sortedArr.begin(), correctIndex))) {
            swap(arr[i], *correctIndex);
            ascSwaps++;
            correctIndex = find_if(sortedArr.begin(), sortedArr.end(), [value = arr[i]](int x) { return x == value; });
        }
    }

    // Count swaps for descending order
    sort(sortedArr.begin(), sortedArr.end(), greater<int>());
    for (size_t i = 0; i < arr.size(); ++i) {
        auto correctIndex = find_if(sortedArr.begin(), sortedArr.end(), [value = arr[i]](int x) { return x == value; });
        while (i != static_cast<size_t>(distance(sortedArr.begin(), correctIndex))) {
            swap(arr[i], *correctIndex);
            descSwaps++;
            correctIndex = find_if(sortedArr.begin(), sortedArr.end(), [value = arr[i]](int x) { return x == value; });
        }
    }

    return min(ascSwaps, descSwaps);
}

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int result = minSwapsToBeautiful(arr);
    cout << result << endl;

    return 0;
}
