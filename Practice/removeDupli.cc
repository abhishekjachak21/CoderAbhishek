#include<bits/stdc++.h> // #include <iostream>  
// #include <string>
// #include <unordered_map>
using namespace std;


///-----------------------------------------------------------------
//i want to print table char and frequency of it ,neatly ,how can i ?

int main(){
    string str;
    getline(cin,str);  
    
    unordered_map<char,int>m;
    string ans;

    for(int i=0;i<str.size();i++){
        if(m[str[i]]<1) ans += str[i];
        m[str[i]]++;
        // cout<<str[i]<<m[str[i]]<<" "<<endl;
    }
    for(auto idx:m){
        cout<<idx.first<<" for "<<idx.second<<" times"<<endl;
    }

    cout<<"String after removed duplicates: "<<ans<<endl;
}

///-----------------------------------------------------------------



///-----------------------------------------------------------------
// int main(){
//     string str;   //str=""; no need to intialize like this, string doesnt contain garbage value unlike int,char
//     // cin>>str; 
//     getline(cin,str);  //for this input: bapu sehat ke liye tu toh hanikarak hai

//     unordered_map<char,int>m;
//     string ans;

//     for(int i=0;i<str.size();i++){
//         if(m[str[i]]<1) ans += str[i];
//         m[str[i]]++;
//     }
//     cout<<"String after removed duplicates: "<<ans<<endl;
// }
///-----------------------------------------------------------------









///-----------------------------------------------------------------
// string removeDuplicates(string str) {
//     unordered_map<char, int> mp;
//     string ans;
    
//     for (int i = 0; i < str.length(); i++) {
//         if (mp[str[i]] < 1) {
//             ans += str[i];
//         }
//         mp[str[i]]++;
//     }

//     return ans;
// }

// int main() {
//     string inputString = "Abhishek Navanath Jachak";
//     string result = removeDuplicates(inputString);
    
//     cout << "Original String: " << inputString << endl;
//     cout << "String without duplicates: " << result << endl;

//     return 0;
// }
///-----------------------------------------------------------------