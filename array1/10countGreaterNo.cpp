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
   int x;
   cout<<"enter the no:";
   cin>>x;
    int count=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>x) count++;
    }
   cout<<count;
}