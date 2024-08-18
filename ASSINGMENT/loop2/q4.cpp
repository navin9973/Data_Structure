#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int sum=0;
    int lastdigit;
    while(n>0){
        lastdigit=n%10;
        n/=10;
        if(lastdigit%2==0){
            sum=sum+lastdigit;
        }
        else{
            sum=sum+0;
        }

    }
    cout<<sum;
}