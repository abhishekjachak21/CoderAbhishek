#include<iostream>
using namespace std;



///------------------------------------------
///Armstrong no
///The Armstrong numbers of first kind up to 10 digits are 1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407, 1634, 8208, 9474, 54748, 92727, 93084, 548834, 1741725, 4210818, 9800817, 9926315, 24678050, 24678051, 88593477, 146511208, 472335975, 534494836, 912985153, and 4679307774.
int main() {
    int n, oriNo, rem, result = 0;

    cout << "Enter an integer: ";
    cin >> n;

    oriNo = n;

    while (oriNo != 0) {
        rem = oriNo % 10;
        result += rem * rem * rem;
        oriNo /= 10;
    }

    if (result == n) 
        cout << n << " is an Armstrong number." << endl;
     else 
        cout << n << " is not an Armstrong number." << endl;
    

    return 0;
}
// }
///------------------------------------------








///------------------------------------------
///palindrome
// int main(){
 
//     int n;
//     cin>>n;
//     int oriVal=n;
//     int rev=0;

//     while(n>0){
//         int num=n%10;
//         rev=rev*10 + num;
//         n=n/10;
//     }

//     if(oriVal==rev) cout<<"its palindrome";
//     else cout<<"its not palindrome";

//     return 0;
// }
///------------------------------------------





///------------------------------------------
///prime no
// int main(){
   
//    int n;cin>>n;

//    bool flag=true;
//    for(int i=2 ;i<n  ; i++){
//     if(n%i==0) flag=false;
//    }
   
//    if(flag==false)  //   if(flag=false) wrong
//     cout<<"not prime"<<endl;
//    else cout<<"prime"<<endl; 

//     return 0;
// }
//still there is confusion,why bro,why?
///------------------------------------------






///------------------------------------------
///reverse of given no
// int main(){
  
//      int n;cin>>n;
//      int rev=0;
//     while(n>0){
//       int num=n%10;
//       rev=rev*10+num;
//       n=n/10;
//     }
//     cout<<rev;

//     return 0;
// }
///------------------------------------------









///------------------------------------------
//fibonacci series => 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 
// int main(){

//     int n;cin>>n;

//     int a=0,b=1;

//     for(int i=0;i<n;i++){
//     cout<<a<<" ";
//     int nxt=a+b;
//     a=b;
//     b=nxt;
//     }

//     return 0;
// }
///------------------------------------------








///------------------------------------------
///factorial program
// int main(){

//     int fact=1,n=0;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }

//     cout<<fact<<endl;



//     return 0;
// }
///---------------------------------------------------
