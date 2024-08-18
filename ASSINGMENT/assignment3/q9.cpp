#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character";
    cin>>ch;
    int y=(int)ch;
    if(y>=65&&y<=122){
        cout<<"the character is alphabate";
    }
    else if (y>=48&&y<=57){
        cout<<"the character is digit";

    }
    else {
        cout<<"the character is special charater";
    }
}