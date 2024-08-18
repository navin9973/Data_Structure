#include<iostream>
using namespace std;
int main(){
    int marks[5];
    for(int i=0;i<=4;i++){
        cin>>marks[i];
    }
    int sum =0;
    for(int i=0;i<=4;i++){
       sum=sum+marks[i];
    
    }
    cout<<sum;
}