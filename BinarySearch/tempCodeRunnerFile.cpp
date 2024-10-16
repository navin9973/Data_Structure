#include<iostream>
using namespace std;
int main(){
  int arr[]={1,2,3,4,5,6,8,9};
  int n=8;

  int target=7;
  for(int i=0;i<n;i++){
    if (arr[i]>target){
       cout<<arr[i-1]<<" "<<i-1;
       break;
     
  }
 

}

}
