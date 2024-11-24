#include<iostream>
#include<climits>
using namespace std;
void largestNum(int arr[],int idx,int n,int min){
  if(idx==n) {
    cout<<min;
    return;
  }
  if(arr[idx]<min) min=arr[idx];
  largestNum(arr,idx+1,n,min);

}
 int main(){
  int arr[]={1,2,3,4,7,5,8,90};
  int n=sizeof(arr)/sizeof(arr[0]);
  int max=INT_MAX;
  largestNum(arr,0,n,max);
 }