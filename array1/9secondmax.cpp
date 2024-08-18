#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter size of the array:";
    cin>>n;
    int arr[n];
    cout<<"enter the number:";
    for(int i=0;i<=n-1;i++){
         cin>>arr[i];
    }

    int max=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]) max=arr[i];
    }
    cout<<"the max no:"<<max<<endl;
      int smax=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(arr[i]!=max&&arr[i]>smax) smax=arr[i];
    }
    cout<<"the sec max is :"<<smax;
}