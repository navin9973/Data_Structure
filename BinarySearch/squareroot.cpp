#include<iostream>
using namespace std;
 int main(){
  int n=36;
  int low=0;
  int high=n;
  while(low<=high){
  int mid=(high+low)/2;
  if(mid*mid==n){
   cout<<mid;
   break;
  }
  else if(mid*mid<n) low=mid+1;
  else high=mid-1;
  }
  
 }