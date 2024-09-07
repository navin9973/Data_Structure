#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the number of student of array";
    cin>>m;
    int n =2;
    

    int arr[m][n]; 
    cout<<"enter roll number and marks:";
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
