#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a number";
cin>>n;
int lastdigit=0;
int r=0;
while(n>0){
    lastdigit=n%10;
    r*=10;
    n/=10;
    r+=lastdigit;
}
cout<<r;
}