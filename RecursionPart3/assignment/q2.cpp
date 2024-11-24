// #include<iostream>
// #include<climits>
// using namespace std;
// void largestNum(int arr[],int idx,int n,int sum){
//   if(idx==n) {
//     cout<<sum;
//     return;
//   }
//    sum+=arr[idx];
//   largestNum(arr,idx+1,n,sum);

// }
//  int main(){
//   int arr[]={1,2,3,4,7,5,8,90};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   int sum=0;
//   largestNum(arr,0,n,sum);
//  }

//another way

#include<iostream>
#include<climits>
using namespace std;
int totalsum(int arr[],int n){
  if(n<=0) {
    
    return 0;
  }
   return arr[n-1]+totalsum(arr,n-1);
}
 int main(){
  int arr[]={1,2,3,4,7,5,8,90};
  int n=sizeof(arr)/sizeof(arr[0]);
  
  cout<<totalsum(arr,n);
 }