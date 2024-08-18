// #include<iostream>
// using namespace std;
// int main(){
//     int x=12;
//     int y=32;
//     int * p=&x;
//     int* p2=&y;
//     cout<<*p+*p2<<endl;
    

// }
#include<iostream>
using namespace std;
int main(){
    int x;
    int* p=&x;
    cout<<"enter first no."<<endl;
    cin>>*p;
    int y;
    int* p2=&y;
    cout<<"enter sec no."<<endl;
    cin>>*p2;
    cout<<*p+*p2<<endl;
    

}