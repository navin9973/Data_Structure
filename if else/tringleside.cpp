#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b>c)&&(a+c>b)&&(b+c>a)){
        cout<<"side of tringle";
    }
    else{
        cout<<"not tringle side";
    }
}