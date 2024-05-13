/*
Problem Statement –
A chocolate factory is packing chocolates into the packets. The chocolate packets here represent an array  of N number of integer values. The task is to find the empty packets(0) of chocolate and push it to the end of the conveyor belt(array).
*/

#include<iostream>
using namespace std;

void choclatePkg(int arr[], int n){
   
   int i=0;
   for(int j=0;j<n;j++){
    if(arr[j]!=0){ swap(arr[i],arr[j]); i++;}
   }
    
   for(int i=0;i<n;i++) cout<<arr[i]<<" "; 

}


int main(){
  
  int n;cin>>n;
  int arr[n];
  //int arr[n]={0}; //every ele is '0'

  for(int i=0;i<n;i++)  cin>>arr[i];
  
  choclatePkg(arr, n);

}