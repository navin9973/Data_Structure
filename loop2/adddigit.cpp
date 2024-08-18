#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    int sum=0;
    int lastdigit;
    while(n>0){
        lastdigit=n%10;
        n/=10;
        sum+=lastdigit;
    }
    cout<<sum;
}