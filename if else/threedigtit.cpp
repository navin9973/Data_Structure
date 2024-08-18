#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the number ";
    cin>>x;
    if(x>=100&&x<=999){
        cout<<"number is three digit";
    }
    else {
        cout<<"number is not of three digit";
    }
}