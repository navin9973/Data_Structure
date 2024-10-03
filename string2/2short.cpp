#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());  //asscii value ke order me sort kr ke de dega sapce ka value chhota hta h sb se pahle aayega
    cout<<s;
}
