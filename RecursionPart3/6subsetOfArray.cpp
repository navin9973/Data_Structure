
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void subset(char arr[],int n,int x,vector<string>v){
  if(n==x){
   for(int i=0;i<v.size();i++)
    cout<<v[i];
    cout<<endl;
    return;
  }
   subset(arr,n,x+1,v);
  v.push_back(string(1,arr[x]));
  subset(arr,n,x+1,v);
 
  

}
int main(){
  char arr[]={'a','b','c'};
  int n=sizeof(arr)/sizeof(arr[0]);
  vector<string>v;
  subset(arr,n,0,v);
 
  }