#include<iostream>
using namespace std;
int main(){
    int sq[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            int temp=sq[i][j];
            sq[i][j]=sq[j][i];
            sq[j][i]=temp;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<sq[i][j]<<" ";
        }
        cout<<endl;
    }
}