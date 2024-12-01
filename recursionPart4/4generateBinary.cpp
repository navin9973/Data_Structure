#include<iostream>
#include<string>
using namespace std;
int n=3;  //global varibale 
void binary(string s){
  if(n==s.length()) {
      cout<<s<<endl;
    return;
  }
    binary(s+"0");
    if(s.length()==0||s[s.length()-1]=='0')
    binary(s+"1");
}
 int main(){
   
   string s="";
   binary(s);
 }