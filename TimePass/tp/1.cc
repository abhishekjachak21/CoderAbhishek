
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "The factors of " << n << " are: ";

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (i > 1) {
                cout << ", ";
            }
            cout << i;
        }
    }

    cout << endl;
    return 0;
}

