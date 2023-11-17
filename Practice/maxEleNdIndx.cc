#include<bits/stdc++.h>
using namespace std;




/* ///---------------------------------------
pair<int,int> maxEleIdx(int arr[],int size){ 
  
  int max=INT_MIN,maxIdx=0;
  for(int i=0;i<size;i++){
    if(arr[i]>max) max=arr[i],maxIdx=i;
  }
  
  return {max,maxIdx};

}



int main(){

  int arr[]={2,5,7,9,1,10,31,19,45,23};
  int size=sizeof(arr)/sizeof(arr[0]);
   
  pair<int,int>result = maxEleIdx(arr,size);

  // cout<<"Max Elemenr:"<< maxEleIdx(arr,size)<<endl;
  cout<<"Max Elemenr:"<< result.first <<endl;

  // cout<<"at index:"<<  maxEleIdx(arr,size)<<endl;
  cout<<"at index:"<< result.second <<endl;

  return 0;
}
///--------------------------------------- */

//now,converting it to pair,just to return two values simultaneously   

/* ///-------------------wrong all-------------------
int maxEleIdx(int arr[],int size){ 
  
  int max=INT_MIN,maxIdx=0;
  for(int i=0;i<size;i++){
    if(arr[i]>max) max=arr[i],maxIdx=i;
  }
  
  return {max,maxIdx};
}

int main(){

  int arr[]={2,5,7,9,1,10,31,19,45,23};
  int size=sizeof(arr)/sizeof(arr[0]);
   
  // maxEleIdx(arr,size);

  cout<<"Max Elemenr:"<< maxEleIdx(arr,size)<<endl;
  cout<<"at index:"<<  maxEleIdx(arr,size)<<endl;

  return 0;
}
///---------------------------------------------------------
 */




/* ///---------------------------------------
void maxEleIdx(int arr[],int size){ //just []he bracket navt dilt tr error yet hota
  
  int max=INT_MIN,maxIdx=0;
  for(int i=0;i<size;i++){
    if(arr[i]>max) max=arr[i],maxIdx=i;
  }
  
  cout<<"Max Elemenr:"<<max
  <<" at index:"<<maxIdx<<endl;
}



int main(){

  int arr[]={2,5,7,9,1,10,31,19,45,23};
  int size=sizeof(arr)/sizeof(arr[0]);
   
  maxEleIdx(arr,size);

  return 0;
}
///---------------------------------------
 */





/* ///---------------------------------------
int main(){

  int arr[]={2,5,7,9,1,10,31,19,45,23};
  int size=sizeof(arr)/sizeof(arr[0]);

  int max=INT_MIN,maxIdx=0;;
  for(int i=0;i<size;i++){
    if(arr[i]>max) max=arr[i],maxIdx=i;
  }
   
   cout<<"Max Elemenr: "<<max
   <<" at index: "<<maxIdx<<endl;

  return 0;
}
///---------------------------------------
*/














///---------------------------------------
// void MaxInArray (int arr[], int length);

// int main ()
// {
//   int n; cin >> n;
//   int arr[n];

//   for (int i = 0; i < n; i++)
// 	cin >> arr[i];

//   MaxInArray (arr, n);  //function called

//   return 0;
// }

// void MaxInArray (int arr[], int length)
// {
//   int max = INT_MIN, index = -1;
//   for (int i = 0; i < length; i++){

//   	if (arr[i] > max){
//       max = arr[i];
//       index = i;
//     }

// 	}
//   cout << max << endl << index;
// }
///---------------------------------------
