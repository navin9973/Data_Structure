#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%5==0){
        if(n%3==0){
        cout<<"divisible by 5 and 3";
    }
    else{
        cout<<"not divisible";
    }
    }
    else{
        cout<<"not divisible";
    }
}