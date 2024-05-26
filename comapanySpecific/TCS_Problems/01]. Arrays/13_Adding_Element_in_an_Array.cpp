/*
Adding Element in an Array
Problem Statement: Given an array of N integers, write a program to add an array element at the beginning, end, and at a specific position.

Example:
Input: N = 5, array[] = {1,2,3,4,5}
insertbeginning(6)
insertending(7)
insertatpos(8,4)
Output: 6,1,2,8,3,4,5,7
Explanation: 6 is added at the beginning and 7 is added at the end and 8 is added at position 4
*/ 

#include<bits/stdc++.h>   //i love this library yaaar...
using namespace std;


////---------------------------------------------------------
///now for array
int main(){
    int n;cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
     cin>>arr[i];

    cout<<"Enter no at begin:";
    int a;cin>>a;
    
    for(int i=n-1;i>=0;i--)
        arr[i+1]=arr[i];
    arr[0]=a;

    // for(int g:arr) cout<<g<<" ";  //last term isn't showing when i use this loop
     for (int i = 0; i <= n; i++)    //idk why this happening
        cout << arr[i] << " ";

    cout<<"\nEnter no at end:";
    int b;cin>>b;

    n=n+1;
    arr[n]=b;
    for (int i = 0; i <= n; i++)    
        cout << arr[i] << " ";

    // cout<<"Enter no. at index:";int f,g;cin>>g>>f;
    
    // n=n+1;
    // for(int i=n-1;i>=f;i--){
    //     arr[i+1]=arr[i];
    // }arr[f-1]=g;
    // for (int i = 0; i <= n; i++)    
    //     cout << arr[i] << " ";

    cout << "\nEnter number at index: ";
    int f, g;
    cin >> g >> f;

    n = n + 1;
    for (int i = n - 1; i >= f; i--) {
        arr[i + 1] = arr[i];
    }
    arr[f] = g;
    for (int i = 0; i <= n; i++)
        cout << arr[i] << " ";
}
////---------------------------------------------------------




////---------------------------------------------------------
/// for vector,bcz its easy
// int main(){

//     int j;cin>>j;
//     vector<int>v(j);
    
//     cout<<"Enter vector: ";
//     for(int i=0;i<v.size();i++)
//      cin>>v[i];

//     cout<<"Enter no u want to insert at begin: ";
//     int n;cin>>n;
//     v.insert(v.begin(),n);  
//     for(int d:v) cout<<d<<" ";

//     cout<<"\nEnter no u want to insert at end: ";
//     int m;cin>>m;
//     v.push_back(m);  //it is recommmended but
//     // v.insert(v.end(),m);
//     for(int d:v) cout<<d<<" ";

//      cout<<"\nEnter no u want to insert at specific position: ";
//     int s,t;cin>>t>>s;
//     v.insert(v.begin()+t,s);
//     for(int d:v) cout<<d<<" ";
     
//     return 0;
// }
////---------------------------------------------------------













//already ready program

// // Inserting the element at the BEGINNING
// void insertatbegin(int arr[], int n, int value){
//     for(int i=n-1; i>=0; i--){
//         arr[i+1]=arr[i];
//     }
//     arr[0]=value;
//     n= n+1;
// }

// // Inserting at the END
// void insertatEnd(int arr[], int n, int value){
//     arr[n]=value;
// }

// // Insertion at specific position
// void insertatposition(int arr[], int n, int value, int pos){
//     for(int i=n-1; i>=pos; i--){
//         arr[i]=arr[i-1];
//     }
//     arr[pos-1]=value;

// }

// int main()
// {
//     int arr[9]={10,9,14,8,20,48,16,9};
//     int n=8;
//     int value=40;
//     cout<<"Before inserting the value at beginning:"<<endl;
//      for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     insertatbegin(arr,n,value);
//     cout<<"After inserting the value at beginning:"<<endl;
//     for(int i=0;i<=n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl<<endl;



//     // ----------------------INSERTING at the end --------------------------
//     value = 999;
//     cout<<"Before inserting the value at end:"<<endl;
//      for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     insertatEnd(arr,n,value);
//     cout<<"After inserting the value at end:"<<endl;
//     for(int i=0;i<=n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl<<endl;

//     // ------------------ INSERTING at Specific position -------------------
//     value = 100;
//     int pos = 5;
    
//     cout<<"Before inserting the value at Specific location:"<<endl;
//      for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     insertatposition(arr,n,value,pos);
//     cout<<"After inserting the value at specific location:"<<endl;
//     for(int i=0;i<=n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     return 0;
// }