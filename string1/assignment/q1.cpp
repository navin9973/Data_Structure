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
    for(int i=0;i<n;i++){
        if(i%2!=0){
            s[i]='#';
        }
    }
     for(int i=0;i<n;i++){
        cout<<s[i];
    }
}
