#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
 int arr[]={1,5,3,6,3,8,5,0};
int n=8;
bool flag=true;
for(int i=0;i<n-1;i++){
  if(arr[i]>arr[i+1]){
    flag=false;
    break;
  }
}
if(flag==true) cout<<"array is sorted";
else cout<<"not sorted";
}
