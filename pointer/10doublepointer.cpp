 #include<iostream>
using namespace std;

int main(){
    int a =4;
    int *ptr=&a;
    int **p=&ptr; //double pointer is used to store the adress of another pointer variable
    cout<<ptr<<" "<<p<<endl;
    cout<<a<<endl;
    cout<<*ptr<<endl;
    cout<<**p<<endl; 

    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<*p<<endl; //all cout give adress of a

}