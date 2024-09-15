#include<iostream>
using namespace std;
int main(){
    
    int m;
    int n;
    cout<<"enter row of first matrix";
    cin>>m;
    cout<<"enter column of first matrix";
    cin>>n;
   

    int p;
    int q;
    cout<<"enter row of second matrix";
    cin>>p;
    cout<<"enter column of second matrix";
    cin>>q;
   
    if(n==p){
         int arr[m][n];
    cout<<"enter element of first array";

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }

         int brr[p][q]; 
    cout<<"enter element of second array";
    
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>brr[i][j];
            }}
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<3;k++){
                  res[i][j]+=arr[i][k]*brr[k][j];
                }
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    else{
        cout<<"multiplication can't possible";
    }

    

}
