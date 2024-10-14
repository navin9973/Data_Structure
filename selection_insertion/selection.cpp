#include<iostream>
#include<climits>
using namespace std;
int main(){
  int arr[]={1,4,3,2,5};   //selection sort me min value first element se swap ho jata h   //selection sort is unstable sort
  int n=5;
  
  for(int i=0;i<n-1;i++){
int min=INT_MAX;
int idx;
for(int j=i;j<n;j++){
  if(min>arr[j]){
     min=arr[j];
     idx=j;
  }
}

swap(min,arr[i]);
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    
  }
}