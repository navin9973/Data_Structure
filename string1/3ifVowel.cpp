//string is data type which store sequence of word or sentence
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }

//    string s="navin";
   int count=0;
   int i=0;
   while(s[i]!='\0'){
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
        count++;
    
    }
    i++;
   }
cout<<count;
}