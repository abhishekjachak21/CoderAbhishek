#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
    string input1, input2;

    // Prompt for user input
    cout << "Enter the first date and time (yyyy:mm:dd hh:mm:ss): ";
    getline(cin, input1);
    cout << "Enter the second date and time (yyyy:mm:dd hh:mm:ss): ";
    getline(cin, input2);

    // Create input string streams to parse the date and time
    istringstream iss1(input1);
    istringstream iss2(input2);

    int year1, month1, day1, hour1, minute1, second1;
    int year2, month2, day2, hour2, minute2, second2;

    char colon; // To consume colons in the input

    // Parse the input strings
    iss1 >> year1 >> colon >> month1 >> colon >> day1 >> hour1 >> colon >> minute1 >> colon >> second1;
    iss2 >> year2 >> colon >> month2 >> colon >> day2 >> hour2 >> colon >> minute2 >> colon >> second2;

    // Calculate the time difference in seconds
    int total_seconds1 = year1 * 31536000 + month1 * 2592000 + day1 * 86400 + hour1 * 3600 + minute1 * 60 + second1;
    int total_seconds2 = year2 * 31536000 + month2 * 2592000 + day2 * 86400 + hour2 * 3600 + minute2 * 60 + second2;
    int difference_seconds = total_seconds2 - total_seconds1;

    // Convert the difference to hours, minutes, and seconds
    int hours = difference_seconds / 3600;
    int minutes = (difference_seconds % 3600) / 60;
    int seconds = difference_seconds % 60;

    // Format and display the result
    cout << "Time difference: " << setfill('0') << setw(2) << hours << ":" << setw(2) << minutes << ":" << setw(2) << seconds << endl;

    return 0;
}
