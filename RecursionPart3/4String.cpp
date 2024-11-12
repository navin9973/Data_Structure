#include<iostream>
#include<string>
using namespace std;
// void print(string str,int n,string s){

//   if(n==-1 ) {
    
//     return;
//   }
//   print(str,n-1,s);
//   if(str[n]!='a') s+=str[n];
//   cout<<s;
void print(string str,int n,string s){

  if(n==str.length() ) {
    cout<<s;
    return;
  }
  int ch=str[n];
  
  if(str[n]!='a') s+=str[n];
  print(str,n+1,s);
  
}
 int main(){
  string str="araghav guarg";
int n=str.size();
   print(str,0 ,"");
 }