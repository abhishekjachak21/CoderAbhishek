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


// int main(){
//     int arr[]={1,1,1,2,2,3,3,3,3,4,4,5,6,6};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     set<int>s;

//     for(int i=0;i<size;i++)
//      s.insert(arr[i]);

//     cout<<"Ori Arr: ";for(int i:arr) cout<<i<<" ";  cout<<endl;
//     cout<<"After Arr: ";for(int i:s) cout<<i<<" ";  cout<<endl;

//     //if you want to convert set into vector/vector into set
//     //vector<int>v(s.begin(),s.end());
// }




// // Method 1: 
// // TC: O(n)
// // SC: O(1)
void removeDuplicates1(vector<int>& vec){
    int n = vec.size();
    cout<<vec[0]<<" ";
    for(int i=0; i<n; i++){
        if(vec[i]!=vec[i-1] && i!=0){
            cout<<vec[i]<<" ";
        }
    }
}

// // Method 2: Not-Inplace
// // TC: O(n)
// // SC: O(n)
void removeDuplicates2(vector<int>& vec){
    set<int>s(vec.begin(), vec.end());        //this is good approach for converting vec into set
    for(auto x: s) cout<<x<<" ";
}


int main()
{
    vector<int>vec{1,1,1,2,2,3,3,3,3,4,4};
    cout<<"OriVec: ";
     for(int i=0; i<vec.size(); i++)
      cout<<vec[i]<<" ";
    cout<<endl;  
    //// cout<<"After Vec: "<<removeDuplicates1(vec); is wrong..
    cout<<"After Vec: ";removeDuplicates1(vec);
    cout<<endl;
    cout<<"After Vec: ";removeDuplicates2(vec);
    cout<<endl;
    return 0;
}
