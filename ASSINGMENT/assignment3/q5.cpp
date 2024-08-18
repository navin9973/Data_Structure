#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a,b,c";
    cin>>a>>b>>c;
    if(a==b&&b==c){
        cout<<"equilateral triangle ";
    }
    else if(a==b||a==c||b==c){
        cout<<" isosaleses triangle ";
    }
    else {
        cout<<"scalene triangle";

    }
}