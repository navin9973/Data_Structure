#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the number of row of array";
    cin>>m;
    int n;
    cout<<"enter the number of column of array";
    cin>>n;

    int arr[m][n]; 
cout<<"enter the array element:";
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
     for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            sum+=arr[i][j];
        }
    }
    cout<<sum;
}
