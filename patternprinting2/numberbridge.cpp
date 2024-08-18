#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a rows";
    cin>>n;
    int nsp=1;
    for(int a=1;a<=2*n-1;a++){
    cout<<a;}
    cout<<endl;
    for(int i=1;i<=n-1;i++){
        int b=1;
        for(int j=1;j<=n-i;j++){
            cout<<b;
            b++;
        }
        for(int q=1;q<=nsp;q++){
        cout<<" ";
        b++;
        }
        nsp+=2;

        for(int k=1;k<=n-i;k++){
            cout<<b;
            b++;
    }
        cout<<endl;
    }
}