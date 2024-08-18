#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"enter the number";
    cin>>n;
    int a=1;
    int b=1;
    cout<<a<<endl<<b<<endl;
    for(int i=3;i<=n;i++){
        int fab=a+b;
        cout<<fab<<endl;
        a=b;
        b=fab;
    }
}