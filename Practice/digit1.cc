#include <iostream>
using namespace std;

int main() {
    int year;
    
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << "1"; // Leap year
    } else {
        cout << "0"; // Not a leap year
    }

    return 0;
}
