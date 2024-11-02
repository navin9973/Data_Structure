#include<iostream>
using namespace std;
int main(){
  int arr[]={1,2,3,4,5,6,7,8,9};
  int low=0;
  int high=1;
  int target=8;
  while(arr[high]<target){
    low=high;
    high=high*2;

  }
  while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid]==target){
      cout<<mid;
      break;
    }
    else if(arr[mid]<target) low=mid+1;
    else high=mid-1;
  }
}