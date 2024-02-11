// /*
// Remove Duplicates From an Unsorted array
// Problem Statement: Given an unsorted array, remove duplicates from the array.

// Examples:

// Example 1:
// Input: arr[]={2,3,1,9,3,1,3,9}
// Output:  {2,3,1,9}

// Explanation: Removed all the duplicate elements

// Example 2:
// Input: arr[]={4,3,9,2,4,1,10,89,34}
// Output: {3,4,9,2,1,10,34,89}
// Explanation: Removed all the duplicate elements
// */ 


// #include<bits/stdc++.h>
// using namespace std ;
// // Method 1: 
// // TC: O(n)
// // SC: O(1)
// void removeSuplicates1(vector<int>& vec){
//     int n = vec.size();
//     sort(vec.begin(), vec.end());
//     cout<<vec[0]<<" ";
//     for(int i=0; i<n; i++){
//         if(vec[i]!=vec[i-1] && i!=0){
//             cout<<vec[i]<<" ";
//         }
//     }
// }

// // Method 2: 
// // TC: O(n)
// // SC: O(n)
// void removeSuplicates2(vector<int>& vec){
//     set<int>s(vec.begin(), vec.end());
//     for(auto x: s) cout<<x<<" ";
// }

// // Method 3: 
// // TC: O(n)
// // SC: O(n)
// void removeSuplicates3(vector<int>& vec){
//     int n = vec.size();
//     unordered_map<int, int>mp;
//     for(int i=n-1; i>=0; i--){
//         mp[vec[i]]++;
//     }
//     for(auto x: mp) cout<<x.first<<" ";
// }


// int main()
// {
//     vector<int>vec{2,3,1,9,3,1,3,9};
//     removeSuplicates1(vec);
//     cout<<endl;
//     removeSuplicates2(vec);
//     cout<<endl;
//     removeSuplicates3(vec);
//     return 0;
// }



#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> removeDuplicates(vector<int> arr) {
    unordered_set<int> uniqueSet;
    vector<int> result;

    for (int num : arr) {
        if (uniqueSet.insert(num).second) {
            // If the insertion is successful, it's a unique element
            result.push_back(num);
        }
    }

    return result;
}

int main() {
    vector<int> arr1 = {2, 3, 1, 9, 3, 1, 3, 9};
    vector<int> arr2 = {2,3,1,9,3,1,3,9};;

    cout << "Original Array 1: ";
    for (int num : arr1) {
        cout << num << " ";
    }

    vector<int> result1 = removeDuplicates(arr1);
    cout << "\nArray 1 after removing duplicates: ";
    for (int num : result1) {
        cout << num << " ";
    }

    cout << "\n\nOriginal Array 2: ";
    for (int num : arr2) {
        cout << num << " ";
    }

    vector<int> result2 = removeDuplicates(arr2);
    cout << "\nArray 2 after removing duplicates: ";
    for (int num : result2) {
        cout << num << " ";
    }

    return 0;
}
