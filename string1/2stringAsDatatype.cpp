#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="navin kumar";  //decleration of string
    cout<<str<<endl;
    cout<<str[0]<<endl;

    string name;
    cin>>name;  //cin me jb hm space ya enter click krte h to iska matlab hua ki value input ho gya an next hoga
    cout<<name; //agar hmko space ke sath v input store krna h tb hm getline ka use krte h
    string n;
    getline(cin,n);
    cout<<n;

}