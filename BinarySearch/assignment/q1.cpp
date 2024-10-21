#include<iostream>
using namespace std;
int main(){
  int arr[]={1,2,2,2,4,4,4,5,6,7};
  int n=10;
  int x=4;
  int low=0;
  int high=n-1;
  int lastoccurance=-1;
  while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid]==x){
      lastoccurance=mid;
      low=mid+1;
    }
    else if(arr[mid]>x) high=mid-1;
    else low =mid+1;
  }
  cout<<lastoccurance;


}