#include<iostream>
using namespace std;
int main(){
  int arr[5][6]={{0,0,0,0,1,1},{0,0,1,1,1,1},{0,0,0,1,1,1},{0,1,1,1,1,1},{0,0,0,1,1,1}};
 int m=5;
 int n=6;
 int row=-1;
 int max=0;
for(int i=0;i<m;i++){
  int count=0;
     int low=0;
     int high=6-1;
     int firstidx=-1;
    while(low<=high){
    int mid = (high+low)/2;
    if(arr[i][mid]==1){
        firstidx=mid;
        high=mid-1;
       
    }
   else low=mid+1;
  if(firstidx!=-1) count=n-firstidx;
  if(max<count){
    max=count;
    row=i;
  }
   }
  
  }
   cout<<max<<" "<<row;
}

