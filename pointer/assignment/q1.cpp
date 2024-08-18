#include<iostream>
using namespace std;
int main(){
    int a=6,b=7;
    int *ptr1=&a;
    int *ptr2=&b;
    int prod=(*ptr1)*(*ptr2);
    cout<<prod;

}
