#include<iostream>
using namespace std;
int main(){

  int n=20;
  int low=0,high=n;
  bool flag=false;
  while(low<=high){
    int mid=low+(high-low)/2;
    if(mid*mid==n){
        cout<<"yes"<<mid;
      bool flag=true;
      break;
    }
    else if(mid*mid<n)low=mid+1;
    else high=mid-1;
  }
  if(flag==false) cout<<"not perfect square root";
}
