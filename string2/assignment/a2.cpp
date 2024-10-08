#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  string s;
  cin>>s;
  sort(s.begin(),s.end());
 int x=stoi(s);
 int r=x%100;
 r=r/10;
 
cout<<r;
}

