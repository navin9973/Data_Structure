#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the number of row of first array";
    cin>>m;
    int n;
    cout<<"enter the number of column of first array";
    cin>>n;

    int arr[m][n]; 
    cout<<"enter the first array element:";
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    int a;
    cout<<"enter the number of row of second array";
    cin>>a;
    int b;
    cout<<"enter the number of column of second array";
    cin>>b;
    int brr[a][b]; 

cout<<"enter the second array element:";
    for(int i=0;i<=a-1;i++){
        for(int j=0;j<=b-1;j++){
            cin>>brr[i][j];
        }
    }

    //  for(int i=0;i<=m-1;i++){
    //     for(int j=0;j<=n-1;j++){
    //         cout<<arr[i][j]+brr[i][j]<<" ";   ////direct sum print kr rhe h
    //     }
    //     cout<<endl;
    // }

    int res[m][n];  //extra array me store kr ke print kr rhe h
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            res[i][j]=arr[i][j]+brr[i][j];
        }
    }
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
