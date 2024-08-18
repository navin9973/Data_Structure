#include<iostream>
using namespace std;
int main(){
    int m1,m2,m3 ;
    cout<<"enter marks ";
    cin>>m1>>m2>>m3;
    if (m1<=m2&&m1<=m3){
        cout<<m1<<"least marks student";
    }
    else if (m2<=m1&&m2<=m3){
        cout<<m2<<"least marks student";
    }
    else {
        cout<<m3<<"least marks student";
    }
}