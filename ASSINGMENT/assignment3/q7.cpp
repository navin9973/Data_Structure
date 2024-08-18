#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout <<"enter the cordinate (x,y) ";
    cin>>x>>y;
    if(x==0&&y==0){
        cout <<"the point lie on origin";
    }
    else if(x==0&&y!=0){
        cout<<"the point lie in y axis ";
    }
    else if (y==0&&x!=0){
        cout <<"the point lie on x axis";
    }
    else {
        cout <<"the point lie in plane";
    }
}