// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//   int arr[]={19,21,8,4,2};
//   int n=5;
//   for(int i=0;i<n;i++){
//     int min=INT_MAX;
//     int idx;
//     for(int j=0;j<n;j++){
//       if(arr[j]<=0) continue;
//       if(arr[j]<min){
//         min=arr[j];
        
//         idx=j;
//       }
//     }
//     arr[idx]=-i;

    
//   }
//   for(int i=0;i<n;i++){
//     cout<<-arr[i]<<" ";
//   }
// }

#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
  int arr[]={19,21,8,4,2};
  int n=5;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  vector<int>v(n,0);
  for(int i=0;i<n;i++){
    int min=INT_MAX;
    int idx=0;
    for(int j=0;j<n;j++){
      if(v[j]==1) continue;
      else if(arr[j]<min){
        min=arr[j];
        idx=j;
      }
    }
    arr[idx]=i;
    v[idx]=1;

    
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}

