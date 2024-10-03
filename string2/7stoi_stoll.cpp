#include<iostream>
#include<string>
using namespace std;
int main(){

string s="123456";  //stoi is used to convert string into number
int x=stoi(s);
cout<<x<<endl;

string z="1223876348754922";
long long y=stoll(z);  //stoll is used to store bigger number bata which is out of integer range
cout<<z;
}