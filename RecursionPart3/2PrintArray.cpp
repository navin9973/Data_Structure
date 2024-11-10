// #include<iostream>
// using namespace std ;
// void hanoi(int arr[],int n){
//   if(n==0)return;
//   hanoi(arr,n-1);
//   cout<<arr[n-1]<<" ";
// }
// int main(){
//   int arr[] = {1,2,3,4,6};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   hanoi(arr,n);
// }
//for vector
#include<iostream>
#include<vector>
using namespace std ;
void hanoi(vector<int>&v,int n){
  if(n==0)return;
  hanoi(v,n-1);
  cout<<v[n-1]<<" ";
}
int main(){
  int arr[] = {1,2,3,4,6};
  int n=sizeof(arr)/sizeof(arr[0]);
  vector<int>v(n);
  for(int i=0;i<n;i++){
    v[i]=arr[i];
  }
  int c=v.size();
  hanoi(v,c);
}