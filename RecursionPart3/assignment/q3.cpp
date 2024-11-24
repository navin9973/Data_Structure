#include<iostream>
#include<climits>
using namespace std;
void largestNum(int arr[],int idx,int n,int ele){
  if(idx==n) {
    cout<<-1;
    return;
  }
  if(arr[idx]==ele) {
    cout<<idx;
    return;
  }
  largestNum(arr,idx+1,n,ele);

}
 int main(){
  int arr[]={1,2,3,4,7,5,8,90};
  int n=sizeof(arr)/sizeof(arr[0]);
  int ele=3;
  largestNum(arr,0,n,ele);
 }