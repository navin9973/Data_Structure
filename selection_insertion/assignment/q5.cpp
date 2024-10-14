#include<iostream>
using namespace std;
int main(){
  int arr[]={4,2,6,1,3};
  int n=5;
  for(int i=1;i<n;i++){
    int j=i;
    while(j>=1&&arr[j]<arr[j-1]){
      swap(arr[j],arr[j-1]);
      j--;
    }
  }
  int sum=0;
  for(int i=0;i<n;i++){
    sum=sum*10+arr[i];
  }
  cout<<sum;
  cout<<endl;


for(int i=n-1;i>=0;i--){
  if(arr[i]>arr[i-1]) {swap(arr[i],arr[i-1]);
  break;}
}
int sum2=0;
for(int i=0;i<n;i++){
    sum2=sum2*10+arr[i];
  }
  cout<<sum2<<endl;
  cout<<"final sum is :"<<sum+sum2;
}