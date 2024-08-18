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
   int mx=INT_MIN;
   int smax=INT_MIN;
   for (int i = 0; i <=n-1; i++)
   {
     if(arr[i]>mx) {
     smax=mx;
     mx=arr[i];
   }
   else if(smax<arr[i]&&arr[i]!=mx){ smax=arr[i];}
   
   
   }
cout<<mx<<endl;
if(smax==INT_MIN)
cout<<"no sec max no:";
else{
cout<<smax<<endl;
}}