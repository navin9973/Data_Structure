// #include<iostream>
// using namespace std;
// int main(){
//   int arr[]={1,2,3,4,4,5,6,7};
//   int n=8;
//   int low=0,high=n-1;
//   while(low<=high){
//     int mid=low+(high-low)/2;
//     if(arr[mid]==mid+1){
//         low=mid+1;
//     }
//     else high=mid-1;
//   }
//   cout<<arr[high];
// }


// there is only one repeating element
#include<iostream>
using namespace std;
int main(){
  int arr[]={1,2,2,4,4,5,6,6,8};
  int n=9;
  int low=0,high=n-1;
  while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid]==mid+1){
        low=mid+1;
    }
    if(arr[mid]==mid) {
      if(arr[mid]==arr[mid-1]){
        cout<<arr[mid];
        break;
      }
      else high=mid-1;
    }
  }
  
}
