// #include<iostream>
// using namespace std;
// void maximum(int arr[],int n,int x){
//   if(n==0) {
//     cout<<x;
//     return;
//     };
//   if(x<arr[n]) x=arr[n];
//   maximum(arr,n-1,x);
  

// }
// int  main(){
//   int arr[]={1,2,3,4,5,2,8,3};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   maximum(arr,n,0);
// }


// #include<iostream>
// using namespace std;
// int  maximum(int arr[],int n,int x){
//   if(n==0) {
//     return x;
//     };
//   if(x<arr[n]) x=arr[n];
//   maximum(arr,n-1,x);
 

// }
// int  main(){
//   int arr[]={1,2,3,4,5,2,8,3};
//   int n=sizeof(arr)/sizeof(arr[0]);
//  cout<< maximum(arr,n,0);
// }


#include<iostream>
#include<climits>
using namespace std;
int  maximum(int arr[],int n,int x){
  if(n==x)  return INT_MIN;
  return max(arr[x],maximum(arr,n,x+1)) ;

 

}
int  main(){
  int arr[]={1,2,3,4,5,2,8,3};
  int n=sizeof(arr)/sizeof(arr[0]);
 cout<< maximum(arr,n,0);
}