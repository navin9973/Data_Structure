#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
 int arr[]={1,0,3,6,3,8,5,0};
int n=8;
for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
}

for(int i=0;i<n-1;i++){
 
  for(int j=0;j<n-1-i;j++){
    if(arr[j]==0){     
    int temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
    }
  }
 
}
cout<<endl;
for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
}
}
