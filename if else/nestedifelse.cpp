#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the numnber";
    cin>>x;
    if(x%5==0||x%3==0){
        if(x%15!=0){
            cout<<"number is divisible by 5 or 3";
        }
        else{
            cout <<"not divisible";
        }
    }
else{
    cout<<"not divisible";
}
}