#include<iostream>
#include<vector>
using namespace std;
void subarray(int arr[],int n,vector<int>v,int idx){
  if(idx==n){
    for(int i=0;i<v.size();i++){
      cout<<v[i];
    }
    cout<<endl;
    return;
  }

  subarray(arr,n,v,idx+1);
  if(v.size()==0||arr[idx-1]==v[v.size()-1]){
  v.push_back(arr[idx]);
  subarray(arr,n,v,idx+1);
  }
}
int main(){
  int arr[]={1,2,3,4};
  int n=sizeof(arr)/sizeof(arr[0]);
  vector<int>v;

//  for(int i=0;i<n;i++){
//   for(int k=i;k<n;k++){
//     for(int j=i;j<=k;j++){
//       cout<<arr[j];
//     }
//     cout<<endl;
//   }
//  }
subarray(arr,n,v,0);
}