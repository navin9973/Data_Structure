#include<iostream>
#include<string>
using namespace std;
int main(){
 string s="axyzostuvwuogcibcxkop";
 string str="";
 
for(int i=0;i<s.size();i++){
   if(s[i]>'r') str.push_back(s[i]);  
}
for(int i=1;i<str.size();i++){
  int j=i;
  while(j>=1&&str[j]>str[j-1]){
    swap(str[j],str[j-1]);
    j--;
  }
}
cout<<str;

}


