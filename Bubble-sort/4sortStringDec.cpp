#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
  string s="bdzxjiojyzx";
  string res="";
  for(int i=0;i<s.size()-1;i++){
    if(s[i]>=(int)'x')  res.push_back(s[i]);
  }
  cout<<res<<" ";

for(int i=0;i<res.size()-1;i++){
  bool flag=false;
  for(int j=0;j<res.size()-1-i;j++){
    if(res[j]>res[j+1]){     
    int temp=res[j];
    res[j]=res[j+1];
    res[j+1]=temp;
    flag=true;
    }
  }
  if(flag==false) break;
}
cout<<endl;
cout<<res<<" ";
}