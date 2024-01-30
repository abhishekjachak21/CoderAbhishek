/*
Remove Duplicates in-place from Sorted Array
Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It does not matter what you leave beyond the first k elements.

Note: Return k after placing the final result in the first k slots of the array.

Examples:

Example 1: 

Input: arr[1,1,2,2,2,3,3]

Output: arr[1,2,3,_,_,_,_]

Explanation: Total number of unique elements are 3, i.e[1,2,3] and Therefore return 3 after assigning [1,2,3] in the beginning of the array.

Example 2: 

Input: arr[1,1,1,2,2,3,3,3,3,4,4]

Output: arr[1,2,3,4,_,_,_,_,_,_,_]

Explanation: Total number of unique elements are 4, i.e[1,2,3,4] and Therefore return 4 after assigning [1,2,3,4] in the beginning of the array.
*/ 

#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[]={1,1,1,2,2,3,3,3,3,4,4,5,6,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    set<int>s;

    for(int i=0;i<size;i++)
     s.insert(arr[i]);

    cout<<"Ori Arr: ";for(int i:arr) cout<<i<<" ";  cout<<endl;
    cout<<"After Arr: ";for(int i:s) cout<<i<<" ";  cout<<endl;

    //if you want to convert set into vector
    //vector<int>v(s.begin(),s.end());
}




// // Method 1: 
// // TC: O(n)
// // SC: O(1)
// void removeSuplicates1(vector<int>& arr){
//     int n = arr.size();
//     cout<<arr[0]<<" ";
//     for(int i=0; i<n; i++){
//         if(arr[i]!=arr[i-1] && i!=0){
//             cout<<arr[i]<<" ";
//         }
//     }
// }

// // Method 2: Not-Inplace
// // TC: O(n)
// // SC: O(n)
// void removeSuplicates2(vector<int>& arr){
//     set<int>s(arr.begin(), arr.end());        //this is good approach for converting vec into set
//     for(auto x: s) cout<<x<<" ";
// }


// int main()
// {
//     vector<int>arr{1,1,1,2,2,3,3,3,3,4,4};
//     cout<<"OriArr: ";
//      for(int i=0; i<arr.size(); i++)
//       cout<<arr[i]<<" ";
//     cout<<endl;  
//     removeSuplicates1(arr);
//     cout<<endl;
//     removeSuplicates2(arr);
//     return 0;
// }
