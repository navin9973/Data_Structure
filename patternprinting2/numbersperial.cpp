#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a rows";
    cin>>n;
    for(int a=1;a<=2*n-1;a++){
        for(int j=1;j<=2*n-1;j++){
            if(a==j){
                 cout<<n;
            }
            else
            cout<<n-1;
        }
        cout<<endl;
    }
}