/*
Problem Statement:

You have an array A of N integers A1 A2 .. An. Find the longest increasing subsequence Ai1 Ai2 .. Ak
(1 <= k <= N) that satisfies the following condition:
For every adjacent pair of numbers of the chosen subsequence Ai[x] and Ai[x+1] (1 < x < k), the expression( Ai[x] & Ai[x+1] ) * 2 < ( Ai[x] | Ai[x+1] ) is true

Note: ‘&’ is the bitwise AND operation, ‘ | ‘ is the bit-wise OR operation

Input:

The first line contains an integer, N, denoting the number of elements in A.
Each line i of the N subsequent lines (where 0 ≤ i < N) contains an integer describing Ai.

ip-> 
5
15
6
5
12
1

op-> 2
*/
#include<bits/stdc++.h>
using namespace std;
int sub(int arr[], int i, int n, int prev){
    if(i == n)
       return 0;
    int a = sub(arr, i + 1, n, prev);
    int b = 0;
    if (arr[i] > prev)
       b = 1 + sub(arr, i + 1, n, arr[i]);
   
    return max(b, a);
}

int main(){
    
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0; i< n; i++)
    cin>>arr[i];
    
    int res = sub(arr, 0, n, 0);
    cout<< "\nOutput: " << res << endl ;
}