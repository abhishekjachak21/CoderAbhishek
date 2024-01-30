/*
Problem Statement: Given an array, we have to find the smallest element in the array.

Examples:

Example 1:
Input: v[] = {2,5,1,3,0};
Output: 0
Explanation: 0 is the smallest element in the array. 

Example2: 
Input: v[] = {8,10,5,7,9};
Output: 5
Explanation: 5 is the smallest element in the array.

*/ 

#include<bits/stdc++.h>
using namespace std;

// TC: O(n*log(n))
// SC: O(n)
// int getSmallest(vector<int> v){
//     sort(v.begin(), v.end());
//     return v[0];
// }


////TC: O(n)
int getSmallest(vector<int>v){

    int small = v[0];

    for(int i=0;i<v.size();i++){
        if(v[i]<small) small=v[i];
    }

    return small;
}

int main(){
    vector<int>v1 = {23, 24, 53, 7, 14, 456, 755};
    vector<int>v2 = {11, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout<<getSmallest(v1)<<endl;
    cout<<getSmallest(v2)<<endl;
}