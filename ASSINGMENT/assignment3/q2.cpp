#include <iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter radius";
    cin>>r;
    if(3.14*r*r>2*3.14*r){
        cout<<"area is greater ";
    }
    else{
        cout<<"circumference is larger";
    }
}