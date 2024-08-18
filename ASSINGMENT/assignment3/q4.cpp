#include <iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"enter length and breath";
    cin>>l>>b;
    if(l*b>(2*(l+b))){
        cout<<"area is greater ";
    }
    else{
        cout<<"circumference is larger";
    }
}