#include<bits/stdc++.h>
using namespace std;


////its original code written by myself(11-02-2024)
int main(){

   int n;cin>>n;

   int a=0,b=1,c=0;
   while(a<=n){
    c=a+b;
    cout<<a<<" ";
    a=b;
    b=c;
   }

}



////1st try...as mistake is a great teacher to learn from
// int main(){

//    int n;cin>>n;

//    int a=0,b=1,c=0;
//    while(a<=n){
//     c=a+b;
//     cout<<a<<" "<<b<<" "<<c<<" ";
//     a=b;
//     b=c;
//    }

// }