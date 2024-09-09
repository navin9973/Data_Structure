#include<iostream>
using namespace std;
int main(){
    int arr[2][3]={1,2,3,4,5,6};
    int brr[3][4]={1,2,3,4,5,6,7,8,9,1,2,3};

    
    int res[2][4];
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            res[i][j]=0;
            for(int k=0;k<3;k++){
                res[i][j]+=arr[i][k]*brr[k][j];
            }

        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}