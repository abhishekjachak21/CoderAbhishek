#include<bits/stdc++.h>    // #include <iostream>
using namespace std;      // #include <string>
                          // #include <cctype>


bool isPasswordValid(string password) {
    // Check the length of the password
    if (password.length() < 6)  return false;
    
    // Check for the presence of at least one numeric digit, lowercase, and uppercase letters
    bool hasDigit = false;
    bool hasLowercase = false;
    bool hasUppercase = false;

    for (char c : password) {
        if (isdigit(c)) {
            hasDigit = true;
        } else if (islower(c)) {              
            hasLowercase = true;
        } else if (isupper(c)) {
            hasUppercase = true;
        }

        if (hasDigit && hasLowercase && hasUppercase) {
            break;  // All conditions met, no need to continue checking
        }
    }

    // Check for the absence of space and slash (/)
    bool containsSpaceOrSlash = false;
    for (char c : password) {
       if (c == ' ' || c == '/') {
        containsSpaceOrSlash = true;
        break; // Exit the loop as soon as a space or slash is found
    }
    }

    if (containsSpaceOrSlash) {
    return false;
    }

    return hasDigit && hasLowercase && hasUppercase;
}

int main() {
    string password;
    cin >> password;

    if (isPasswordValid(password)) {
        cout << "password valid" << endl;
    } else {
        cout << "Invalid password, try again" << endl;
    }

    return 0;
}
