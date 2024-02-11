#include<bits/stdc++.h>
using namespace std;

// int main(){
//     string str;
//     cin>>str;
//     for(int i=0;i<str.size();i++){
//         if(str[i]!=str[str.size()-1]) {cout<<int(str[0]);break;}
//         else {cout<<str.size(); break;}
//     }
// }


int palindromeOrAscii(const string& str) {
    // Check if the string is a palindrome
    bool isPalindrome = true;
    int n = str.length();
    for (int i = 0; i < n ; i++) {
        if (str[i] != str[n-1-i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        // If the string is a palindrome, return its length
        return n;
    } else {
        // If the string is not a palindrome, return the ASCII value of the first character
        return int(str[0]);
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int result = palindromeOrAscii(str);
    cout << "Result: " << result << std::endl;

    return 0;
}
