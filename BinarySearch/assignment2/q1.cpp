#include<iostream>
using namespace std;
int main(){
  int arr[]={9,8,7,6,5,4,3,2,1};
  int n=0;
 int  low=0;
  int high=n-1;
  int x=3;
  bool flag=false;
  while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid]==x){
      cout<<mid;
      flag=true;
      break;
    }
    else if(arr[mid]<x) high=mid-1;
    else low=mid+1;
  }
if(flag==false) cout<<"element not found";
}