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
   int prod=1;
   for (int i = 0; i <=n-1; i++)
   {
    prod=prod*arr[i];
   }
   cout<<"product of all array element "<<prod;
}