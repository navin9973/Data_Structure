#include<iostream>
using namespace std;
int main(){
  int arr[]={0,0,0,0,0,1,1,1,1,1};
  int n=10;
  int low=0;
  int high=n-1;
  int lastoccurance=-1;
  while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid]==1){
      lastoccurance=mid;
      high=mid-1;
    }
    else if(arr[mid]==0) low=mid+1;
    
  }
  cout<<n-lastoccurance;


}