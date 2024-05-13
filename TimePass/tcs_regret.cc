#include<iostream>
using namespace std;

int Closest_Integer_Number(int X, int Y) {
    // If X is already divisible by Y, return X
    if (X % Y == 0) 
        return X;

    // Find the closest integer greater than or equal to X that is divisible by Y
    int closest_greater = ((X / Y) + 1) * Y;

    // Find the closest integer less than or equal to X that is divisible by Y
    int closest_smaller = (X / Y) * Y;

    // Return the closest integer
    if (abs(closest_greater - X) < abs(closest_smaller - X))
        return closest_greater;
    else
        return closest_smaller;
}

int main() {
    int x, y;
    cin >> x >> y;

    cout << "Closest Int: " << Closest_Integer_Number(x, y);

    return 0;
}
