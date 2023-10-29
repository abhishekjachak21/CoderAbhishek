#include <bits/stdc++.h>
using namespace std;

//2nd way
bool bSearch(int elem, int arr[], int n){
    int start=0;
    int end= n-1;
    while(start<=end){
        int mid= (start+end)/2;
        if(arr[mid]==elem)
            return true;
        else if(arr[mid]<elem)
            start = mid+1;
        else end= mid-1;
    }
    return false;
}

bool isSubset(int arr1[], int m, int arr2[], int n){
    
    sort(arr2,arr2+n); // library function to sort the array
    
    if(m>n) return false;

    for(int i=0; i<m; i++){    
	    bool present= bSearch(arr1[i],arr2,n);
	    if(present==false) return false;
	}
	return true;
}


int main() {
	// your code goes here
	int arr1[]={1,3,4,5,2};
	int arr2[]={2,4,3,1,7,5,15};
	
	int m= sizeof(arr1)/sizeof(arr1[0]);
	int n= sizeof(arr2)/sizeof(arr2[0]);
	
	bool ans= isSubset(arr1,m,arr2,n);
	
	if(ans==true) cout<<"arr1[] is a subset of arr2[]\n";
	else cout<<"arr1[] is not a subset of arr2[]\n";
	
	return 0;
}




// 18/8/2023

/* bool chkSubset(int arr1[],int arr2[], int m, int n){

 if(n>m) return false;
 bool flag;
 int count=0;

 for(int i=0;i<n;i++)
 {
    flag=false;
    for(int j=0;j<m;j++ )
    {
        if(arr2[i]==arr1[j])
        {
            flag=true;
            break;
        }
    }
    if(flag){count++;}
 }
 if(count==n)
 {
    return true;
 }
 return false;

//    for(int j=0;j<n;j++){
//      flag=false;
//     for(int i=0;i<m;i++){
//      if(arr1[j]==arr2[i]){
//          flag=true;
//          break;
//      }
//      return flag;
     
//    }}

//    if(flag==true) return true;
//    else false;

//    return false;
}

int main(){
  
  int arr1[]={2,7,9,1,5,0,3};
  int arr2[]={1,2,10,3,5};

  int m=sizeof(arr1)/sizeof(arr1[0]);
  int n=sizeof(arr2)/sizeof(arr2[0]);

  cout<<"Array1: ";
  for(int i:arr1){
    cout<<i<<" ";
  }cout<<endl;

   cout<<"Array2: ";
  for(int i:arr2){
    cout<<i<<" ";
  }cout<<endl;

  cout<<chkSubset(arr1,arr2,m,n)<<endl;

    return 0;
} */






//1st try 
/* void chkSubset(int arr[], int n){

   int arr2[5]={1,2,3,5};
  int c=0;
   for(int i=0;i<n;i++){
     if(arr2[i]==arr[i]) c++;
   }

   if( c == sizeof(arr2)) cout<<"Subset is present.";
   else cout<<"Not";
}

int main(){
  
  int arr[]={2,7,9,1,5,0,3};
  int n=sizeof(arr)/sizeof(arr[0]);

  cout<<"Array: ";
  for(int i:arr){
    cout<<i<<" ";
  }cout<<endl;

  chkSubset(arr,n);

    return 0;
} */
