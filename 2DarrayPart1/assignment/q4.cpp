#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int l1,r1,l2,r2;
    cout<<"enter cordinate";
    cin>>l1>>r1;
    cin>>l2>>r2;
 int res=0;
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
           res+=arr[i][j];
        }
    }
    cout<<res;
    
    }
    
