#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void subset(int arr[],int n,vector<int>&v,int idx){
  if(idx==n) {
    for(int i=0;i<v.size();i++){
      cout<<v[i];
    }
    cout<<endl;
    return;
  }
  subset(arr,n,v,idx+1);
  v.push_back(arr[idx]);
 subset(arr,n,v,idx+1);

}
 int main(){
  int arr[]={1,2,2};
  int n=sizeof(arr)/sizeof(arr[0]);
  vector<int>v;
  int idx=0;
  subset(arr,n,v,idx);
 }