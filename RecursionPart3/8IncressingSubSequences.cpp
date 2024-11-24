
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void subset(int arr[],int n,int x,vector<int>v,int k){
  if(n==x){
    if(v.size()==k){
   for(int i=0;i<v.size();i++)
    cout<<v[i];
    cout<<endl;
    }
    return;
  }
 
   subset(arr,n,x+1,v,k);
  v.push_back(arr[x]);
  subset(arr,n,x+1,v,k);

  

}
int main(){
 int  arr[]={1,2,3,4,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  vector<int>v;
  int k=3;
  subset(arr,n,0,v,k);
 
  }