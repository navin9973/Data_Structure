#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character ";
    cin>>ch;
    int ascaii=(int)ch;
    if(ascaii>=65&&ascaii<=90||ascaii>=97&&ascaii<=122){
        cout<<"char is alphabate";
    } 
    else{
        cout<<"not alphabet";
    }
}