// #include<iostream>
// using namespace std;
// int main(){
//   int arr[]={1,2,3,4,5,6,8,9};
//   int n=8;

//   int target=7;
//   for(int i=0;i<n;i++){
//     if (arr[i]>target){
//        cout<<arr[i-1]<<" "<<i-1;
//        break;
     
//   }
 

// }

// }

////LOWER BOUND  means target ke just kam
#include<iostream>
using namespace std;
int main(){
  int arr[]={1,2,3,4,5,6,8,9};
  int n=8;
  int target=8;
  int low=0;
  int high=n-1;
  bool flag=false;
  while(low<=high){
    int mid =(low+high)/2;
    if(arr[mid]==target) {
      cout<<arr[mid-1];
      flag=true;
      break;
    }
    else if(arr[mid]>target) high=mid-1;
    else low=mid+1;

  }
  if(flag==false) cout<<arr[high];



}


////UPPER BOUND  target ke just baad
#include<iostream>
using namespace std;
int main(){
  int arr[]={1,2,3,4,5,6,8,9};
  int n=8;
  int target=8;
  int low=0;
  int high=n-1;
  bool flag=false;
  while(low<=high){
    int mid =(low+high)/2;
    if(arr[mid]==target) {
      cout<<arr[mid+1];
      flag=true;
      break;
    }
    else if(arr[mid]>target) high=mid-1;
    else low=mid+1;

  }
  if(flag==false) cout<<arr[low];



}