#include<bits/stdc++.h>
using namespace std;


bool isArm(int n){
 
    //count no of digits
    //sum all no , raised to NOD
    
    int num=n,NOD=0;
    while(num!=0){
        num = num/10;
        NOD++;
    }

    num=n;
    int sum=0;
    while(num!=0){
        int a=num%10;
        num = num/10;
        sum += pow(a, NOD);
    }

    return (n==sum);
}


int main(){
    
    int n; cin>>n;

    if(isArm(n)) cout<< "Yes";
    else cout<< "No";

    return 0;
}









 
// bool isArmstrong(int num) {
//     int originalNum = num; 
//     int numDigits = 0;
//     int sum = 0;

//     // Count the number of digits in the number
//     while (originalNum != 0) {
//         originalNum /= 10;
//         numDigits++;
//     }

//     // Calculate the sum of digits raised to the power of numDigits
//     originalNum = num;
//     while (originalNum != 0) {
//         int digit = originalNum % 10;
//         sum += pow(digit, numDigits);
//         originalNum /= 10;
//     }

//     // Check if the number is Armstrong
//     return sum == num;
// }

// int main() {
//     int num;   // i think i shud use 'long' for longer
//     cout << "Enter a number: ";
//     cin >> num;

//     if (isArmstrong(num)) {
//         cout << num << " is an Armstrong number." << endl;
//     } else {
//         cout << num << " is not an Armstrong number." << endl;
//     }

//     return 0;
// }



