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
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'){
            count++;
        }
   
}

cout<<count;
}