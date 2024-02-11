#include<bits/stdc++.h>
using namespace std;


/*
Find Non-repeating characters of a String
Problem:  Given a string, print non-repeating characters of the string.

Examples:

Example 1:
Input: string = “google”
Output: l,e

Explanation: Non repeating characters are l,e.

Example 2:
Input: string = “yahoo”
Output: y,a,h
Explanation: Non repeating characters are y,a,h
*/ 

// void getNonRepeating(string s){
//     map<char, int>mp;

//     for(int i=0; i<s.length(); i++){
//         mp[s[i]]++;
//     }
    
//     for(auto x: mp){
//         if(x.second==1){
//             cout<<x.first<<" ";
//         }
//     }
// }

void getNonRepeating(string s){
    unordered_map<char,int>mp;

    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
cout<<"Non repeated characters: ";
    for(auto ele:mp)
      if(ele.second==1) cout<<ele.first<<", ";
    cout<<endl;  
}


// void getNonRepeating(string str1){

//     string str2="";

//     for(int i=0;i<str1.size();i++){
//         bool strRepeat= 0;

//         for(int j=0;j<str1.size();j++){
//             if(i!=j && str1[i]==str1[j]) { //but why i!=j ??
//                 strRepeat = 1;
//                 break;
//             }
//         }
//         if(!strRepeat) str2 += str1[i];
//     }
//     if(str2.size()==0) cout<<"Non repeated characters: NULL"<<endl;
//     else{
//     cout<<"Non repeated characters: ";
//       for(char ele:str2)
//       cout<<ele<<", ";
//       cout<<endl;
//     }

// }



int main()
{
    getNonRepeating("iamcoderbro");
    getNonRepeating("accchaacccha");
    getNonRepeating("Abhishek");

    return 0;
}
