#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter size of string";
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
   string flag;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
          if(s[i]==s[j]) flag="yes";
          else flag="no";
        }
   
}

cout<<flag;
}