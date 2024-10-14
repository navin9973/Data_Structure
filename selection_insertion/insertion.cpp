#include<iostream>
using namespace std;
int main(){
  int arr[]={3,4,2,1,5}; //insertion is stable sort beacuse it swap adjecent element
  int n=5;
  for(int i=1;i<n;i++){
//     int j=i;
//    while(j>=1){
//     if(arr[j]>arr[j-1]) break;
//     if(arr[j]<arr[j-1]){
//       swap(arr[j],arr[j-1]);
//       j--;
//     }

//    }
//   }
//  for(int i=0;i<n;i++){
//   cout<<arr[i]<<" ";
//  }
for(int j=i;j>=1;j--){
   if(arr[j]>arr[j-1]) break;
    if(arr[j]<arr[j-1]){
      swap(arr[j],arr[j-1]);
    
    }
}

}
 for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
 }

}


