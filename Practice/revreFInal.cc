#include<iostream>
using namespace std;

int main(){

    int n;cin>>n;

int ans=0;   // i was initializing `ans` two times

    while(n!=0){
        int num=n%10;
        ans= ans*10 + num;   //meditate on this
        n/=10;
    }

    cout<<ans;

    return 0;
}