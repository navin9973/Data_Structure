#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"enter the number";
    cin>>n;
    int sum=0;
    int lastdigit;
    int r=0;
    int x=n;
    while (n>0){
        lastdigit=n%10;
        r=r*10;
        r+=lastdigit;
        n/=10;
        
    }
    cout<<r+x;
}