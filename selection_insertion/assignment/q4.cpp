#include<iostream>
using namespace std;
int main(){
  int arr[]={4,2,6,1,3};
  int n=5;
  for(int i=1;i<n;i++){
    int j=i;
    while(j>=1&&arr[j]<arr[j-1]){
      swap(arr[j],arr[j-1]);
      j--;
    }
  }
  int sum=arr[0]+arr[1];
  cout<<sum;
}