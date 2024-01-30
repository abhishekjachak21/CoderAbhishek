/*

Find the Largest element in an array
Problem Statement: Given an array, we have to find the largest element in the array.

Examples:

Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 5
Explanation: 5 is the largest element in the array. 

Example2: 
Input: arr[] = {8,10,5,7,9};
Output: 10
Explanation: 10 is the largest element in the array. 

*/

#include<bits/stdc++.h>
using namespace std;
 
// TC: O(n*log(n))
// SC: O(n)
// int getLargest(vector<int>& arr){
//     sort(arr.begin(), arr.end());
//     return arr[arr.size()-1];
// }


////TC: O(n)
int getLargest(vector<int>v){

    int large = v[0];

    for(int i=0;i<v.size();i++){
        if(v[i]>large) large=v[i];
    }

    return large;
}


int main() {
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};
   
    cout<<"The Largest element in the array is: "<<getLargest(arr1)<<endl;
    cout<<"The Largest element in the array is: "<<getLargest(arr2);
   
    return 0;
}