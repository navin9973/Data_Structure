#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
 int arr[]={1,5,3,6,3,8,5,0};
int n=8;
for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
}

for(int i=0;i<n-1;i++){
  bool flag=false;
  for(int j=0;j<n-1-i;j++){
    if(arr[j]<arr[j+1]){     //bubble sort is stable sort kyu ki jo same no. pahle aata h o arrange krne ke baad v pahle rhagt h
    int temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
    flag=true;
    }
  }
  if(flag==false) break;
}
cout<<endl;
for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
}
}
