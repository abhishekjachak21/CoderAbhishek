#include<bits/stdc++.h>
using namespace std;


//date 11 feb 2024
//0,1 are not prime no
int main(){
    
    int n;cin>>n;
   set<int>s1;

   for(int i=2;i<=n;i++){
     bool flag=true;  //introduced this  
    for(int j=2;j<=i-1;j++){
        if(i%j == 0) flag=false;    //negation is the best way to be sure about NOT GOIN WRONG DIRECTION ANYWAY
     }
    //if(flag) s1.insert(i);   //also this,vina karan ka use karaych
    if(flag) cout<<i<<" ";
   }

//    for(int i:s1) cout<<i<<" ";

    return 0;
}









// int main(){
    
//     int n;cin>>n;
//     bool prime=true;
//     for(int i=2;i<=n-1;i++){   //n/2 logic mujhe samaj ni
//      if(n%i==0) {prime=false; break;}
//     }
//     if(!prime) cout<<"No,Prime";
//     else cout<<"Yes,prime";

//     return 0;
// }