#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
  string str="raghav is a pw teacher.and he is a dsa teacher";
 vector<string>s;
 string temp;
 stringstream ss(str);
 while(ss>>temp){
s.push_back(temp);
 }
 sort(s.begin(),s.end());
 int n=s.size();
  int count=1;
  int maxc=0;
 for(int i=0;i<n;i++){
 if(s[i]==s[i+1]) count++;
 else count=1;
 maxc=max(maxc,count);
 }
 count=1;
 for(int i=0;i<n;i++){
  if(s[i]==s[i+1]) count++;
  else count=1;
  if(maxc==count){
    cout<<s[i]<<" "<<maxc<<endl;
  }
 }
}