#include<iostream>
#include<cstring>   //strlen() method for length of character array/
// #include<bits/stdc++.h>    //if u use this, u can solve any problem
using namespace std;         //but it is SANKAT KALI lib, dont use it everywhere

int main(){
    char a[]= "selmon boi";  //10

    string abc = "abhi shek";
    cout<<abc<<endl;

    for(int i=0;i<strlen(a);i++)
    cout<<a[i];

cout<<endl;

   cout<<strlen(a)<<endl;   //char array size
   cout<<abc.size()<<endl; //9...string size/length
   
}