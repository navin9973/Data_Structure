#include<iostream>
#include<string>
using namespace std;
int main(){
string arr[]={"0123","0097","000082","987","1234"};
int n=sizeof(arr)/sizeof(arr[0]);
int maxstring=0;
int ind;
for(int i=0;i<n;i++){
int x=stoi(arr[i]);
if(maxstring<x){
  maxstring=x;
  ind=i;
}
}
cout<<maxstring<<" "<<ind;
}